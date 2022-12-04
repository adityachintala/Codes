class Graph {
    constructor() {
        this.edges = {};
    }

    addNode(node) {
        this.edges[node] = [];
    }

    addEdge(node1, node2) {
        if (!this.edges[node1].includes(node2)) {
            this.edges[node1].push(node2);
        }
        if (!this.edges[node2].includes(node1)) {
            this.edges[node2].push(node1);
        } 
    }

    display() {
        console.log(this.edges);
        console.log();
    }

    mutuals(node1, node2) {
        let mutuals = [];
        for (let x of this.edges[node1]) {
            if (this.edges[node2].includes(x))
                mutuals.push(x);
        }
        if (mutuals.length > 0) {
            console.log(`Mutuals between ${node1} and ${node2} : ${mutuals}\n`);
        } else {
            console.log(`No mutuals between ${node1} and ${node2}\n`);
        }
    }

    friendSuggestions(node) {
        let suggestions = [];
        let queue = [];
        let visited = new Set();

        for (let x of this.edges[node]) {
            queue.push(x);
            visited.add(x);
        }

        while (queue.length > 0) {
            let current = queue.shift();
            for (let x of this.edges[current]) {
                if (!visited.has(x) && x != node) {
                    suggestions.push(x);
                    visited.add(x);
                }
            }
        }

        if (suggestions.length > 0) {
            console.log(`Friend suggestions for ${node} : ${suggestions}\n`);
        } else {
            console.log(`No friend suggestions for ${node}\n`);
        }
    }

}

function solution(x) {
    let gg = new Graph();
    gg.addNode("Rama");
    gg.addNode("Ella");
    gg.addNode("Lee");
    gg.addNode("Bob");
    gg.addNode("Tom");
    gg.addNode("Sam");
    gg.addNode("Katie");
    gg.addNode("Swati");
    gg.addNode("Zahir");
    gg.addNode("Arun");
    if (!gg.edges.hasOwnProperty(x)) {
        console.log(`${x} is not a node in the graph`);
        return;
    }
    gg.addEdge("Rama", "Ella");
    gg.addEdge("Rama", "Bob");
    gg.addEdge("Rama", "Katie");
    gg.addEdge("Ella", "Bob");
    gg.addEdge("Lee", "Katie");
    gg.addEdge("Lee", "Swati");
    gg.addEdge("Lee", "Zahir");
    gg.addEdge("Lee", "Sam");
    gg.addEdge("Lee", "Bob");
    gg.addEdge("Bob", "Sam");
    gg.addEdge("Bob", "Tom");
    gg.addEdge("Tom", "Sam");
    gg.addEdge("Sam", "Arun");
    gg.addEdge("Sam", "Zahir");
    gg.addEdge("Zahir", "Arun");
    gg.addEdge("Swati", "Katie");
    gg.addEdge("Swati", "Zahir");
    console.log("Displaying the graph : ");
    gg.display();

    gg.friendSuggestions(x);
}

var readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter friend name to find friend suggestions: ", function (line) {
    solution(line);
    readline.close();
})

/* Output:

Case 1:

Enter friend name to find friend suggestions: Katie
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Katie : Ella,Bob,Zahir,Sam

---------------------------------------------------------------------------------------------------------------------

Case 2:

Enter friend name to find friend suggestions: Lee
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Lee : Rama,Arun,Tom,Ella

----------------------------------------------------------------------------------------------------------------------

Case 3:

Enter friend name to find friend suggestions: Zahir
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Zahir : Katie,Bob,Tom

---------------------------------------------------------------------------------------------------------------------

Case 4:

Enter friend name to find friend suggestions: Arun
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Arun : Lee,Bob,Tom,Swati

---------------------------------------------------------------------------------------------------------------------

Case 5:

Enter friend name to find friend suggestions: Rama
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Rama : Lee,Sam,Tom,Swati

---------------------------------------------------------------------------------------------------------------------

Case 6:

Enter friend name to find friend suggestions: Ella
Displaying the graph : 
{
  Rama: [ 'Ella', 'Bob', 'Katie' ],
  Ella: [ 'Rama', 'Bob' ],
  Lee: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
  Bob: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
  Tom: [ 'Bob', 'Sam' ],
  Sam: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
  Katie: [ 'Rama', 'Lee', 'Swati' ],
  Swati: [ 'Lee', 'Katie', 'Zahir' ],
  Zahir: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
  Arun: [ 'Sam', 'Zahir' ]
}

Friend suggestions for Ella : Katie,Lee,Sam,Tom

---------------------------------------------------------------------------------------------------------------------

*/