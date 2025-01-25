class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
         int n = -1, count = 0;
        for (int num : arr) {
            if (count == 0) {
                n = num;
            }
            if (num == n) {
                count++;
            } else {
                count--;
            }
        }

        count = 0;
        for (int num : arr) {
            if (num == n) {
                count++;
            }
        }

        if (count > arr.size() / 2) {
            return n;
        } else {
            return -1;
        }
    }
};
