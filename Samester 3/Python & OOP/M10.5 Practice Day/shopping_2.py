class User:
    def __init__(self, email, password):
        self.email = email
        self.password = password

    def login(self, email, password):
        return self.email == email and self.password == password


class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.orders = []

    def view_products(self, products):
        print("Available Products:")
        for product in products:
            if product.stock > 0:
                print(f"ID: {product.product_id}, Name: {product.name}, Price: ${product.price}, Stock: {product.stock}")

    def place_order(self, product, quantity):
        if product.stock >= quantity:
            order = Order(self, product, quantity)
            self.orders.append(order)
            product.update_stock(quantity)
            print(f"Order placed successfully! Order ID: {order.order_id}")
        else:
            print("Insufficient stock!")


class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.products = []

    def add_product(self, product_id, name, price, stock):
        product = Product(product_id, name, price, stock)
        self.products.append(product)
        print(f"Product '{name}' added successfully!")


class Product:
    def __init__(self, product_id, name, price, stock):
        self.product_id = product_id
        self.name = name
        self.price = price
        self.stock = stock

    def update_stock(self, quantity):
        self.stock -= quantity


class Order:
    order_counter = 0

    def __init__(self, customer, product, quantity):
        Order.order_counter += 1
        self.order_id = Order.order_counter
        self.customer = customer
        self.product = product
        self.quantity = quantity
        self.total_price = product.price * quantity

    def __str__(self):
        return f"Order ID: {self.order_id}, Product: {self.product.name}, Quantity: {self.quantity}, Total Price: ${self.total_price}"


class ECommerceApp:
    def __init__(self):
        self.customers = []
        self.sellers = []
        self.products = []

    def create_customer_account(self, email, password):
        customer = Customer(email, password)
        self.customers.append(customer)
        print("Customer account created successfully!")

    def create_seller_account(self, email, password):
        seller = Seller(email, password)
        self.sellers.append(seller)
        print("Seller account created successfully!")

    def add_product_to_marketplace(self, seller, product_id, name, price, stock):
        if seller in self.sellers:
            seller.add_product(product_id, name, price, stock)
            self.products.append(seller.products[-1])
        else:
            print("Seller not found!")

    def view_all_products(self):
        print("All Products in Marketplace:")
        for product in self.products:
            if product.stock > 0:
                print(f"ID: {product.product_id}, Name: {product.name}, Price: ${product.price}, Stock: {product.stock}")

    def place_order(self, customer, product_id, quantity):
        product = next((p for p in self.products if p.product_id == product_id and p.stock >= quantity), None)
        if product:
            customer.place_order(product, quantity)
        else:
            print("Product not available or out of stock!")


# Example Usage
if __name__ == "__main__":
    app = ECommerceApp()

    # Create accounts
    app.create_customer_account("customer1@example.com", "password123")
    app.create_seller_account("seller1@example.com", "sellerpass")

    # Retrieve users
    customer = app.customers[0]
    seller = app.sellers[0]

    # Seller adds products
    app.add_product_to_marketplace(seller, 1, "Laptop", 1000, 10)
    app.add_product_to_marketplace(seller, 2, "Smartphone", 500, 5)

    # Customer views products
    customer.view_products(app.products)

    # Customer places an order
    app.place_order(customer, 1, 2)  # Order for 2 laptops
    app.place_order(customer, 2, 6)  # This should fail due to insufficient stock

    # View all products after order
    app.view_all_products()