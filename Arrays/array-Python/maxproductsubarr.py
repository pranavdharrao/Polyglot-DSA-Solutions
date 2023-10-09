def maxProduct(self,arr, n):
        ans=-100000000
        p=1
        s=1
        for i in range(0,n):
            if p==0 :
                p=1
            if s==0:
                s=1
            p=p*arr[i]
            s=s*arr[n-i-1]
            ans=max(ans,max(p,s))
        return ans

arr=[8,-2,-2,0,8,0,-6,-8,-6,-1]
n=10
print(maxProduct(arr,n))