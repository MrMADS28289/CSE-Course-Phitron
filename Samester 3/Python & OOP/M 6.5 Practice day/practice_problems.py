#1. Create a Product class and a Shop class.
#2. Inside the Shop class, create a method name add_product which adds products using the Product class to the Shop class.
#3.  Inside the Shop class, create a method name buy_product which is used to buy a product and check whether this product is available or not. If you successfully buy a product, then throw a Congress message.


class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self):
        return f"Product(name={self.name}, price={self.price}, quantity={self.quantity})"


class Shop:
    def __init__(self, name):
        self.name = name
        self.products = []  # List to store products

    def add_product(self, product):
        """Adds a product to the shop."""
        if isinstance(product, Product):  # Check if the input is a Product object
            self.products.append(product)
            print(f"Product '{product.name}' added to the shop.")
        else:
            print("Invalid product. Please provide a valid Product object.")

    def buy_product(self, product_name, quantity):
        """Buys a product and checks availability."""
        for product in self.products:
            if product.name == product_name:
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    print(f"Congratulations! You've successfully bought {quantity} units of '{product_name}'.")
                    return
                else:
                    print(f"Sorry, '{product_name}' is out of stock or insufficient quantity.")
                    return
        print(f"Sorry, '{product_name}' is not available in the shop.")


# Example usage
my_shop = Shop("My Super Shop")

# Adding products
product1 = Product("Apple", 1.5, 10)
product2 = Product("Banana", 0.5, 20)
my_shop.add_product(product1)
my_shop.add_product(product2)

# Buying products
my_shop.buy_product("Apple", 2)  # Successfully buys
my_shop.buy_product("Banana", 25)  # Insufficient quantity
my_shop.buy_product("Orange", 1)  # Not available


#4. What is Inheritance? Explain with examples
# Inheritance is a mechanism in OOP where a class (child class) can inherit attributes and methods from another class (parent class). This promotes code reusability and a hierarchical structure.

# Example
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        return "Some generic sound"

class Dog(Animal):  # Dog inherits from Animal
    def speak(self):  # Method overriding
        return f"{self.name} says woof!"

class Cat(Animal):  # Cat inherits from Animal
    def speak(self):  # Method overriding
        return f"{self.name} says meow!"

# Creating objects
dog = Dog("Buddy")
cat = Cat("Whiskers")

print(dog.speak())  # Output: Buddy says woof!
print(cat.speak())  # Output: Whiskers says meow!

#5. What are Encapsulation and Access Modifiers? Explain with examples

# Encapsulation is the concept of bundling data (attributes) and methods (functions) that operate on the data into a single unit (class). It also involves restricting direct access to some of an object's components, which is achieved using access modifiers.

# Access Modifiers:
#1 Public: Accessible from anywhere.
#2 Protected: Accessible within the class and its subclasses (denoted by a single underscore _).
#3 Private: Accessible only within the class (denoted by double underscores __).

# Example

class BankAccount:
    def __init__(self, owner, balance=0):
        self.owner = owner
        self._balance = balance  # Protected attribute
        self.__pin = "1234"  # Private attribute

    def deposit(self, amount):
        self._balance += amount

    def withdraw(self, amount):
        if amount <= self._balance:
            self._balance -= amount
        else:
            print("Insufficient funds")

    def get_balance(self):  # Public method to access protected attribute
        return self._balance

    def __display_pin(self):  # Private method
        return f"PIN: {self.__pin}"

# Creating an object
account = BankAccount("Alice", 1000)

# Accessing public method
print(account.get_balance())  # Output: 1000

# Accessing protected attribute (not recommended, but possible)
print(account._balance)  # Output: 1000

# Accessing private attribute (will raise an error)
# print(account.__pin)  # AttributeError

# Accessing private method (will raise an error)
# print(account.__display_pin())  # AttributeError