class Solution {
    public long largestSquareArea(int[][] bottomLeft, int[][] topRight) {
        long ans = 0 ; 
        for(int i = 0 ;i<bottomLeft.length;i++){
            for(int j = i+1 ;j<topRight.length;j++){
                int minX = Math.min(topRight[i][0],topRight[j][0]);
                int maxX = Math.max(bottomLeft[i][0],bottomLeft[j][0]);
                int minY = Math.min(topRight[i][1],topRight[j][1]);
                int maxY = Math.max(bottomLeft[i][1],bottomLeft[j][1]);
                if(maxX<minX && maxY<minY){
                    ans = Math.max(ans,Math.min(minX-maxX,minY-maxY));
                }
            }
        }
        return ans*ans;
    }
}