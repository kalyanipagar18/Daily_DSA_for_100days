class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0,maxsum=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++)
        {
            curr += nums[i];
            maxsum=max(maxsum,curr);
            if(curr<0)
            {
                curr=0;
            }

        }
        return maxsum;
    }
    
};
