class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string& s : strs){
            string key = s;
            sort(key.begin(), key.end());
            res[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& itr : res) ans.push_back(itr.second);
        return ans;
    }
};