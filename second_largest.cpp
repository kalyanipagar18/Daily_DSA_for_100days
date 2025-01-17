// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
      int largest = INT_MIN, secondLargest = INT_MIN;

  
    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest; 
            largest = num;           
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;     
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest; 
    }
};
