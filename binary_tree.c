#include <stdio.h>
#include <stdlib.h>

// Define structure for tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to build tree using user input
struct Node* buildTree() {
    int value;

    printf("Enter value (-1 for no node): ");
    scanf("%d", &value);

    // -1 means no node
    if (value == -1) {
        return NULL;
    }

    // Create node
    struct Node* root = createNode(value);

    printf("Enter left child of %d\n", value);
    root->left = buildTree();

    printf("Enter right child of %d\n", value);
    root->right = buildTree();

    return root;
}

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {

    printf("Build Binary Tree\n");
    printf("-----------------\n");

    struct Node* root = buildTree();

    printf("\nInorder Traversal of the Binary Tree:\n");
    inorder(root);

    return 0;
}
