class Solution {
public:
    string simplifyPath(string path) {
        int n = path.length();
        string ans = "";
        queue<string> q;
        for(int i = 0 ;i<n ;i++)
        {
            if(path[i] == '/'){
                if(ans.length()) 
                {
                    q.push(ans);
                    ans="";
                }
                continue;
            }
            else{
                ans+=path[i];
            }
            
        }
        if(ans.length()) q.push(ans);
        ans="";
        deque<string> fin;
        while(q.size()){
            string cur = q.front();
            q.pop();
            if((cur == ".")) continue;
            if(cur == "..") {
              if(fin.size())
              fin.pop_back(); 
              continue; 
            }
            fin.push_back(cur);
        }
        while(fin.size()){
            ans+="/";
            ans+=fin.front();
            fin.pop_front();
        }
        if(ans.length() == 0) return "/";
        return ans;

    }
};