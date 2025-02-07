class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)

sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

#1. Write what is meant by operator overloading and method overriding with examples.

# 1. Operator Overloading
# Operator overloading allows you to define how operators (like +, -, >, <, etc.) behave for custom objects. In Python, this is done by defining special methods (also called "magic methods") in a class.

# Example:
class Cricketer(Person): #2. Find out which of these players is older using the operator overloading.
    def __init__(self, name, age, height, weight):
        super().__init__(name, age, height, weight)

    # Overloading the '>' operator
    def __gt__(self, other):
        return self.age > other.age

# Creating objects
sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

# Finding the oldest player
oldest_player = max([sakib, musfiq, kamal, jack, kalam])
print(f"The oldest player is {oldest_player.name} with age {oldest_player.age}.")

# 2. Method Overriding
# Method overriding occurs when a subclass provides a specific implementation of a method that is already defined in its superclass. The overridden method in the subclass has the same name, parameters, and return type as the method in the superclass.

# Example:
class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def display_info(self):
        return f"Name: {self.name}, Age: {self.age}"

class Cricketer(Person):
    def __init__(self, name, age, height, weight):
        super().__init__(name, age, height, weight)

    # Overriding the display_info method
    def display_info(self):
        return f"Cricketer: {self.name}, Age: {self.age}, Height: {self.height}, Weight: {self.weight}"

# Creating objects
sakib = Cricketer('Sakib', 38, 68, 91)
print(sakib.display_info())  # Output: Cricketer: Sakib, Age: 38, Height: 68, Weight: 91





#3. Write down 4 differences between the class method and static method with proper examples.

""" 
Differences Between Class Method and Static Method

Class Method
Defined using the @classmethod decorator.
Takes cls as the first argument (refers to the class).
Can access or modify class-level attributes.
Used for factory methods or methods that operate on class-level data.

Static Method
Defined using the @staticmethod decorator.
Does not take any special first argument.
Cannot access or modify class-level attributes.
Used for utility functions that do not depend on class or instance.
 
"""

# Example:
class MyClass:
    class_attr = 10

    @classmethod
    def class_method(self):
        return f"Class attribute: {self.class_attr}"

    @staticmethod
    def static_method():
        return "This is a static method."

# Using class method
print(MyClass.class_method())  # Output: Class attribute: 10

# Using static method
print(MyClass.static_method())  # Output: This is a static method.


#4. Write what are getter and setter with proper examples.

# Getters and setters are methods used to access (get) and modify (set) the values of private attributes in a controlled way.

# Example:
class Person:
    def __init__(self, name, age):
        self.__name = name  # Private attribute
        self.__age = age    # Private attribute

    # Getter for name
    def get_name(self):
        return self.__name

    # Setter for name
    def set_name(self, name):
        self.__name = name

    # Getter for age
    def get_age(self):
        return self.__age

    # Setter for age
    def set_age(self, age):
        if age > 0:
            self.__age = age
        else:
            print("Invalid age!")

# Creating an object
person = Person("Alice", 25)

# Using getters and setters
print(person.get_name())  # Output: Alice
person.set_name("Bob")
print(person.get_name())  # Output: Bob

person.set_age(-5)  # Output: Invalid age!
print(person.get_age())  # Output: 25



#5. Explain the difference between inheritance and composition with proper examples.

"""
Inheritance:
Inheritance is an "is-a" relationship.
A subclass inherits attributes and methods from a superclass.
Promotes code reuse and hierarchical relationships.
"""
#Example:
class Animal:
    def speak(self):
        return "Some generic sound"

class Dog(Animal):  # Dog "is-a" Animal
    def speak(self):
        return "Woof!"
    
"""
Composition:
Composition is a "has-a" relationship.
A class contains objects of other classes as attributes.
Promotes flexibility and avoids tight coupling.
"""
#Example:
class Engine:
    def start(self):
        return "Engine started"

class Car:
    def __init__(self):
        self.engine = Engine()  # Car "has-a" Engine

    def start(self):
        return self.engine.start()

# Using composition
my_car = Car()
print(my_car.start())  # Output: Engine started

"""
Summary:
Operator Overloading: Customizing operator behavior for objects.

Method Overriding: Providing a specific implementation of a method in a subclass.

Class Method vs Static Method: Class methods work with class-level data, while static methods are independent utility functions.

Getter and Setter: Methods to control access to private attributes.

Inheritance vs Composition: Inheritance is "is-a," while composition is "has-a."
"""