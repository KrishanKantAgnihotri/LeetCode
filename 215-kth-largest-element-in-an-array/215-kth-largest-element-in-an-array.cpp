class Solution {
public:
    int divide(int l,int r,vector<int> &v){
    int dist = (r-l+1);
    srand(time(0));
    int p = l+rand()%dist;
    swap(v[p],v[r]);
    p = v[r];
    int i = l-1 ; 
    for(int j = l;j<=r-1;j++){
        if(v[j]<p){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
    
}
int median_order_statistic(int l,int r,int k,vector<int> &v){
    if(l<=r){
        int p = divide(l,r,v);
        if(p == k){
            return v[p];
        }
        else if(p>k){
           return median_order_statistic(l,p-1,k,v);
        }
        else{
            return median_order_statistic(p+1,r,k,v);
        }
    }
    return -1;
}
    int findKthLargest(vector<int>& nums, int k) {
        return median_order_statistic(0,nums.size()-1,nums.size()-k,nums);
    }
};