class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int pos = (nums1.size()/2);
        if((nums1.size()%2) == 0){
            double ans = double(nums1[pos-1] + nums1[pos])/2;
            return ans;
        }
        if((nums1.size()%2) != 0){
            double ans1 = nums1[pos];
            return ans1;
        }
        else{
            return 0;
        }

    }
};