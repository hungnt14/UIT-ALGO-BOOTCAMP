n, x = map(int, input().split())

a = list(map(int, input().split()))
s = [0 for i in range(n)]
f = [1000000000 for i in range(x + 1)]

for i in range(n):
    if (i > 0):
        s[i] = s[i - 1] + a[i]
    else:
        s[i] = a[i]

f[0] = -1

for c in range(x + 1):
    for i in range(n):
        if (s[i] <= c):
            f[c] = min(f[c], f[c - s[i]] + i + 2)
            if (i == n - 1):
                k = (c - s[n - 1]) // a[n - 1]
                f[c] = min(f[c], f[c - (s[n - 1] + k * a[n - 1])] + n + k + 1)

if (f[x] == 1000000000):
    print(-1)
else:
    print(f[x])
