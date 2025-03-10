class Solution {
public:
    int nextNumber(int curr, int n){
        if(curr*10 <= n){
            return curr*10;
        }
        if(curr >= n){
            curr /= 10;
        }
        curr += 1;
        while(curr%10 == 0) curr /= 10;
        return curr;
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int curr = 1;
        for(int i=0;i<n;i++){
            ans.push_back(curr);
            curr = nextNumber(curr, n);
        }
        return ans;
    }
};