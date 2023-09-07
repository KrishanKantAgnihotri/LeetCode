class Solution {
public:
    int ncr(int n,int r){
        int x = (n-r+1);
        int y = r;
        long int f = 1;
        long int s = 1;
        for(long int i = r;i>=1;i--){
            f*=(n-i+1);
            s*=i;
            int g = __gcd(f,s);
            f/=g;
            s/=g;
        }
        
        int ans = f;
        return ans;
    }
    int uniquePaths(int m, int n) {
        int f = ncr(n+m-2,(min(n-1,m-1)));
        return f;
    }
};