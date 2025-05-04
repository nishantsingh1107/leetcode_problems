class Solution {
public:
    vector<int> findNSE(vector<int>& arr, int n){
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(st.empty()) nse[i] = n;
            else nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSE(vector<int>& arr, int n){
        vector<int> pse(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = findNSE(arr, n);
        vector<int> pse = findPSE(arr, n);
        int total = 0, mod = (int)(1e9 + 7);

        for(int i=0;i<n;i++){
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total + (right * left * 1LL * arr[i])) % mod;
        }
        return total;
    }
};