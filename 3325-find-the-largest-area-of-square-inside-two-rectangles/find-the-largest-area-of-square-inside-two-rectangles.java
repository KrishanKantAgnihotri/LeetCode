class Solution {
    public static long getIntersectionArea(long l1,long l2,long r1,long r2){
        // 4 cases for intersection 
        // 1: when ith engulfs jth.
        // 2: when jth engulfs ith.
        // 3: when l2 lies b/w l1 and r1.
        // 4:when l2 lies b/w l1 and r2.
        if(l1<=l2 && r1>=r2){
            return r2-l2;
        } 
        if(l2<=l1 && r1<=r2){
            return r1-l1;
        }
        if(r1>=l2 && r2>=r1){
            return r1-l2;
        }
        if(r1>=l2 && r2>=l1){
            return r2-l1;
        }
        return 0 ; 
    }
    public long largestSquareArea(int[][] bLeft, int[][] tRight) {
        long ans = 0 ; 
        for(int i = 0 ;i<bLeft.length;i++){
            for(int j = i+1 ;j<tRight.length;j++){
                long x = getIntersectionArea(bLeft[i][0],bLeft[j][0],tRight[i][0],tRight[j][0]);//x intersection
                long y = getIntersectionArea(bLeft[i][1],bLeft[j][1],tRight[i][1],tRight[j][1]);//y intersection
                ans = Math.max(ans,Math.min(x,y));// square can be formed of side which is equal to minimum of 2 intersection
            }
        }
        return ans*ans;//area of that square
    }
}