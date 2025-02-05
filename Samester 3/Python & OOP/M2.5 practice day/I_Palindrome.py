n = input()
rn = n[::-1].lstrip("0")
print(rn)
if n == rn:
    print("YES")
else:
    print("NO")
