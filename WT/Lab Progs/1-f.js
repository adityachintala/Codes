// f) Write a JavaScript function to check whether an object contains given property.   –“six.js”

let object = {
    name: 'Jack',
    age: 25,
    college: 'KMIT',
    year: 3,
    sem: 1
};

// 1. hasOwnProperty() method
console.log(object.hasOwnProperty('name'));

// 2. in operator
console.log('name' in object);

// 3. Object.keys() method
console.log(Object.keys(object).includes('name'));

// 4. comparison with undefined
console.log(object.name !== undefined);