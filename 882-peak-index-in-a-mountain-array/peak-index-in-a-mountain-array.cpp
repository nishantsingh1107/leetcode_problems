class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return 0;
        }
        int index = 0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                index = i;
            }
        }
        return index;
    }
};