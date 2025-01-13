class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left = 0;                
        int right = arr.size() - 1; 
        int maxArea = 0;             
        while (left < right) {
       
        int width = right - left;
        int currentHeight = std::min(arr[left], arr[right]);
        int currentArea = width * currentHeight;

        maxArea = std::max(maxArea, currentArea);

        if (arr[left] < arr[right]) {
            left++;
        } else {
            right--;
          
        }
    }
    return maxArea;

    }
};
