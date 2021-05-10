n, m = map(int, input().split())
a = []

for i in range(n):
    r = list(map(int, input().split()))
    a.append(r)

ans = 1000000000

for i in range(n - 2):
    for j in range(m - 2):
        sum = 0
        for k in range(9):
            sum += a[i + k // 3][j + k % 3]
        ans = min(ans, sum)

print(ans)