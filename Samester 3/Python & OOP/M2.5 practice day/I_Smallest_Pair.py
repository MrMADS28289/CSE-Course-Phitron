T = int(input())  

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    smallest_result = float('inf')

    for i in range(N): 
        for j in range(i + 1, N):
            result = A[i] + A[j] + j - i
            smallest_result = min(smallest_result, result)
    
    print(smallest_result)

