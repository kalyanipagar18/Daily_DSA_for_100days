
class Solution{
    public:
    
    int findEquilibrium(vector<int> &arr)
    {
        int total=0 ,left=0;
        for(int num : arr)
        {
            total += num;
        }
        for(int i=0; i<arr.size(); i++)
        {
            total -= arr[i];
            if(left== total)
            {
                return i;
            }
            left += arr[i];
        }
        
        return -1;
    }
};
