l

try:
    mydb = pymysql.connect(
        host="localhost",
        user="root",
        password="mrmads"
    )
    print("Connection successful!")
except pymysql.MySQLError as err:
    print(f"Error: {err}")
finally:
    if 'mydb' in locals():
        mydb.close()
        print("Connection closed.")
