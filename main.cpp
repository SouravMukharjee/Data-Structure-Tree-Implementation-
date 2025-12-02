#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// ------------------- Tree Implementation -------------------
struct TreeNode {
int data;
TreeNode* left;
TreeNode* right;
TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode* root) {
if (!root) return;
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}

// ------------------- Stack Implementation -------------------
void demoStack() {
stack<int> s;
cout << "\n--- Stack Demo ---\n";
s.push(10);
s.push(20);
s.push(30);
cout << "Stack after pushes: ";
stack<int> temp = s;
while (!temp.empty()) {
cout << temp.top() << " ";
temp.pop();
}
cout << "\nPopped element: " << s.top() << endl;
s.pop();
}

// ------------------- Queue Implementation -------------------
void demoQueue() {
queue<int> q;
cout << "\n--- Queue Demo ---\n";
q.push(100);
q.push(200);
q.push(300);
cout << "Queue after pushes: ";
queue<int> temp = q;
while (!temp.empty()) {
cout << temp.front() << " ";
temp.pop();
}
cout << "\nDequeued element: " << q.front() << endl;
q.pop();
}

// ------------------- Main Function -------------------
int main() {
cout << "--- Data Structure Demonstration ---\n";

```
// Stack demo
demoStack();

// Queue demo
demoQueue();

// Tree demo
cout << "\n--- Tree Demo (Inorder Traversal) ---\n";
TreeNode* root = new TreeNode(50);
root->left = new TreeNode(30);
root->right = new TreeNode(70);
root->left->left = new TreeNode(20);
root->left->right = new TreeNode(40);
root->right->left = new TreeNode(60);
root->right->right = new TreeNode(80);

cout << "Inorder traversal of tree: ";
inorder(root);
cout << endl;

return 0;
```

}
