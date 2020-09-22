//You are given the root of a binary tree where each node has a value 0 or 1.  
//Each root-to-leaf path represents a binary number starting with the most significant bit.  
//For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, then this could represent 01101 in binary, which is 13.
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getBinVal(int power){
        int finalVal = 1;
        while(power){
            finalVal = finalVal*2;
            --power;
        }
        return finalVal;
    }
    void preOrder(TreeNode *root, int &sumAll, string soFar, int power){
        if(root == NULL){
            int tempSum = 0;
            int tempPower = power-1;
            for(char ch: soFar){
                
                tempSum += ((int)ch-48) * getBinVal(tempPower);
                //cout<<ch<<" "<<tempSum<<" "<<getBinVal(tempPower)<<" "<<tempPower<<endl;
                --tempPower;
            }
            sumAll += tempSum;
            cout<<endl;
            return;
        }
        soFar += (root->val == 1)? "1":"0";
        preOrder(root->left,sumAll,soFar,power+1);
        preOrder(root->right,sumAll,soFar,power+1);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sumAll =0, sumPart = 0,power = 0;
        string soFar;
        preOrder(root,sumAll,soFar,power);
        return sumAll/2;
    }
};
