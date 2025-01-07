class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
    int n = arr.size();
    int left = 0, right = n - 1;
    int count = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            if (arr[left] == arr[right]) {
                int num_elements = right - left + 1;
                count += (num_elements * (num_elements - 1)) / 2;
                break;
            }

            int left_val = arr[left], right_val = arr[right];
            int left_count = 0, right_count = 0;
            while (left < right && arr[left] == left_val) {
                left++;
                left_count++;
            }

            while (left <= right && arr[right] == right_val) {
                right--;
                right_count++;
            }
            count += left_count * right_count;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return count;
    }
};
