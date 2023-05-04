class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> q1,q2;
        int n = senate.length();
        for(int i = 0 ;i<n;i++){
            if(senate[i] == 'R') q1.push(i);
            else q2.push(i);
        }
        while((q1.size())&&(q2.size())){
            int a = q1.front();
            int b = q2.front();
            q1.pop();
            q2.pop();
            (a>b)?q2.push(b+n):q1.push(a+n);
        }
        return (q1.size()>q2.size())?"Radiant":"Dire";
    }
};