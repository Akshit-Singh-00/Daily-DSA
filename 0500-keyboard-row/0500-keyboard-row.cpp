
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for (string word : words) {
            string temp = word;

            for (char &ch : temp) {
                ch = tolower(ch);
            }

            bool first = true;
            bool second = true;
            bool third = true;

            for (char ch : temp) {
                if (row1.find(ch) == string::npos)
                    first = false;

                if (row2.find(ch) == string::npos)
                    second = false;

                if (row3.find(ch) == string::npos)
                    third = false;
            }

            if (first || second || third) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};
