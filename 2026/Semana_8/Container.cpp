#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max_agua = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int largura = right - left;
            
            int altura_atual = std::min(height[left], height[right]);
            
            int area_atual = altura_atual * largura;
            max_agua = std::max(max_agua, area_atual);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_agua;
    }
};