class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        vector<bool> containbox(n, false);
        vector<bool> canopen(n, false);
        vector<bool> visited(n, false);

        stack<int> st;
        for(int box : initialBoxes){
            containbox[box] = true;
            if(status[box]) st.push(box);
        }
        int result = 0;
        while(!st.empty()){
            int temp = st.top();
            st.pop();
            if(visited[temp]) continue;
            visited[temp] = true;
            result += candies[temp];

            for(int key : keys[temp]){
                status[key] = 1;
                if(containbox[key] && !visited[key]) st.push(key);
            }

            for(int newbox : containedBoxes[temp]){
                containbox[newbox] = true;
                if(status[newbox] && !visited[newbox]) st.push(newbox);
            }
        }
        return result;
    }
};