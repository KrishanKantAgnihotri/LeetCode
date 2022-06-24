class Solution {
public:
    int scheduleCourse(vector<vector<int>>& v) {
        vector<pair<int,int>> courses;
        for(int i = 0 ;i<v.size() ;i++){
            courses.push_back({v[i][0],v[i][1]});
        }
        sort(courses.begin(),courses.end(),[&](pair<int,int> &a,pair<int,int> &b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    });
        int ans = 0 ; 
        int pre = 0 ; 
        priority_queue<pair<int,int>> pq; 
        
        for(int i = 0 ;i<courses.size() ;i++){
            pre+=courses[i].first;
            // pq.push({courses[i][0],courses[i][1]});
            // cout<<pre<<endl;
            if(pre>courses[i].second){
                
                if( (pq.size()>0)  && (courses[i].first<pq.top().first) ){
                    pre-=pq.top().first;
                    pq.pop();
                    pq.push({courses[i].first,courses[i].second});
                }
                else {
                    pre-=courses[i].first;
                }
               continue;                
            }
            pq.push({courses[i].first,courses[i].second});
            
        }
        return (int)pq.size();
    }
};
