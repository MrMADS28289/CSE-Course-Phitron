N = int(input())
A = list(map(int, input().split()))
A.sort()

count = 0
i = 0
while i < N:
    x = A[i]
    p = 0
    
    while i < N and A[i] == x:
        p += 1
        i += 1
    
    if p > x:
        count += p - x
    
    elif p < x:
        count += p

print(count)
