import math
def firstoc(arr,n,x):
    s=0
    e=n-1
    ans=-1
    while(s<=e):
        m=math.floor(s+(e-s)/2)
        if arr[m]==x:
            ans=m
            e=m-1
        elif arr[m]<x:
            s=m+1
        else:
            e=m-1
    return ans

def lastoc(arr,n,x):
    s=0
    e=n-1
    ans=-1
    while(s<=e):
        m=math.floor(s+(e-s)/2)
        if arr[m]==x:
            ans=m
            s=m+1
        elif arr[m]<x:
            s=m+1
        else:
            e=m-1
    return ans


def count(arr: [int], n: int, x: int) -> int:
    f=firstoc(arr,n,x)

    if f==-1:
        return 0
    return lastoc(arr,n,x)-f+1


arr=[1,1,1,2,2,3,3]
x=2
n=7
print(count(arr,n,x))