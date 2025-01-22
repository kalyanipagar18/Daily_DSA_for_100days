vector<int> findDuplicates(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();

    sort(arr.begin(), arr.end());

   
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
           
            if (result.empty() || result.back() != arr[i]) {
                result.push_back(arr[i]);
            }
        }
    }

    return result;
}
