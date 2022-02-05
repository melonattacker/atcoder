n = int(input())  # nはint型
mod = 998244353

cnt = 0
kari = n

while kari > 0:
    cnt += 1
    kari //= 10

ans = 0

# print(cnt)
for i in range(1, cnt+1):
    if i != cnt:
        hoge = 10**i-10**(i-1)
        ans += (1+hoge)*hoge//2
    else:
        hoge = n-10**(i-1)+1
        ans += (1+hoge)*hoge//2
    
print(ans%mod)