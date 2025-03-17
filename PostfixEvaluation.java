import java.util.Scanner;
import java.util.Stack;

public class PostfixEvaluation {
    // Function to evaluate a postfix expression
    public static int evaluatePostfix(String expr) {
        Stack<Integer> stack = new Stack<>();
        String[] tokens = expr.split(" ");

        for (String token : tokens) {
            // If it's a number, push it onto the stack
            if (Character.isDigit(token.charAt(0))) {
                stack.push(Integer.parseInt(token));
            } 
            // If it's an operator, pop two elements and perform the operation
            else {
                int b = stack.pop();
                int a = stack.pop();

                switch (token) {
                    case "+": stack.push(a + b); break;
                    case "-": stack.push(a - b); break;
                    case "*": stack.push(a * b); break;
                    case "/": stack.push(a / b); break;
                }
            }
        }
        return stack.pop(); // Final result
    }

    // Driver Code
    public static void main(String[] args) {
        String expression = "10 2 8 * + 3 -";
        Scanner sc = new Scanner(System.in);
        expression =sc.nextLine();

        System.out.println("Result: " + evaluatePostfix(expression)); // Output: 23
    }
}
