class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size() % 2 != 0) return false;
        int open = 0, close = 0;
        for(int i=0;i<s.size();i++){
            if(locked[i] == '0' || s[i] == '(') open++;
            else open--;
            if(open < 0) return false;
        }
        open = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(locked[i]=='0' || s[i]==')') close++;
            else close--;
            if(close < 0) return false;
        }
        return true;
    }
};