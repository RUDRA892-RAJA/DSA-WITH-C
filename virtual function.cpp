#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct BinaryTreeNode {
    int key;
    struct BinaryTreeNode *left, *right;
};

// Function to create a new node
struct BinaryTreeNode* newNodeCreate(int value) {
    struct BinaryTreeNode* temp = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}

// Insert a node into the BST
struct BinaryTreeNode* insertNode(struct BinaryTreeNode* node, int value) {
    if (node == NULL)
        return newNodeCreate(value);
    if (value < node->key)
        node->left = insertNode(node->left, value);
    else if (value > node->key)
        node->right = insertNode(node->right, value);
    return node;
}

// Search for a node in the BST
struct BinaryTreeNode* searchNode(struct BinaryTreeNode* root, int target) {
    if (root == NULL || root->key == target)
        return root;
    if (root->key < target)
        return searchNode(root->right, target);
    return searchNode(root->left, target);
}
// In-order traversal
void inOrder(struct BinaryTreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}
// Delete a node from the BST
struct BinaryTreeNode* findMin(struct BinaryTreeNode* root) {
    if (root == NULL)
        return NULL;
    else if (root->left != NULL)
        return findMin(root->left);
    return root;
}
struct BinaryTreeNode* deleteNode(struct BinaryTreeNode* root, int x) {
    if (root == NULL)
        return NULL;
    if (x > root->key)
        root->right = deleteNode(root->right, x);
    else if (x < root->key)
        root->left = deleteNode(root->left, x);
    else {
        // Node with one child or no child
        if (root->left == NULL || root->right == NULL) {
            struct BinaryTreeNode* temp = root->left ? root->left : root->right;
            free(root);
            return temp;
        }
        // Node with two children
        else {
            struct BinaryTreeNode* temp = findMin(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }
    return root;
}
int main() {
    struct BinaryTreeNode* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    printf("InOrder traversal: ");
    inOrder(root);
    printf("\n");
    // Search for node
    if (searchNode(root, 60) != NULL)
        printf("60 found\n");
    else
        printf("60 not found\n");
    // Delete node
    root = deleteNode(root, 70);
    printf("After Deletion of 70:\n");
    inOrder(root);
    printf("\n");
    return 0;
}

