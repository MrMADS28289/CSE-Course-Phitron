N = int(input())
Numbers = list(map(int, input().split()))

Min = min(Numbers)
Max = max(Numbers)

for index, num in enumerate(Numbers):
    if num == Min:
        Numbers[index] = Max
    if num == Max:
        Numbers[index] = Min
        
for n in Numbers:
    print(n, end=" ")