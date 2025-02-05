S = input()

balance = 0
count = 0
temp = ""
max_splits = []

for char in S:
    temp += char
    if char == 'L':
        balance += 1 
    else:
        balance -= 1
    
    if balance == 0:
        max_splits.append(temp)
        count += 1
        temp = ""

print(count)
for split in max_splits:
    print(split)
