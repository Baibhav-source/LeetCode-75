class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1)
        return 1;
        sort(s.begin(),s.end());
        int count = 0;
        int i = 1;
        while(i<s.size()){
            if(s[i]==s[i-1]){
                count = count + 2;
                i = i + 2;
            }
            else{
                i++;
            }
        } 
        if(count<s.size())
        count++;
        return count;
    }
};
