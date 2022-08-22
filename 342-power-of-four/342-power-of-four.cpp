class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(__builtin_popcount(n) == 1){
            return (ffs(n)%2 == 1);
        }
        return false;
    }
};