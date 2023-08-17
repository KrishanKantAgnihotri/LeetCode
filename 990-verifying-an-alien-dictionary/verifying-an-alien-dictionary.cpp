class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char,char> u;
       unordered_map<char,char> r;
       vector<string> new_words;
       for(int i = 0 ;i<order.length() ;i++){
           u[order[i]] = char(i+'a');
           r[char(i+'a')] = order[i];
       } 
       for(int i = 0 ;i<words.size() ;i++){
           string s = words[i];
           for(int j = 0 ;j<s.length();j++){
               s[j] = u[s[j]];
           }
           new_words.push_back(s);
       }
       sort(new_words.begin(),new_words.end());
       for(int i = 0 ;i<new_words.size();i++){
           for(int j = 0 ;j<new_words[i].length() ;j++){
               new_words[i][j] = r[new_words[i][j]];
           }
       }
       return new_words == words;
    }
};