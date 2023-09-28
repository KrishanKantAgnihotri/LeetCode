class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        int ev = -1 ; 
        int od = 0;
        int n = v.size();
        while(od<n){
            if(v[od]%2 == 0){
                ev++;
                swap(v[ev],v[od]);
                

            }
            od++;
        }
        return v;

    }
};