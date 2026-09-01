class Solution {
public:
    int maxArea(vector<int>& height) {

        int low = 0;
        int high = height.size() - 1;

        int maxH = 0;

        while (low < high) {

            int width = high - low;

            int h = min(height[low], height[high]);

            int area = width * h;

            maxH = max(maxH, area);

            if (height[low] < height[high]) {
                low++;
            }
            else {
                high--;
            }
        }

        return maxH;
    }
};