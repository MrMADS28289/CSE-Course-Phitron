# import mysql.connector

# mydb = mysql.connector.connect(
#     host ="localhost",
#     user ="root",
#     passwd ="mrmads"
# )

# print(mydb)


import pymysql

mydb = pymysql.connect(
    host="localhost",
    user="root",
    password="mrmads"
)
print(mydb)

# import pymysql

# try:
#     mydb = pymysql.connect(
#         host="localhost",
#         user="root",
#         password="mrmads"
#     )
#     print("Connection successful!")
# except pymysql.MySQLError as err:
#     print(f"Error: {err}")
# finally:
#     if 'mydb' in locals():
#         mydb.close()
#         print("Connection closed.")
