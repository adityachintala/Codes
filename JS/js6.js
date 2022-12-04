/*

Mother vertex: 
A mother vertex in a Graph G is a vertex from which all other vertices can be reached by DFS/BFS.
There can be zero, one, or more than one mother vertices in a graph. 
We need to find all the mother vertices in the given graph.

Implement this with the help of DFS.

Output:
The mother vertex is 0,1,2

*/

function addEdge(u, v) {
    adj[u].push(v);
}

function DFS(v = adj[0], discovered = []) {
    // Using stack and set to implement DFS
    let stack = [v];
    discovered[v] = true;
    while (stack.length > 0) {
        let current = stack.pop();
        for (let i = 0; i < adj[current].length; i++) {
            let neighbor = adj[current][i];
            if (!discovered[neighbor]) {
                stack.push(neighbor);
                discovered[neighbor] = true;
            }
        }
    }
    return discovered.every(element => element);
}

function DFSUtil(v = adj[0], discovered = []) {
    discovered[v] = true;
    for (let i = 0; i < adj[v].length; i++) {
        let w = adj[v][i];
        if (!discovered[w]) {
            DFSUtil(w, discovered);
        }
    }
}

function motherVertex(V) {
    let visited = new Array(V);
    let motherVertices = [];

    for (let i = 0; i < V; i++) {
        for (let j = 0; j < V; j++) {
            visited[j] = false;
        }
        DFS(i, visited);
        if (visited.every(element => element)) {
            motherVertices.push(i);
        }
    }
    return motherVertices;
}



let V = 5;
let E = 5;
let adj = [];
for (let i = 0; i < V; i++) {
    adj.push([]);
}

addEdge(1, 0);
addEdge(0, 3);
addEdge(3, 4);
addEdge(0, 2);
addEdge(2, 1);

console.log("The mother vertex is " + motherVertex(V));