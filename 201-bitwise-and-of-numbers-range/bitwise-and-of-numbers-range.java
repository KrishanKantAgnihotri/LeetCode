class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int cnt = 0 ;  
        for(;left!=right;left = left>>1,right = right>>1,cnt = cnt+1){
        }
        return left<<cnt;
    }
}