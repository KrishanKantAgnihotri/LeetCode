class Solution {
public:
    static bool check(vector<int> &a,vector<int> &b){
        if(a[0] == b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& v) {
     
        int n = v.size();
        int mx = INT_MIN;
        sort(v.begin(),v.end(),check);
        int ans = 0 ; 
        for(int i =n-1 ;i>=0; i--){
            if(v[i][1]<mx){
                ans++;
            }
            else 
                mx = v[i][1];
            
        }
        return ans;
    }
};