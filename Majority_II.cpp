class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n=arr.size();
        if(n==0) return {};
        int can1=-1 , can2=-1 , count1=0,count2=0;
        for(int num : arr){
            if(num==can1){
                count1++;
            }
            else if(num == can2){
                count2++;
            }
            else if(count1==0){
                can1=num;
                count1=1;
            }
            else if(count2==0){
                can2=num;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(int num : arr){
            if(num == can1) count1++;
            else if(num == can2) count2++;
        }
        vector<int>result;
        if(count1 > n/3){ result.push_back(can1);}
        if(count2 > n/3){ result.push_back(can2);}
        
        sort(result.begin(),result.end());
        return result;
    }
};

