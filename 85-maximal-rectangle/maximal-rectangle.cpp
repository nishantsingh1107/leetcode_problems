class Solution {
private:
    int largestHistogram(vector<int>& nums){
        stack<int> st;
        int maxArea = 0, n = nums.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                int element = st.top();
                st.pop();
                int nse = i, pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, nums[element]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int element = st.top(); st.pop();
            int nse = n, pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, nums[element]*(nse-pse-1));
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> prefixSum(m, 0);
        int maxArea = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == '1') prefixSum[j] +=1;
                else prefixSum[j] = 0;
            }
            maxArea = max(maxArea, largestHistogram(prefixSum));
        }
        return maxArea;
    }
};