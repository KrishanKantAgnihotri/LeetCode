class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(__builtin_popcountll(n)!=1) return false;
        for(int i = 0 ;i<32 ;i++){
            if((1<<i)&n){
                return (i%2 == 0);
            }
        }
        return false;
    }
};