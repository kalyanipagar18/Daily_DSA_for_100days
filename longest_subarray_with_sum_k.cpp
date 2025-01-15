
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int maxLength = 0;

    for (int start = 0; start < arr.size(); start++) {
        int currentSum = 0;
        for (int end = start; end < arr.size(); end++) {
            currentSum += arr[end];
            if (currentSum == k) {
                maxLength = max(maxLength, end - start + 1);
            }
        }
    }

    return maxLength;
    }
};
