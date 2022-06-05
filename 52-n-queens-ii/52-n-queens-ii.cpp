class Solution {
public:
    #define ll long long 
    vector<vector<bool>> taken;
    vector<vector<string>> ans;
    vector<string> board;
    int N;
   
    bool conflict(ll x,ll y){
       bool ok = false;
        for(int i = 0 ;i<N ;i++){
            ok|=(board[i][y]=='Q');
        }
        for(int i = 0 ;i<N ;i++){
            ok|=(board[x][i]=='Q');
        }
        ll t = x ; 
        ll t2 = y;
        while(min(t,t2)>=0){
            ok|=(board[t][t2]=='Q');
            t--;
            t2--;
        }
        t = x;
        t2 = y;
        while(max(t,t2)<N){
           ok|= (board[t][t2]=='Q');
            t++;
            t2++;
        }
        t = y;
        t2 = x;
        while(min(t,t2)>=0 && max(t,t2)<N){
            ok|=(board[t2][t]=='Q');
            t--;
            t2++;
        }
        t = y;
        t2 = x;
        while(max(t,t2)<N && min(t,t2)>=0){
            ok|=(board[t2][t]=='Q');
            t++;
            t2--;
        }
        return ok ;
    }
    bool tryi(int x,int y,int k){
        if(k == 0){
            ans.push_back(board);
            return true;
        }
       
        
        bool ok = false;
        for(int i = (x+1) ;i<N ;i++){
            for(int j = 0;j<N ;j++){
              if(!conflict(i,j)){
                  board[i][j] = 'Q';
                  ok|=tryi(i,j,k-1);
                  board[i][j] = '.';
                  
              }  
            }
        }
        return false;
    }
    void print(vector<string> s){
        for(int i = 0 ;i<s.size() ;i++){
            cout<<s[i]<<endl;
        }
        cout<<endl;
    }
    int totalNQueens(int n) {
        N = n;
        board.resize(n,string(n,'.'));
        for(int i = 0 ;i<n ;i++){
            for(int j = 0 ;j<n; j++){
                
                // print(board);
                 board[i][j] ='Q';                 
                tryi(i,j,n-1);
                board[i][j] = '.';
            }
        }
        return (int)ans.size();
    }
};