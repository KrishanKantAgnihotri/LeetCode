class Solution {
public:
    void sortColors(vector<int>& v) {
        int n = v.size();
        int i = 0 ; 
        while(i<n){
            if(v[i]!=0) break;
            i++;
        }
        if(i == n){
            i =0 ;
            while(i<n){
                if(v[i]!=1) break;
                i++;
            }
            for(int j = i ;j<n ;j++){
                if(v[j] == 1){
                    swap(v[i],v[j]);
                    i++;
                }
            }
        }
        else{
            for(int j = i+1 ;j<n ;j++){
                 if(v[j]==0){
                     swap(v[i],v[j]);
                     i++;
                 }
            }
            while(i<n){
                if(v[i]!=1) break;
                i++;
            }
            for(int j = i ;j<n ;j++){
                if(v[j] == 1){
                    swap(v[i],v[j]);
                    i++;
                }
            }
            
        }
        
    }
};