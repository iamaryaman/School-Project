

'''
def check(l:list,LEFTORRIGHT):
    n = len(l)
    
    for i in range(n):
        for j in range(n):
            if LEFTORRIGHT == "R":
                if l[i] == l[j] and l[i] != None and (i != j):
                    l[j] = l[i]*2
                    l[i] = None
            elif LEFTORRIGHT == "L":
                if l[i] == l[j] and l[i] != None and (i != j):
                    l[i] = l[j]*2
                    l[j] = None
                    
check(l,"R")
print(l)
'''



def listcheck(l:list):
    l2 = [i for i in l if i is not None]
    return l2

def check(l2:list,l:list):
    i = 0
    while i < len(l2)-1:
        if l2[i] == l2[i+1] and l2[i]!= None:
            indx1 = l.index(l2[i])
            indx2 = l.index(l2[i+1])
            l[indx1] *= 2
            l[indx2] = None
        else:
            i+=1
    return l
                       
        
def main(l):
    first = listcheck(l)
    second = check(first,l)
    print(second)
    
lone = [4,2,4,4]
ltwo = [2,8,16,2]
lthree = [None, 4 , 2, 4]
lfour = [2,None,None,2]
main(lone)
main(ltwo)
main(lthree)
main(lfour)