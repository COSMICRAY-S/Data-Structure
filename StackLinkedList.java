class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class Stack {
    private Node top;

    public Stack() {
        this.top = null;
    }

    // Push operation
    public void push(int x) {
        Node newNode = new Node(x);
        newNode.next = top;
        top = newNode;
        System.out.println(x + " pushed into stack");
    }

    // Pop operation
    public void pop() {
        if (top == null) {
            System.out.println("Stack Underflow");
            return;
        }
        System.out.println(top.data + " popped from stack");
        top = top.next;
    }

    // Peek operation
    public int peek() {
        if (top == null) {
            System.out.println("Stack is empty");
            return -1;
        }
        return top.data;
    }

    // Check if stack is empty
    public boolean isEmpty() {
        return top == null;
    }
}

// Driver Code
public class StackLinkedList {
    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(10);
        s.push(20);
        s.push(30);

        System.out.println("Top element: " + s.peek()); // 30

        s.pop();
        System.out.println("Top element after pop: " + s.peek()); // 20
    }
}
