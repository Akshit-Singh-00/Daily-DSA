
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total = 0;

        for (int num : nums) {
            total += num;
        }

        int rem = total % p;

        if (rem == 0) {
            return 0;
        }

        unordered_map<int, int> mp;
        mp[0] = -1;

        int prefix = 0;
        int ans = n;

        for (int i = 0; i < n; i++) {
            prefix = (prefix + nums[i]) % p;

            int target = (prefix - rem + p) % p;

            if (mp.find(target) != mp.end()) {
                ans = min(ans, i - mp[target]);
            }

            mp[prefix] = i;
        }

        return ans == n ? -1 : ans;
    }
};
