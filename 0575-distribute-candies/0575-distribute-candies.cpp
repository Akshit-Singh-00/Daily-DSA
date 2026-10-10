class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(auto it:candyType){
            st.insert(it);
        }
        int n=candyType.size();
        return min((int)st.size(),n/2);
    }
};