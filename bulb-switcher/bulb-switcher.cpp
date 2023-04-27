class Solution {
public:
    int bulbSwitch(int n) {
        int ans  =0 ;
        long long int x = 1;
        while(x*x<=n){
            x++;
            ans++;
        }
        return ans;
    }
};