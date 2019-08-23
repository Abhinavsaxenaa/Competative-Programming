def fun(arr,n,s):
    cs = 0
    d={}
    f=0
    for i in range(n):
        cs += arr[i]
        if(cs == s):
            print(1,i+1)
            f = 1
            break
        if (cs-s) in d:
            print(d[cs-s]+2,i+1)
            f=1
            break
        d[cs] = i
    if(f==0):
        print(-1)
    
t = int(input())
while(t!=0):
    l=[int(i) for i in input().split()]
    arr = [int(i) for i in input().split()]
    fun(arr,l[0],l[1])
    t-=1
