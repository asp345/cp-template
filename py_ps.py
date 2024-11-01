import sys
sys.setrecursionlimit(100002)
sys.set_int_max_str_digits(100000)
inp = lambda: sys.stdin.readline().rstrip()

for _ in range(int(inp())):
    n, m = map(int, inp().split())
    print(n)
