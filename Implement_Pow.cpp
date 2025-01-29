class Solution {
  public:
    double power(double b, int e) {
        // code here
         if(e==0)
        {
            return 1.0;
        }
        if(b==0)
        {
            return 0.0;
        }
        if(b==1)
        {
            return 1.0;
        }
        if(b== -1 && e%2==0)
        {
            return 1.0;
        }
        if(b== -1 && e%2!=0)
        {
            return -1.0;
        }
        long binform=e;
        if(binform<0)
        {
            b=1/b;
            binform= -binform;
        }
        double ans=1;

        while(binform>0){
            if(binform%2 == 1){
                ans *= b;

            }
            b *= b;
            binform /=2;
        }
        return ans;
    }
};
