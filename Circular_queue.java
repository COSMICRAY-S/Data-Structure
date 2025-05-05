import java.util.Scanner;

class InnerCircular_queue {
    int[] arr;
    int N;
    int front, rear;

    InnerCircular_queue(int n) {
        N = n;
        arr = new int[N];
        front = rear = -1;
    }

    void enqueue(int data) throws Exception {

        if ((rear + 1) % N == front) {
            System.out.println("Overflow!");
            return;
        }

        if (front == -1)
            front = 0;
        rear = (rear + 1) % N;
        arr[rear] = data;
        return;
    }

    int dequeue() throws Exception {

        if (front == -1) {
            throw new Exception("Underflow!");
        }

        int result = arr[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % N;
        }

        return result;
    }

    void display() {
        if (front == -1) {
            System.out.println("Q is empty");
            return;
        }

        int i = front;
        System.out.print("F\t");
        while (true) {
            System.out.print(arr[i] + " ");
            if (i == rear)
                break;
            i = (i + 1) % N;
        }
        System.out.println("\tR");
    }
}

public class Circular_queue {

    @SuppressWarnings("resource")
    public static void main(String[] args) throws Exception {

        System.out.println("");
        Scanner scanner = new Scanner(System.in);
        InnerCircular_queue q = new InnerCircular_queue(10);
        while (true) {
            System.out.println("1. enqueue\n2. dequeue value\n3. Display\n4. exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter value to enqueue: ");
                    int val = scanner.nextInt();
                    q.enqueue(val);
                    System.out.println("enqueued value: " + val);
                    break;
                case 2:
                    int num = q.dequeue();
                    System.out.println("dequeued value: " + num);
                    break;
                case 3:
                    System.out.print("Q: ");
                    q.display();
                    break;
                case 4:
                    System.out.println("Exiting");
                    return;

                default:
                    break;
            }
        }
    }
}