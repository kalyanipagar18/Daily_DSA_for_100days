class Solution {
public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();

        int Lmax = 0, Rmax = 0;
        int total = 0;
        int L = 0, R = n - 1;   

        while (L < R) {
            if (arr[L] <= arr[R]) {
                if (Lmax > arr[L]) {
                    total += Lmax - arr[L]; 
                } else {
                    Lmax = arr[L]; 
                }
                L++; 
            } else {
                if (Rmax > arr[R]) {
                    total += Rmax - arr[R];
                } else {
                    Rmax = arr[R]; 
                }
                R--; 
            }
        }

        return total;
    }
};
