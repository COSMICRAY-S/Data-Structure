#include <iostream>
#define MAX_SIZE 100

using namespace std;

class BinaryTree {
private:
    int tree[MAX_SIZE];  // Array to hold the tree nodes
    int size;  // Number of nodes in the tree

public:
    BinaryTree() {
        for (int i = 0; i < MAX_SIZE; i++)
            tree[i] = -1;  // Initialize all elements as -1 (empty)
        size = 0;
    }

    void insert(int value) {
        if (size >= MAX_SIZE) {
            cout << "Tree is full!" << endl;
            return;
        }
        tree[size] = value;
        size++;
    }

    void inorder(int index) {
        if (index >= size || tree[index] == -1) return;
        inorder(2 * index + 1);  // Left
        cout << tree[index] << " ";  // Root
        inorder(2 * index + 2);  // Right
    }

    void preorder(int index) {
        if (index >= size || tree[index] == -1) return;
        cout << tree[index] << " ";  // Root
        preorder(2 * index + 1);  // Left
        preorder(2 * index + 2);  // Right
    }

    void postorder(int index) {
        if (index >= size || tree[index] == -1) return;
        postorder(2 * index + 1);  // Left
        postorder(2 * index + 2);  // Right
        cout << tree[index] << " ";  // Root
    }

    void display() {
        cout << "Tree Elements: ";
        for (int i = 0; i < size; i++) {
            cout << tree[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    BinaryTree bt;
    bt.insert(1);
    bt.insert(2);
    bt.insert(3);
    bt.insert(4);
    bt.insert(5);
    bt.insert(6);
    bt.insert(7);

    cout << "Inorder Traversal: ";
    bt.inorder(0);
    cout << "\nPreorder Traversal: ";
    bt.preorder(0);
    cout << "\nPostorder Traversal: ";
    bt.postorder(0);
    cout << endl;

    bt.display();

    return 0;
}
