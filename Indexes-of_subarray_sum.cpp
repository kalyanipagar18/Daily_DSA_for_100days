class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int start = 0, current_sum = 0;

    for (int end = 0; end < arr.size(); end++) {
        current_sum += arr[end];

        while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }

    
        if (current_sum == target) {
            return {start + 1, end + 1}; 
        }
    }

    return {-1};
    }
};
