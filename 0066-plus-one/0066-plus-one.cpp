class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int size = digits.size();

        digits[size - 1] += 1;

        // Handle carry from right to left
        for (int i = size - 1; i > 0; i--) {

            if (digits[i] == 10) {
                digits[i] = 0;
                digits[i - 1] += 1;
            }
        }

        // If the first digit also became 10
        if (digits[0] == 10) {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};