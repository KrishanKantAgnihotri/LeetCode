class Solution {
    public String maximumOddBinaryNumber(String s) {
        String ans = "";
        int cnt  = 0 ; 
        int n = s.length();
        for(int i = 0 ;i<n ;i++){
            if(s.charAt(i)=='1') cnt++;
        }
        for(int i = 0 ;i <n-1 ;i++){
            if(cnt>1){
                cnt--;
                ans = ans+'1';
            }
            else {
                ans = ans+'0';
            }
        }
        ans = ans+'1';
        return ans;
    }
}