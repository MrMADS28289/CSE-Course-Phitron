A, B = map(int, input().split())
S = input()

if len(S) == A + B + 1 and S[A] == '-' and S[:A].isdigit() and S[A+1:].isdigit():
    print("Yes")
else:
    print("No")
