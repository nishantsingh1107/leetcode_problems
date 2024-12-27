class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num/2;i<=num;i++){
            int mid = i;
            string str = to_string(mid);
            reverse(str.begin(), str.end());
            int n = stoi(str);
            if(i+n == num){
                return true;
            }
        }
        return false;
    }
};