class Library:
    book_list = []

    @classmethod
    def entry_book(self, book):
        if isinstance(book, Book):
            self.book_list.append(book)
            print(f"\nBook '{book._Book__title}' added to the library. YaY!\n")
        else:
            print("\nInvalid book. Opps! Please provide a valid Book object.\n")

    @classmethod
    def view_all_books(self):
        if not self.book_list:
            print("\nOpps, Sorry! No books available in the library.\n")
        else:
            print(f"\n YaHooo!! We have {len(self.book_list)} Books in our Library!\n")
            for book in self.book_list:
                book.view_book_info()

class Book:
    def __init__(self, book_id, title, author):
        self.__book_id = book_id
        self.__title = title
        self.__author = author
        self.__availability = True

        Library.entry_book(self)

    def borrow_book(self):
        if self.__availability:
            self.__availability = False
            print(f"\nWoW! You has been borrowed Book '{self.__title}'\n")
        else:
            print(f"\nOpps! Sorry, Book '{self.__title}' is already borrowed.\n")

    def return_book(self):
        if not self.__availability:
            self.__availability = True
            print(f"\nWoW!! You finished the Book '{self.__title}'. And Thanks for returned.\n")
        else:
            print(f"\nOps! Book '{self.__title}' is already available in the library. Maybe the book from another library.\n")

    def view_book_info(self):
        status = "Available" if self.__availability else "Borrowed"
        print(f"ID: {self.__book_id}, Title: {self.__title}, Author: {self.__author}, Status: {status}")

def menu():
    while True:
        print("\n Hey, Welcome to our library!\n")
        print("1. View All Books")
        print("2. Borrow Book")
        print("3. Return Book")
        print("4. Exit")
        choice = input("\nHow can I help you?: ")

        if choice == "1":
            Library.view_all_books()

        elif choice == "2":
            book_id = input("\nPlease enter the book ID to borrow: ")
            found = False
            for book in Library.book_list:
                if str(book._Book__book_id) == book_id:
                    found = True
                    book.borrow_book()
                    break
            if not found:
                print("\nOpps! We don't have this book. Please try next time.\n")

        elif choice == "3":
            book_id = input("\nPlease enter the book ID to return: ")
            found = False
            for book in Library.book_list:
                if str(book._Book__book_id) == book_id:
                    found = True
                    book.return_book()
                    break
            if not found:
                print("\nOpps! This book not from our Library.\n")

        elif choice == "4":
            print("\nHave a good day!! Goodbye!\n")
            break
        
        else:
            print("\nI didn't get you, Repeat please!.\n")


book1 = Book(101, "Book Name", "Author")
book2 = Book(102, "Book Name1", "Author1")
book3 = Book(103, "Book Name2", "Author2")
book3 = Book(104, "Book Name4", "Author3")
book3 = Book(105, "Book Name5", "Author4")
menu()
