import java.util.Stack;

public class ExpressionEvaluationInPrePostOrder {
    static class Node {
        String value;
        Node left, right;

        Node(String value) {
            this.value = value;
            this.left = this.right = null;
        }
    }

    // Function to check if a string is an operator
    static boolean isOperator(String s) {
        return s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/");
    }

    // Function to build an expression tree from postfix expression
    static Node buildTree(String postfix) {
        Stack<Node> stack = new Stack<>();
        String[] tokens = postfix.split(" ");

        for (String token : tokens) {
            Node newNode = new Node(token);
            if (isOperator(token)) {
                newNode.right = stack.pop();
                newNode.left = stack.pop();
            }
            stack.push(newNode);
        }
        return stack.peek();
    }

    // Inorder traversal
    static void inorder(Node root) {
        if (root == null) return;
        if (isOperator(root.value)) System.out.print("(");
        inorder(root.left);
        System.out.print(root.value + " ");
        inorder(root.right);
        if (isOperator(root.value)) System.out.print(")");
    }

    // Preorder traversal
    static void preorder(Node root) {
        if (root == null) return;
        System.out.print(root.value + " ");
        preorder(root.left);
        preorder(root.right);
    }

    // Postorder traversal
    static void postorder(Node root) {
        if (root == null) return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.value + " ");
    }

    public static void main(String[] args) {
        String expression = "10 2 8 * + 3 -";
        Node root = buildTree(expression);

        System.out.print("Inorder: ");
        inorder(root);
        System.out.print("\nPreorder: ");
        preorder(root);
        System.out.print("\nPostorder: ");
        postorder(root);
        System.out.println();
    }
}
