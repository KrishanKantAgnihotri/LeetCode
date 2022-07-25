class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        int n = v.size();
        if(n ==0){
            return {-1,-1};
        }
        int a = -1 ; 
        int b = -1 ; 
        int l = 0 ; 
        int r = n-1 ; 
        while(l<r){
            int mid =  (l+r)/2;
            // cout<<1<<"\n";
            if(v[mid]<t){
                l = mid+1;
            }
            else{
                r = mid;
            }
          }
        if(v[l]!=t){
            return {a,b};
        }
        a = l;
        r = n-1 ;
        while(l<r){
            int mid =  ((r+l)/2)+1;
            if(v[mid]>t){
                r = mid-1;
            }        
            else {
                l = mid;
            }
        }
        b = r ;
        return {a,b};
    
        
    }
};