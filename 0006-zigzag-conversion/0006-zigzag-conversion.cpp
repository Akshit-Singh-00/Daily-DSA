class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1) return s;

        vector<string> row(numRows);

        int i = 0;
        int dir = 1;

        for (char ch : s) {

            row[i] += ch;

            if (i == 0)
                dir = 1;

            if (i == numRows - 1)
                dir = -1;

            i += dir;
        }

        string ans = "";

        for (string x : row)
            ans += x;

        return ans;
    }
};