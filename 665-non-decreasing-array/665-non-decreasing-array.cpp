class Solution {
public:
    bool checkPossibility(vector<int>& v) {
       int n = v.size();
        int cnt = 0 ; 
        for(int i = 1 ;i<n ;i++){
            if(v[i]<v[i-1]){
                cnt++;
                if(cnt>1) return false;
                if((i==1)||(v[i]>=v[i-2])){
                    v[i-1] = v[i];
                }
                else {
                    v[i] = v[i-1];
                }
            }
        }
        return true;
    }
};