class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        queue<int> q;
        int ans = 0 ; 
        int n = s.length();
        int cnt = 0 ;
        bool ok = false; 
        // for making things for 'F'
        for(int i = 0 ;i<n ;i++){
            cnt++;
            if(s[i] == 'T'){
                q.push(i);
            }
            if(q.size()>k){
                cnt = i-q.front();
                q.pop();
            }
            ans = max(ans,cnt);
        }
        cnt =  0;
        while(!q.empty()){
            q.pop();
        }
         ok = false;
        for(int i =  0 ;i<n; i++){
            cnt++;
            if(s[i]  == 'F'){
                q.push(i);
            }
            if(q.size()>k){
                cnt = i-q.front();
                q.pop();
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};