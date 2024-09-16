n = int(input())
arr = []

for i in range(n):
    name = input()
    alph = []
    for j in name:
        if j not in alph:
            alph.append(j)
    arr.append(len(alph))
print(max(arr))
    
