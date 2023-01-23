R, G, B = map(int, input().split())

if  R<0 or R>255 or G<0 or G>255 or B<0 or B>255:
    print("NU E CULOARE")
elif  abs(R-G)>10 or abs(R-B)>10 or abs(G-B)>10 :
    print("CULOARE")
else:
    print("GRI")