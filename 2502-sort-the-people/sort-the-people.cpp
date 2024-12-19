class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> map1;
        for(int i=0;i<names.size();i++){
            map1[heights[i]] = names[i];
        }
        sort(heights.begin(), heights.end(), greater<int>());
        for(int i=0;i<names.size();i++){
            names[i] = map1[heights[i]];
        }
        return names;
    }
};