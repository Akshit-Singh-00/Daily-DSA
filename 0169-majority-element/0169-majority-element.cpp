class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans;
        int n = nums.size();
        for (auto it : nums) {
            mp[it]++;
        }
        int mini = (n / 2);
        for (auto i : mp) {
            if (i.second > mini) {
                ans = i.first;
            }
        }
        return ans;
    }
};