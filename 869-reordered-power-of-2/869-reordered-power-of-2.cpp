class Solution {
public:
    int dig(int n){
        int cnt = 0 ; 
        while(n){
            n/=10;
            cnt++;
        }
        return cnt;
    }
    bool reorderedPowerOf2(int n) {
        long long int cur = 1 ; 
        int m = dig(n);
        unordered_map<int,int> v;
        int sp = n;
        while(sp){
            v[sp%10]++;
            sp/=10;
        }
        while(cur<INT_MAX){
            int cnt = dig(cur);
            if(cnt == m){
                int rm = cur;
                unordered_map<int,int> u;
                while(rm){
                    u[rm%10]++;
                    rm/=10;
                }
                
                    rm = cur;
                    bool ok = true;
                    while(rm){
                        if(u[rm%10] != v[rm%10]){
                            ok = false;
                            break;
                        }
                        rm/=10;
                    }
                    if(ok) return true;
                
                
            }
            cur*=2;
        }
        return false;
    }
};