class Solution {
public:
    bool canConstruct(string a, string b) {
        int freq[26] = {0};
        for(int i = 0 ;i <b.length() ;i++){
            freq[b[i]-'a']++;
        }
        for(int i = 0 ;i<a.length() ;i++){
            if(freq[a[i]-'a']>0){
                freq[a[i]-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
       
        
    }
};