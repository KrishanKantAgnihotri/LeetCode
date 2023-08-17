class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char,char> u;
      
       
       for(int i = 0 ;i<order.length() ;i++){
           u[order[i]] = char(i+'a');
           
       } 
       for(int i = 0 ;i<words.size() ;i++){
           
           for(int j = 0 ;j<words[i].length();j++){
               words[i][j] = u[words[i][j]];
           }
                      
       }
      
       return is_sorted(words.begin(),words.end());
    }
};