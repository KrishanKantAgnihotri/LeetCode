class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {

        //need to find the common prefix for both 
        int cnt =0;
        while(l!=r){
            l>>=1;
            r>>=1;
            cnt++;
        }
        return l<<cnt;
        
    }
};