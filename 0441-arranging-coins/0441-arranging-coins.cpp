class Solution {
public:
    int arrangeCoins(int n) {
        int ans;
        int low=0;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long  coin=(1LL* mid*(mid+1))/2;
            if(coin<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return ans;
    }
};