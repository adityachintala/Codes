/*

Check if a graph is regular.

*/

class Graph {
    constructor() {
        this.edges = {};
    }

    addNode(node) {
        this.edges[node] = [];
    }

    addEdge(node1, node2) {
        this.edges[node2].push(node1);
        this.edges[node1].push(node2);
    }

    display() {
        console.log("Displaying graph :");
        console.log(this.edges);
        console.log();
    }

    isRegular() {
        let count = new Set();
        for (let i in this.edges) {
            count.add(this.edges[i].length);
        }
        return count.size === 1;
    }

}

let graph = new Graph();
graph.addNode("A");
graph.addNode("B");
graph.addNode("C");
graph.addNode("D");
graph.addNode("E");

graph.addEdge("A", "B");
graph.addEdge("A", "C");
graph.addEdge("A", "D");
graph.addEdge("B", "D");
graph.addEdge("B", "C");
graph.addEdge("C", "D");
graph.addEdge("D", "E");
graph.addEdge("E", "A");
graph.addEdge("E", "B");
graph.addEdge("E", "C");

if (graph.isRegular()) {
    console.log("Graph is regular");
}
else {
    console.log("Graph is not regular");
}
