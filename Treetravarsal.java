import java.util.Scanner;


class Node{
    Node  left,right;
    int data;

    Node(int data){
        this.data = data;
        left=right=null;
    }
}

public class Treetravarsal {
    static Scanner sc =null;
    public static void main(String[] args) {
        sc = new Scanner(System.in);

        Node root = createNode();

        System.out.print("Inorder Traversal: ");
        inorder(root);
        System.out.println();

        System.out.print("Preorder Traversal: ");
        preorder(root);
        System.out.println();

        System.out.print("Postorder Traversal: ");
        postorder(root);
        System.out.println();
    }

    static Node createNode(){
        Node root= null;
        System.out.println("Enter data: ");
        //Scanner sc=new Scanner(System.in);
        int data =sc.nextInt();

        if(data == -1) return null;
        root =new Node(data);
        
        System.out.println("Enter left of " +data);
        root.left = createNode();

        System.out.println("Enter right of "+ data);
        root.right=createNode();
        return root;
    }

    // Inorder Traversal (Left, Root, Right)
    static void inorder(Node node) {
        if (node != null) {
            inorder(node.left);
            System.out.print(node.data + " ");
            inorder(node.right);
        }
    }

    // Preorder Traversal (Root, Left, Right)
    static void preorder(Node node) {
        if (node != null) {
            System.out.print(node.data + " ");
            preorder(node.left);
            preorder(node.right);
        }
    }

    // Postorder Traversal (Left, Right, Root)
    static void postorder(Node node) {
        if (node != null) {
            postorder(node.left);
            postorder(node.right);
            System.out.print(node.data + " ");
        }
    }
}


/*class Node {
    int key;
    Node left, right;

    public Node(int data) {
        key = data;
        left = right = null;
    }
}

// Binary Tree class with traversal methods
class BinaryTree {
    Node root;

    // Inorder Traversal (Left, Root, Right)
    void inorder(Node node) {
        if (node != null) {
            inorder(node.left);
            System.out.print(node.key + " ");
            inorder(node.right);
        }
    }

    // Preorder Traversal (Root, Left, Right)
    void preorder(Node node) {
        if (node != null) {
            System.out.print(node.key + " ");
            preorder(node.left);
            preorder(node.right);
        }
    }

    // Postorder Traversal (Left, Right, Root)
    void postorder(Node node) {
        if (node != null) {
            postorder(node.left);
            postorder(node.right);
            System.out.print(node.key + " ");
        }
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        
        // Creating the same tree structure
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(6);
        tree.root.right.right = new Node(7);

        // Display tree traversals
        System.out.print("Inorder Traversal: ");
        tree.inorder(tree.root);
        System.out.println();

        System.out.print("Preorder Traversal: ");
        tree.preorder(tree.root);
        System.out.println();

        System.out.print("Postorder Traversal: ");
        tree.postorder(tree.root);
        System.out.println();
    }
}
 */