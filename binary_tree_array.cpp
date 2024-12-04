#include <iostream>
#include <vector>
#include <algorithm> 

class BinaryTreeToBST {
private:
    std::vector<int> binaryTree;

    
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;

        
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
    };

    
    TreeNode* buildBST(std::vector<int>& sortedArray, int start, int end) {
       
        if (start > end) {
            return nullptr;
        }

        
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(sortedArray[mid]);

        root->left = buildBST(sortedArray, start, mid - 1);
        root->right = buildBST(sortedArray, mid + 1, end);

        return root;
    }

    
    void inOrderTraversal(TreeNode* root) const {
        if (root == nullptr) {
            return;
        }
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }

public:
    
    void insert(int value) {
        binaryTree.push_back(value);
    }

    
    void convertToBST() {
        if (binaryTree.empty()) {
            std::cout << "Binary tree is empty." << std::endl;
            return;
        }

       
        std::vector<int> sortedArray = binaryTree;
        std::sort(sortedArray.begin(), sortedArray.end());

        
        TreeNode* bstRoot = buildBST(sortedArray, 0, sortedArray.size() - 1);

       
        std::cout << "In-order Traversal of the BST: ";
        inOrderTraversal(bstRoot);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTreeToBST tree;

    
    tree.insert(10);
    tree.insert(5);
    tree.insert(20);
    tree.insert(2);
    tree.insert(15);
    tree.insert(30);
    tree.insert(25);

    
    std::cout << "Converting Binary Array Tree to BST..." << std::endl;
    tree.convertToBST();

    return 0;
}