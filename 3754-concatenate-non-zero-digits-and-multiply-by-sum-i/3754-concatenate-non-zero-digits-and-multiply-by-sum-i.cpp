class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> digits;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                digits.push_back(digit);
            }

            n /= 10;
        }

        reverse(digits.begin(), digits.end());

        long long x = 0;
        int sum = 0;

        for (int digit : digits) {
            x = x * 10 + digit;
            sum += digit;
        }

        return x * sum;
    }
};