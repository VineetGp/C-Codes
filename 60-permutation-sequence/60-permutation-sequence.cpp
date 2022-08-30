class Solution {
public:
    
    void nextPermutation(vector<int> &arr){
        int n = arr.size();
        int i = n-2;
        while(i >= 0){
            if(arr[i] < arr[i+1]) break;
            i--;
        }
        int j = i+1;
        int a = INT_MAX;
        int k;
        while(j < n){
            if(arr[j]>=arr[i]){
                a = min(a,arr[j]);
                k = j;
            }
            j++;
        }
        swap(arr[i], arr[k]);
        reverse(arr.begin()+i+1, arr.end());

        return;
    }
    string getPermutation(int n, int k) {
        vector<int> arr(n,0);
        for(int i = 0; i<n; i++){
            arr[i] = i+1;
        }
        for(int i = 0; i<k-1; i++){
            nextPermutation(arr);
        }
        string s = "";
        for(auto i : arr){
            s += to_string(i);
        }
        return s;
    }
};