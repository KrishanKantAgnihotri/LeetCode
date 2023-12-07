class Solution {
public:
    string largestOddNumber(string num) {
        int j = -1; 
        for(int i = 0 ;i<num.length();i++){
            if((num[i]-'0')%2 == 1) j = i ; 

        }
        if(j == -1) return "";
        return num.substr(0,j+1);
    }
};