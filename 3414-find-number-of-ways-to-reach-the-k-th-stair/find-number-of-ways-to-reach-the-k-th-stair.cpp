class Solution {
public:
    int combination(int a, int b){
        if(b<0 || b>a){
            return 0;
        }
        long result = 1;
        for(int i=0;i<b;++i){
            result = result * (a-i)/(i+1);
        }
        return result;
    }
    int waysToReachStair(int k) {
        int result = 0;
        for(int j=0;j<31;j++){
            result += combination(j+1, (1<<j)-k);
        }
        return result;
    }
};