import re
def solve():
    
    st = input()
    
    res = re.match(r'/R[0-9]+C[0-9]+/g',st)
    col = 0
    alpha = {'A':0,'B':1,'C':2,'D':3,'E':4,'F':5,'G':6,'H':7,'I':8,'J':9,'K':10,'L':11,'M':12,'N':13,'O':14,'P':15,'Q':16,'R':17,'S':18,'T':19,'U':20,'V':21,'W':22,'X':23,'Y':24,'Z':25}
    i=0
    column,row,waste = re.split('(\d+)', st)
    
    i=0
        # row = int(row)
    while(i<len(column)):
        col+= (alpha[column[i]]+1)*26**(len(column)-i-1)
        i+=1

    ans = 'R'+str(row)+'C'+str(col)
    print(ans)
    
    # if  bool(res):
        
        


    #     #
        

    # else:
    #     i = st.index('C')
    #     row = int(st[1:i])
        
    #     col = int(st[i+1:])
        
    #     column = " "
        
    #     alpha = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

    #     while(col>0):
    #         column+= alpha[col%26-1]
    #         col//=26

    #     column = column[::-1]
    #     column += str(row)
    #     column = column.split(" ")
    #     column = "".join(column)

    #     print(column)

solve()