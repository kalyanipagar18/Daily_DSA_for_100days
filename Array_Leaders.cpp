
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> leaders;
        int maxFromRight = arr.back(); r
        leaders.push_back(maxFromRight);

    
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                leaders.push_back(arr[i]);
            }
        }

    
        reverse(leaders.begin(), leaders.end());
    
        return leaders;

    }
};
