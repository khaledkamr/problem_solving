import sys
sys.setrecursionlimit(10**9+7)
def fact(x):
    if x == 0:
        return 1
    return x * fact(x - 1)
n, r = map(int, input().split())
r = min(r, n - r)   # optimization
if r < 0:
    print(0)
else:
    print(fact(n) // (fact(r) * fact(n - r)))