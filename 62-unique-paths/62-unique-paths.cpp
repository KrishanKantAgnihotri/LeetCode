class Solution {
public:
    int combi(int a,int c){
        long long int res = 1;
        int j = 1;
        for(long long int i = a;i>(c) ;i--){
            res*=i;
            res/=j;
            j++;
        }
        //()
        return res;
    }
    int uniquePaths(int m, int n) {
        int a = (n+m-2);//8
        int c  = max(n-1,m-1);//6
        return combi(a,c);
    }
};