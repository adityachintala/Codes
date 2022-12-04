/*

Suppose there is a revolving dining table with a, b, c, d......... dishes on it.
Little John has a problem. He wants to complete his dinner fast and go play.
He wants to find the dish with least amount of time to finish.
He is not good at math. So, he asks you to help him.

You are given a circular linked list with n nodes.
The ith node contains an integer D which is time required to complete the food.
The circular list loops around itself such that the last node points to the first node.

Given the circular list, find the value of the node that contains the minimum value.

Input Format:
The first line contains n space-separated integers a_i.

Output Format:
Print the value of the node with minimum value.

-----------------------------------------------------------------------------------------------

Sample Input
5 4 3 2 1

Sample Output
1

Explanation
The circular list is [5, 4, 3, 2, 1] and the minimum value is 1.

------------------------------------------------------------------------------------------------

Sample Input
4 5 6 8 4 2 9

Sample Output
2

Explanation
The circular list is [4, 5, 6, 8, 4, 2, 9] and the minimum value is 2.

--------------------------------------------------------------------------------------------------
*/

class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function solution(arr) {

    let head = new Node(arr[0]);
    let curr = head;
    for (let i = 1; i < arr.length; i++) {
        curr.next = new Node(arr[i]);
        curr = curr.next;
    }
    curr.next = head;

    curr = head;
    let min = 1234567890;

    do {
        if (curr.data < min) {
            min = curr.data;
        }
        curr = curr.next;
    } while (curr != head);
    console.log(min);

}

var readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter times separated by space : ", function (line) {
    let arr = line.split(' ').map(Number);
    solution(arr);
    readline.close();
})