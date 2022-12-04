var a = [1, 2, 3]
var b = ['a', 'b', 'c']

// arrow function that returns set of tuples
var c = a.map((x, i) => { b[i]})
console.log(c);
console.log(a in b);

const fruits = new Map([
    ["apples", 500],
    ["bananas", 300],
    ["oranges", 200]
]);

console.log(fruits);