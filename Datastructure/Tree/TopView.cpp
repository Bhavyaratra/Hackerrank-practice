#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    //* solution 
    void topView(Node * root) {
      queue<pair<Node *,int>> q;
        map<int,int> m;
        
        q.push({root,0});
        while(!q.empty()){
            Node* temp = q.front().first;
            int val = q.front().second;
            q.pop();
            if(m.find(val)== m.end()){
                m[val]= temp->data;
            }
            if(temp->left){
                q.push({temp->left,val-1});
            }
            if(temp->right){
                q.push({temp->right,val+1});
            }
            
        }
        for(auto it=m.begin();it!=m.end();it++){
            cout<<it->second<<" ";
        }
        
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
