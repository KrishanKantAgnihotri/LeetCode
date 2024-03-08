class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer,Integer> m= new HashMap<Integer,Integer>();
        for(int i = 0 ;i<nums.length ;i++){
            if(m.containsKey(nums[i])){
                m.put(nums[i],m.get(nums[i])+1);
            }
            else{
                m.put(nums[i],1);
            }
        }
        int mx = 0 ; 
        for(Map.Entry<Integer,Integer> entry : m.entrySet()){
            if(mx<entry.getValue()){
                mx = entry.getValue();
            }
        }
        int ans = 0 ; 
        for(Map.Entry<Integer,Integer> entry : m.entrySet()){
            if(mx == entry.getValue()){
                ans+=entry.getValue();
            }
        }
        return ans;
    }
}