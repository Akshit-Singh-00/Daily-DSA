class Solution {
public:
    int countBinaryPalindromes(long long n) {
        if(n == 0) return 1;

        int ans = 1; // Include 0

        int len = 0;
        long long temp = n;

        while(temp > 0) {
            len++;
            temp >>= 1;
        }

        // Count all palindromes with smaller lengths
        for(int l = 1; l < len; l++) {
            ans += (1LL << ((l - 1) / 2));
        }

        // Count palindromes having the same length as n
        int half = (len + 1) / 2;

        long long firstHalf = n >> (len / 2);

        long long start = 1LL << (half - 1);

        ans += firstHalf - start;

        // Construct palindrome using the first half
        long long palindrome = firstHalf;
        long long rev = firstHalf;

        if(len % 2 == 1) {
            rev >>= 1;
        }

        while(rev > 0) {
            palindrome = (palindrome << 1) | (rev & 1);
            rev >>= 1;
        }

        if(palindrome <= n) {
            ans++;
        }

        return ans;
    }
};