s = ['a','e','i','o','u']
counter = 0
word = input()
for i in word:
    if i in s:
        counter += 1

print(max(1,pow(2,counter)))