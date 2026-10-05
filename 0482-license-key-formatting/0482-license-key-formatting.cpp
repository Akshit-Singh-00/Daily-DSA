class Solution {
public:
    string licenseKeyFormatting(string s, int k) {

        string temp = "";

        for (char ch : s) {
            if (ch != '-') {
                temp += toupper(ch);
            }
        }

        string ans = "";
        int count = 0;

       
        for (int i = temp.size() - 1; i >= 0; i--) {

            ans += temp[i];
            count++;

            if (count == k && i != 0) {
                ans += '-';
                count = 0;
            }
        }

    
        reverse(ans.begin(), ans.end());

        return ans;
    }
};