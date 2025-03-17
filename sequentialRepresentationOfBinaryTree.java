public class sequentialRepresentationOfBinaryTree {
    private int[] tree;
    private int size;
    private static final int MAX_SIZE = 100;

    public sequentialRepresentationOfBinaryTree() {
        tree = new int[MAX_SIZE];
        for (int i = 0; i < MAX_SIZE; i++)
            tree[i] = -1; // Initialize as empty
        size = 0;
    }

    public void insert(int value) {
        if (size >= MAX_SIZE) {
            System.out.println("Tree is full!");
            return;
        }
        tree[size] = value;
        size++;
    }

    private void inorder(int index) {
        if (index >= size || tree[index] == -1) return;
        inorder(2 * index + 1); // Left
        System.out.print(tree[index] + " "); // Root
        inorder(2 * index + 2); // Right
    }

    private void preorder(int index) {
        if (index >= size || tree[index] == -1) return;
        System.out.print(tree[index] + " "); // Root
        preorder(2 * index + 1); // Left
        preorder(2 * index + 2); // Right
    }

    private void postorder(int index) {
        if (index >= size || tree[index] == -1) return;
        postorder(2 * index + 1); // Left
        postorder(2 * index + 2); // Right
        System.out.print(tree[index] + " "); // Root
    }

    public void display() {
        System.out.print("Tree Elements: ");
        for (int i = 0; i < size; i++) {
            System.out.print(tree[i] + " ");
        }
        System.out.println();
    }

    public void printTraversals() {
        System.out.print("Inorder Traversal: ");
        inorder(0);
        System.out.print("\nPreorder Traversal: ");
        preorder(0);
        System.out.print("\nPostorder Traversal: ");
        postorder(0);
        System.out.println();
    }

    public static void main(String[] args) {
        sequentialRepresentationOfBinaryTree bt = new sequentialRepresentationOfBinaryTree();
        bt.insert(1);
        bt.insert(2);
        bt.insert(3);
        bt.insert(4);
        bt.insert(5);
        bt.insert(6);
        bt.insert(7);

        bt.printTraversals();
        bt.display();
    }
}

