class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.length()) return s;
        int index = 0, d = 1;
        vector<vector<char>> rows(numRows);
        for(char c : s){
            rows[index].push_back(c);
            if(index == 0) d = 1;
            else if(index == numRows - 1) d = -1;
            index += d;    
        }
        string ans;
        for(const auto& row : rows){
            for(char c : row) ans += c;
        }
        return ans;
    }
};