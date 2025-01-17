//Product Except Self



class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        // int n=arr.size();
        // vector<int>res(n,1);
        // for(int i=0 ;i<n;i++)
        // {
        //     for(int j=0 ; j<n ;j++)          //Simple logic works for 1110 caes in gfg
        //     {
        //         if(i!=j)
        //         {
        //             res[i] *=arr[j];
        //         }
        //     }
        // }
        // return res;
        
        
        int n = arr.size();
        vector<int> res(n, 1); 

        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            res[i] = leftProduct; 
            leftProduct *= arr[i]; 
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= rightProduct; 
            rightProduct *= arr[i]; 
        }

        return res;
    }
};
