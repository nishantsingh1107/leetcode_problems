class Solution {
public:
    char kthCharacter(int k) {
        string start = "a";
        while(start.length() < k){
            int size = start.length();
            for(int i=0;i<size;i++){
                char newchar = 'a' + ((start[i] - 'a' + 1) % 26);
                start += newchar;
            }
        }
        return start[k-1];
    }
};