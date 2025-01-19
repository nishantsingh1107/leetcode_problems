class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a = word.find(ch);
        if(ch == -1) return word;
        int b = (a-1)/2;
        for(int i=0;i<=b;i++){
            swap(word[i], word[a-i]);
        }
        return word;
    }
};