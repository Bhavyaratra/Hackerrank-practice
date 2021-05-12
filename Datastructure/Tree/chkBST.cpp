/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	*/
#include<bits/stdc++.h>
using namespace std;
    struct Node {
		int data;
		Node* left;
		Node* right;
	};
    

class Solution{
vector<int> v;
	bool checkBST(Node* root) {
		//inorder traversal of bst gives keys in ascending order 
        if(root==NULL){
            return false;
        }
      
        checkBST(root->left);
        v.push_back(root->data);
        checkBST(root->right);
    
    
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return false;
            }
        }
            
        return true;
	}
};