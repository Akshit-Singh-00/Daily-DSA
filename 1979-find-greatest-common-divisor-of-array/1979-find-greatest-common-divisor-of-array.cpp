class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for (int i : nums) {
            smallest = min(smallest, i);
            largest = max(largest, i);
        }
        while(largest % smallest != 0) {
            int rem = largest % smallest;
            largest = smallest;
            smallest = rem;
        }
        return smallest;
    }
};