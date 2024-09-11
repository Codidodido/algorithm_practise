n = int(input())
e = {}
for i in range(n):
    emp = input().split(' ')[0]
    if(emp in e):
        e[emp] += 1
    else:
        e[emp] = 1

print(max(e.values()))
    
