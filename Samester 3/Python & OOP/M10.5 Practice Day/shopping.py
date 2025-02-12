class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.password = password

class Customer(User):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)
        self.orders = []

    def view_products(self, store):
        print("Available Products:")
        for product in store.products:
            if product.stock > 0:
                print(f"{product.name} - ${product.price} (Stock: {product.stock})")

    def place_order(self, store, product_name, quantity):
        for product in store.products:
            if product.name == product_name and product.stock >= quantity:
                self.orders.append((product, quantity))
                product.stock -= quantity
                print(f"Order placed: {quantity} x {product.name}")
                return
        print("Product out of stock or not available.")

class Seller(User):
    def __init__(self, name, email, password):
        super().__init__(name, email, password)
        self.products = []

    def add_product(self, store, name, price, stock):
        product = Product(name, price, stock, self)
        store.products.append(product)
        self.products.append(product)
        print(f"Product {name} added successfully!")

class Product:
    def __init__(self, name, price, stock, seller):
        self.name = name
        self.price = price
        self.stock = stock
        self.seller = seller

class Store:
    def __init__(self):
        self.products = []
        self.customers = []
        self.sellers = []

    def register_customer(self, name, email, password):
        customer = Customer(name, email, password)
        self.customers.append(customer)
        print(f"Customer {name} registered successfully!")
        return customer

    def register_seller(self, name, email, password):
        seller = Seller(name, email, password)
        self.sellers.append(seller)
        print(f"Seller {name} registered successfully!")
        return seller

# Example Usage
store = Store()

# Register seller and add products
seller1 = store.register_seller("John Doe", "john@example.com", "password123")
seller1.add_product(store, "Laptop", 1200, 5)
seller1.add_product(store, "Headphones", 150, 10)

# Register customer and place an order
customer1 = store.register_customer("Alice", "alice@example.com", "mypassword")
customer1.view_products(store)
customer1.place_order(store, "Laptop", 1)
customer1.view_products(store)
