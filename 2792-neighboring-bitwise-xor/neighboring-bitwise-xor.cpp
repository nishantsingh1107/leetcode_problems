class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;
        for(int num:derived){
            sum ^= num;
        }
        return sum==0;
    }
};