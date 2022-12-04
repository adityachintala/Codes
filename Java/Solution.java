import java.util.*;

// insert and traverse stack

/**
 * Solution
 */
public class Solution {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        Iterator it = stack.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
    }
}