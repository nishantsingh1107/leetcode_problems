class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int a=0,b=arr.size()-1;
        while(a+1 < arr.size()-1 && arr[a]<arr[a+1]){
            a++;
        }
        while(b-1 > 0 && arr[b]<arr[b-1]){
            b--;
        }
        return a==b;
    }
};