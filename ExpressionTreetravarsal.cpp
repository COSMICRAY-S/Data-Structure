#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

// Node structure for the expression tree
struct Node {
    string value;
    Node* left;
    Node* right;
    Node(string val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to check if a string is an operator
bool isOperator(const string& s) {
    return (s == "+" || s == "-" || s == "*" || s == "/");
}

// Function to build the expression tree from postfix expression
Node* buildTree(const string& postfix) {
    stack<Node*> st;
    stringstream ss(postfix);
    string token;

    while (ss >> token) {
        Node* newNode = new Node(token);

        if (isOperator(token)) {
            newNode->right = st.top(); st.pop();
            newNode->left = st.top(); st.pop();
        }
        st.push(newNode);
    }
    return st.top();
}

// Inorder Traversal
void inorder(Node* root) {
    if (!root) return;
    if (isOperator(root->value)) cout << "(";
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
    if (isOperator(root->value)) cout << ")";
}

// Preorder Traversal
void preorder(Node* root) {
    if (!root) return;
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}

int main() {
    string expression = "10 2 8 * + 3 -";
    Node* root = buildTree(expression);

    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
