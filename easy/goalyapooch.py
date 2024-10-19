n = int(input())

p,s = input().split()

p = int(p)

for i in range(n):
    inp = input().split()
    k = int(inp[1])
    o = int(inp[0])
    if(o == 1):
        if(k == p):
            if(s == "L"):
                s = "R"
            else:
                s = "L"
    else:
        x = inp[2]
        y = inp[3]
        
        if(k < 3):

        #nextp = max((k+1)%4, 1)
        #print(nextp)
            if(k == p and x == s):
                p = k +1
                s = y
            elif(k+1 == p and y == s):
                p = k
                s = x

print(p,s)
