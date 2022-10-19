class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
       vector<int> pref(n+1);
        vector<int> ans;
       map<char,int> f;
       map<char,int> l;
      for(int i = 0 ;i<n ;i++){
          if(!f.count(s[i])) pref[i]++,f[s[i]]++;
      }  
        for(int i = n-1 ;i>=0 ;i--){
            if(!l.count(s[i])) pref[i]--,l[s[i]]++;
        }
        for(int i = 0 ;i<n ;i++){
            if(i)
            pref[i]+=pref[i-1];
        }
        int cur = 0;
        for(int i = 0 ;i<n; i++){
            cur++;
            if(pref[i] == 0){
                ans.push_back(cur);
                cur = 0 ;
            }
            
        }
        
        return ans;
    }
};