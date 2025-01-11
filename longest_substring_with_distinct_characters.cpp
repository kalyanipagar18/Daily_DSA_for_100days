class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        vector<int> hash(256, -1);
        
        int n = s.size(); 
        int L = 0, R = 0, maxlen = 0;
        while (R < n) {
            if (hash[s[R]] != -1 && hash[s[R]] >= L) {
                L = hash[s[R]] + 1;
            }
            int len = R - L + 1;
            maxlen = max(len, maxlen);
            hash[s[R]] = R;
            R++;
        }

        return maxlen;

    }
};
