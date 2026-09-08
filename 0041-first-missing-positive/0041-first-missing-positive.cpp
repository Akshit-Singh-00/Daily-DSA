class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int pos=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pos){
                pos++;
            }
        }
        return pos;
    }
};