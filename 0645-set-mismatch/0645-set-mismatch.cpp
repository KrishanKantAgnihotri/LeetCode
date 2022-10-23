class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        int n = v.size();
        int mask = 0 ; 
        for(int i = 1 ;i<=n ;i++){
            mask^=i;
        }
        map<int,int> m;
        int num = 0 ; 
        for(int i = 0 ;i<n ;i++){
            mask^=v[i];
            m[v[i]]++;
            if(m[v[i]] == 2){
                mask^=v[i];
                num = v[i];
            }
        }
        return {num,mask};
    }
};