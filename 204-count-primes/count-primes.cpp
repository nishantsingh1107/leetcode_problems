class Solution {
public:
    int countPrimes(int n) {
        vector<int> nums(n+1, 1);
        int count = 0;
        for(long long i=2;i<n;i++){
            if(nums[i]){
                count++;
                for(long long j=i*i;j<n;j+=i) nums[j] = 0;
            }
        }
        return count;
    }
};