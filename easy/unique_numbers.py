n = int(input())
nums = input().split(' ')
unique = []
for i in nums:
    if(i in unique):
        unique.remove(i)
    else:
        unique.append(i)
res = 0
for i in unique:
    res ^= int(i)
print(res)
