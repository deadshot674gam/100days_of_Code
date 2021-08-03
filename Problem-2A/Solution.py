def solve():
    
    n = int(input())
    tally = {}
    for _ in range(n):
        name , score = input().split()
        
        score = int(score)
        
        if name in tally.keys():
            tally[name].append(score)
        else:
            tally[name] = list([score])
        
    ms = []
    for i in tally.keys():
        ms.append(sum(tally[i]))
    
    m = max(ms)
    winner = str()
    for i in tally.keys():
        if sum(tally[i]) == m:
            winner = i
        
    for i in tally.keys():
        sumi = 0
        flag = False
        for score in tally[i]:
            sumi+= score
            if sumi == m:
                winner = i
                flag = True
                break
        
        if flag:
            break
    
    print(winner)
    
solve()
    
        
        