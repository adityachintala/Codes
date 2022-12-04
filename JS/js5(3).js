/*

Program to send a message to all immediate friends of a person.

Case 1:

Enter the name and then message in the next line :
Lee
Hello

Message sent from Lee to Katie, Swati, Zahir, Sam, Bob

Graph after sending message from Lee : 

{
  Rama: { nodes: [ 'Ella', 'Bob', 'Katie' ], messages: {} },
  Ella: { nodes: [ 'Rama', 'Bob' ], messages: {} },
  Lee: { nodes: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ], messages: {} },
  Bob: {
    nodes: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ],
    messages: { Lee: 'Hello' }
  },
  Tom: { nodes: [ 'Bob', 'Sam' ], messages: {} },
  Sam: {
    nodes: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
    messages: { Lee: 'Hello' }
  },
  Katie: { nodes: [ 'Rama', 'Lee', 'Swati' ], messages: { Lee: 'Hello' } },
  Swati: { nodes: [ 'Lee', 'Katie', 'Zahir' ], messages: { Lee: 'Hello' } },
  Zahir: {
    nodes: [ 'Lee', 'Sam', 'Arun', 'Swati' ],
    messages: { Lee: 'Hello' }
  },
  Arun: { nodes: [ 'Sam', 'Zahir' ], messages: {} }
}

--------------------------------------------------------------------------------

Case 2:

Enter the name and then message in the next line :
Jane
Greetings!

There is no one named Jane in the network

--------------------------------------------------------------------------------

Case 3:

Enter the name and then message in the next line :
Mallesh
Meeting at 7.

There is no one named Mallesh in the network

--------------------------------------------------------------------------------

Case 4:

Enter the name and then message in the next line :
Zahir
Party at Mondrian’s SkyBar

Message sent from Zahir to Lee, Sam, Arun, Swati

Graph after sending message from Zahir : 

{
  Rama: { nodes: [ 'Ella', 'Bob', 'Katie' ], messages: {} },
  Ella: { nodes: [ 'Rama', 'Bob' ], messages: {} },
  Lee: {
    nodes: [ 'Katie', 'Swati', 'Zahir', 'Sam', 'Bob' ],
    messages: { Zahir: 'Party at Mondrian’s SkyBar' }
  },
  Bob: { nodes: [ 'Rama', 'Ella', 'Lee', 'Sam', 'Tom' ], messages: {} },
  Tom: { nodes: [ 'Bob', 'Sam' ], messages: {} },
  Sam: {
    nodes: [ 'Lee', 'Bob', 'Tom', 'Arun', 'Zahir' ],
    messages: { Zahir: 'Party at Mondrian’s SkyBar' }
  },
  Katie: { nodes: [ 'Rama', 'Lee', 'Swati' ], messages: {} },
  Swati: {
    nodes: [ 'Lee', 'Katie', 'Zahir' ],
    messages: { Zahir: 'Party at Mondrian’s SkyBar' }
  },
  Zahir: { nodes: [ 'Lee', 'Sam', 'Arun', 'Swati' ], messages: {} },
  Arun: {
    nodes: [ 'Sam', 'Zahir' ],
    messages: { Zahir: 'Party at Mondrian’s SkyBar' }
  }
}


*/

class Graph {
    constructor() {
        this.edges = {};
    }

    addNode(node) {
        this.edges[node] = {
            nodes: [],
            messages: {}
        };
    }

    addEdge(node1, node2) {
        if (!this.edges[node1].nodes.includes(node2)) {
            this.edges[node1].nodes.push(node2);
        }
        if (!this.edges[node2].nodes.includes(node1)) {
            this.edges[node2].nodes.push(node1);
        }
    }

    display() {
        console.log(this.edges);
        console.log();
    }

    sendText(node1, message) {
        if (!this.edges.hasOwnProperty(node1)) {
            console.log(`\nThere is no one named ${node1} in the network\n`);
            return;
        }

        for (let i of this.edges[node1].nodes) {
            this.edges[i].messages[node1] = message;
        }

        console.log(`\nMessage sent from ${node1} to ${this.edges[node1].nodes.join(', ')}`);

        console.log(`\nGraph after sending message from ${node1} : \n`);
        this.display();
    }

}

function solution(name, message) {
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

    gg.sendText(name, message);
}

console.log(`Enter the name and then message in the next line :`);
var readline = require('readline').createInterface({
    input: process.stdin, output: process.stdout
});

let name, il = 1;
readline.on('line', function (line) {
    if (il == 1) {
        name = line;
        il++;
    }
    else {
        let message = line;
        solution(name, message);
        readline.close();
    }
});

