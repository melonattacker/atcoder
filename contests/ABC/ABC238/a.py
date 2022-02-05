n = int(input())  # nはint型

if n > 50:
    print("Yes")
    exit()

if 2**n > n**2:
    print("Yes")
else:
    print("No")