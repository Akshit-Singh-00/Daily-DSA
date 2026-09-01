class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            ans.push_back({nums[i], i});
        }
        sort(ans.begin(),ans.end());
        int low = 0;
        int high = n - 1;
        while (low < high) {
            int sum = ans[low].first + ans[high].first;
            if (sum == target) {
                return {ans[low].second, ans[high].second};
            } else if (sum < target) {
                low++;
            } else {
                high--;
            }
        }
        return {};
    }
};