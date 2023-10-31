class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int x = pref[0];
        for(int i = 1;i<pref.size(); i++){
            int y = pref[i];
            pref[i] = pref[i]^x;
            x = y;
        }
        return pref;
    }
};