N = int(input())
A = list(map(int, input().split()))

count = 0
while True:
    all_even = True
    for i in range(N):
        if A[i] % 2 != 0:
            all_even = False
            break
    if not all_even:
        break
    for i in range(N):
        A[i] = A[i] // 2
    count += 1

print(count)
