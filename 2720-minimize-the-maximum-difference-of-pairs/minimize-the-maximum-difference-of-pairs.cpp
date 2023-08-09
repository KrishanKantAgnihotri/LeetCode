class Solution {
public:
    int minimizeMax(vector<int>& v, int p) {
       
        sort(v.begin(),v.end());
        
        int l = 0 ; 
        int r = v.back()-v.front();
        int ans = r ; 
        while(l<r){
            int m = (l+r)/2;
            if(check(v,m,p)){
                ans = m;
                r = m;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
    private:
    bool check(vector<int>& v,int mid,int p){
        int n = v.size();
        int c = 0;
        for(int i = 0 ; i<n && c<p ;){
            if((i+1<n) && ((v[i+1]-v[i])<=mid)){
                c++;
                i+=2;
            }
            else{
                i++;
            }
        }
        return c>=p;
    }
};