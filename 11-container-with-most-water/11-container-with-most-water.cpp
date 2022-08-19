class Solution {
public:
    int maxArea(vector<int>& v) {
        int a = 0 ; 
        int b = v.size()-1;
        int ans = 0 ; 
        while(a<b){
            int mn = min(v[a],v[b]);
            ans = max(ans,(b-a)*mn);
            if(v[a]<=v[b])
                a++;
            else b--;
        }
        return ans;
    }
};