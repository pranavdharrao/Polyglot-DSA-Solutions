import math


def is_possible(arr,n,k,mid):
    bsum=0
    paintercount=1
    for i in range(0,n):
        if bsum+arr[i]<=mid:
            bsum+=arr[i]

        else:
            paintercount+=1
            if(paintercount>k or arr[i]>mid):
                return False
            bsum=arr[i]

    return True




def findLargestMinDistance(boards:list, k:int):
    s=0
    su=0
    for i in boards:
        su+=i
    e=su
    m=math.floor(s+(e-s)/2)
    ans=-1
    while(s<=e):
        if(is_possible(boards,len(boards),k,m)):
            ans=m
            e=m-1
        else:
            s=m+1
        m = math.floor(s + (e - s) / 2)

    return ans

arr=[10,20,30,40]
k=2
print(findLargestMinDistance(arr,k))