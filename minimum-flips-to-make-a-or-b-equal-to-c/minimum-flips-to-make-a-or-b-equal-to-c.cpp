class Solution {
public:
    int minFlips(int a, int b, int c) {
    int cnt = 0 ; 
        for(int i = 0 ; i<32 ;i++)
    {
        bool one = false;
        bool two =false;
        bool three = false;
            if(a&(1<<i))
                one=true;
            if(b&(1<<i))
                two=true;
            if(c&(1<<i))
                three=true;
            if(three==false)
            {if(one&&two)
                cnt+=2;
             else 
                 if(one||two)
                     cnt+=1;
            }
            else 
            { if((one==false&&two==false))
                cnt+=1;
            
                
            }
          } 
        return cnt;
    }
};