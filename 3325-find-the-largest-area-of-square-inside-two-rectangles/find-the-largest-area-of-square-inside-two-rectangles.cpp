class Solution {
public:
    long getIntersection(int l1,int l2,int r1,int r2){
        if(l2<=l1 && r2>=r1){
            return r1-l1;
        }
        if(l1<=l2 && r1>=r2){
            return r2-l2;
        }
        if(l2<=r1 && r2>=r1){
            return r1-l2;
        }
        if(l2<=r1 &&  r2>=l1){
            return r2-l1;
        }
        return 0 ;
    }
    long long largestSquareArea(vector<vector<int>>& bl, vector<vector<int>>& tr) {
        long long ans = 0 ; 
        for(int i = 0 ;i<bl.size() ;i++){
            for(int j = i+1 ;j<tr.size() ;j++){
            long long x = getIntersection(bl[i][0],bl[j][0],tr[i][0],tr[j][0]);
            long long y = getIntersection(bl[i][1],bl[j][1],tr[i][1],tr[j][1]);
            ans = max(ans,min(x,y));
            }
        }        
        return ans*ans;
    }
};