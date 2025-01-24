// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        long long sum=0;
        int n = arr.size() + 1;
    
        for (int i = 0; i < n - 1; i++) {
            sum += arr[i];
        }
        long long expect = (n * (n + 1)) / 2;
    
        return expect - sum;
    }
};
