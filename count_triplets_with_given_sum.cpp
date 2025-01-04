class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;     
        int k = n - 1;     

        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target) {
                count++;
                j++;
                k--;
            } else if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }

    return count;
    }
};
