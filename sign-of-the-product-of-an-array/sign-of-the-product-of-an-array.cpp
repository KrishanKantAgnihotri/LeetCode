class Solution {
public:
    int arraySign(vector<int>& v) {
        int ng = 0 ; 
        int z = 0 ; 
        for(int i = 0 ;i<v.size();i++){
            if(v[i] == 0){
                z++;
            }
            else{
                if(v[i]<0){
                    ng++;
                }
            }
        }
        if(z) return 0 ;
        return (ng%2==0)?1:-1;
    }
};