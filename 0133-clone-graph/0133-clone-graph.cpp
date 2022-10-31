/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
Node* dfs(Node* node,unordered_map<Node*,Node*> &u){
    vector<Node*> pdosi;
    Node* clone = new Node(node->val);
    u[node] = clone ;
    for(auto it:node->neighbors){
        if(u.find(it)!=u.end()){
            pdosi.push_back(u[it]);
        }
        else 
            pdosi.push_back(dfs(it,u));
        
    }
    clone->neighbors =pdosi; 
    return clone ;

}
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        unordered_map<Node*,Node*> u;
        return dfs(node,u);
    }
};