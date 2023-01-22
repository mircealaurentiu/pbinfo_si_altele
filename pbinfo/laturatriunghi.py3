import math

a, b, u_rad = map(int, input().split())

u_dg = u_rad * math.pi / 180

c = math.sqrt( a*a + b*b - 2*a*b*math.cos(u_dg) )

print(c)