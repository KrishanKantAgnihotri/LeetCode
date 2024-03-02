class Solution {
    public int[] sortedSquares(int[] nums) {
        int i = 0 ; 
        int j = nums.length-1;
        ArrayList<Integer>  l = new ArrayList<Integer>();
        while(i<=j){
            int x = nums[i]*nums[i];
            int y = nums[j]*nums[j];
            if(x>y){
                l.add(x);
                i++;
            }
            else {
                l.add(y);
                j--;
            }
        }
        j = nums.length-1;
        for(i = 0 ;i<nums.length ;i++,j--){
            nums[i] = l.get(j);
        }
        return nums;
    }
}