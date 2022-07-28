class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        int freq2[26] ={0};
        for(int i = 0 ; i<s.length() ;i++){
            freq[s[i]-'a']++;
        }
        for(int j = 0 ;j<t.length() ;j++){
            freq2[t[j]-'a']++;
        }
        for(int i = 0 ; i<26 ;i++){
            if(freq[i]!=freq2[i]) return false;
                
        }
        return true;
        
    }
};