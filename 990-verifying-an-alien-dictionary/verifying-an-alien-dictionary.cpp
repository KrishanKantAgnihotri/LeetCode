class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char,char> u;
      
       
       for(int i = 0 ;i<order.length() ;i++){
           u[order[i]] = char(i+'a');
           
       } 
       for(int i = 0 ;i<words.size() ;i++){
           string s = words[i];
           for(int j = 0 ;j<s.length();j++){
               s[j] = u[s[j]];
           }
           words[i] = s;
           
       }
      
       return is_sorted(words.begin(),words.end());
    }
};