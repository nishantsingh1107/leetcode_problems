class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum = 0, rightsum = 0, maxsum = 0;
        int n = cardPoints.size();
        for(int i=0;i<k;i++){
            leftsum += cardPoints[i];
            maxsum = leftsum;
        }
        int rightidx = n-1;
        for(int i=k-1;i>=0;i--){
            leftsum -= cardPoints[i];
            rightsum += cardPoints[rightidx];
            rightidx--;
            maxsum = max(maxsum, (leftsum + rightsum));
        }
        return maxsum;
    }
};