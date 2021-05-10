import math
d, a1, a2, v, t = map(float, input().split())

a = -(1 / (2 * a1) + 1 / (2 * a2))
de = t * t - 4 * a * d
x1 = (t + math.sqrt(de)) / (2 * a)
x2 = (t - math.sqrt(de)) / (2 * a)

v = min(v, max(x1, x2))
res = v / (2 * a1) + v / (2 * a2) +  d / v
print(round(res, 12))