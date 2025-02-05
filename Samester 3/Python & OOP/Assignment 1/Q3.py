# Problem - 3

# a
# Write the difference between List and Dictionary of Python.
# Ans: I know JS.  A List in Python is similar to an Array in JavaScript, as both are ordered collections. Lists allow duplicate values and are accessed via index. In Python, lists are defined using square brackets [], while arrays in JavaScript are also defined using square brackets [].

#  A Dictionary in Python is similar to an Object in JavaScript, both of which store key-value pairs. However, dictionaries in Python allow any immutable type as a key, whereas JavaScript objects use strings or symbols as keys. Python dictionaries are defined using curly braces {}, while JavaScript objects are also defined using {}.

# b
# Write about *args and **kwargs of Python with proper examples.
# Ans: 
# *args allows a function to accept a variable number of positional arguments, which are stored as a tuple.

# Example
def print_names(*args):
    print("Dear Friends:")
    for name in args:
        print(name)

print_names("Riya", "Tania", "Moshraf")

#  **kwargs allows a function to accept a variable number of keyword arguments, which are stored as a dictionary.

# Example
def print_address(**kwargs):
    print("Address:")
    for key, value in kwargs.items():
        print(f"{key}: {value}")
        
print_address(street="Dhanmondi", district="Dhaka", country="Bangladesh")

