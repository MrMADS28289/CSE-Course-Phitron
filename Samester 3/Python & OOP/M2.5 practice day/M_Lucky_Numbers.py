a, b = map(int, input().split())

def is_lucky(number):
    for d in str(number):
        if d != '4' and d != '7':
            return False
        return True
    
lucky = []

for num in range(a, b + 1):
    if is_lucky(num):
        lucky.append(num)
        
if lucky:
    for l in lucky:
        print(l, end=" ")
else:
    print(-1)