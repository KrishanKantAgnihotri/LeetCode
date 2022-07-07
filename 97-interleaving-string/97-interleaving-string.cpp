class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
       queue<pair<int,int>> q;
        unordered_set<int> vis; 
        q.push({-1,-1});
        int n = s1.size();
        int m = s2.size()+1;
        while(q.size()){
            pair<int,int> cur = q.front();
            q.pop();
            int i = cur.first+1;
            int j = cur.second+1;
            if( (i==s1.size()) && (j == s2.size()) ){
                return (i+j == s3.size());
            }
            
            if((i+j)<s3.size()){
                if( (i<s1.size()) && (s1[i] == s3[i+j])){
                    if(vis.insert( (i+1)*m+j).second){
                        q.push({i,j-1});
                    }
                }
                if( (j<s2.size()) && (s2[j] == s3[i+j])){
                    if(vis.insert( (i)*m+j+1).second){
                        q.push({i-1,j});
                    }
                }
            }
        }
        return false;
        
    }
};