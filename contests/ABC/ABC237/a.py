n = int(input())  # nはint型

if -2**31 <= n and n < 2**31:
    print("Yes")
else:
    print("No")