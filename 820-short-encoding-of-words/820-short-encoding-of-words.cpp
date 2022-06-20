
class Solution {
public:
        int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),[&](string &a,string &b){
        return a.length()>b.length();
    });
        string ans = words[0]+"#";
        for(int i = 1 ;i<words.size();i++){
            int pos = ans.find(words[i]+"#");
            if(pos==-1){
                ans+=(words[i]+"#");
            }
        }
        return ans.length();
    }
};