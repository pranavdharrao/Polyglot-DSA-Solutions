def subarrwithsum0(arr,n):
    sum=0
    d=dict()
    for k,v in d:
        print(k+" "+v)
    for i in arr:
        sum+=i
        if sum==0 or i==0 or i in d:
            return True
        d[sum]=1
    return False
arr=[-10,-1,46,-27,-32,-5,-4,1,-29,5,29,38,14,-22,-9,0]
n=16
print(subarrwithsum0(arr,n))
