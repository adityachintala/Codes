/*
Time slicing is a scheduling mechanism/way used in time sharing systems. 
It is also termed as Round Robin scheduling. 
The aim of Round Robin scheduling or time slicing scheduling is to give all processes an equal opportunity to use CPU.

Suppose there are n1, n2, n3, n4... tasks with X1, X2, X3, X4.... 
being the time taken in seconds to complete each task by the 
Operating System. 
Let M be the time slice in milliseconds given by the Operating System 
to each of those tasks.
Find the number of time slices of the longest executing task. 
And find the total number time slices required to complete all the tasks.

Use each task as a node of Circular Linked List.
Each node should contain task name and time taken to complete the task.

Input:
No. of tasks : 6
F 6
D 4
G 7
C 3
E 5
A 1

Enter time slice in microseconds : 1

Output:
B : 2
A : 1
E : 5
C : 3
F : 6
D : 4
G : 7

Total time slices of the longest executing task : 7e+6
Task Name : G

Total time slices required to complete all the tasks : 2.8e+7
*/

class Node {
    constructor(time, task_name) {
        this.task_name = task_name;
        this.time = time;
        this.next = null;
    }
}

class CLL {
    constructor() {
        this.last = null;
    }

    add(time, task_name) {
        if (this.last == null) {
            this.last = new Node(time, task_name);
            this.last.next = this.last;
            return;
        }
        let temp = this.last.next;
        this.last.next = new Node(time, task_name);
        this.last.next.next = temp;
        this.last = this.last.next;
    }

    print() {
        let temp = this.last.next;
        do {
            console.log(temp.task_name + " : " + temp.time);
            temp = temp.next;
        } while (temp != this.last.next);
    }

    
    get_max_time() {
        let temp = this.last.next;
        let max_time = 0, max_task_name = "";
        do {
            if (temp.time > max_time) {
                max_time = temp.time;
                max_task_name = temp.task_name;
            }
            temp = temp.next;
        } while (temp != this.last.next);
        return [max_time, max_task_name];
    }

    get_sum() {
        let temp = this.last.next;
        let sum = 0;
        do {
            sum += temp.time;
            temp = temp.next;
        } while (temp != this.last.next);
        return sum;
    }

}


let cll = new CLL();
cll.add(2, "B");
cll.add(1, "A");
cll.add(5, "E");
cll.add(3, "C");
cll.add(6, "F");
cll.add(4, "D");
cll.add(7, "G");
cll.print();

let time_slice = 1e-6;
let a = cll.get_max_time();
console.log("\nTotal time slices of the longest executing task : " + Math.ceil(a[0] / time_slice).toExponential());
console.log("Task Name : " + a[1]);
let b = cll.get_sum();
console.log("\nTotal time slices required to complete all the tasks : " + (b / time_slice).toExponential());