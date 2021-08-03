def solve():
    st = input()
    
    sub = {}
    
    for i in range(len(st)-1):
        if st[i:i+1] in sub.keys():
            sub[st[i:i+2] ] +=1
        else:
            sub[st[i:i+2]]=1
    
    ma = max(list(sub.values()))
    
    ans = ""
    for i,j in sub.items():
        if j==ma:
            ans = i
    
    print(ans)
    
def main():
    T = int(input())
    for _ in range(T):
        solve()
    
main()