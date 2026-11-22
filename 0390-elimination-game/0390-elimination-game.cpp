class Solution {
public:
    int func(int head, int step, int rem, bool left) {
        if (rem == 1) {
            return head;
        }
        if (left || rem % 2 == 1) {
            head += step;
        }
        return func(head,step*2,rem/2,!left);
    }
    int lastRemaining(int n) { return func(1, 1, n, true); }
};