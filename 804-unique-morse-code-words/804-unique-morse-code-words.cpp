class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> u;
        for(auto w : words){
          string sol = "";
            for(auto it : w){
                sol+=arr[it-'a'];
            }
            u.insert(sol);
        }
        return u.size();
    }
};