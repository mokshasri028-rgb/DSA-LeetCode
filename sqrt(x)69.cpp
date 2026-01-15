class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        long long int mid,high=x,low=1,ans=0;
        if(x==1 || x==0) return x;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid*mid==x) return mid;
            if(mid*mid>x){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};