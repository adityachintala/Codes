// The global variable
const bookList = ["The Hound of the Baskervilles", "On The Electrodynamics of Moving Bodies", "Philosophiæ Naturalis Principia Mathematica", "Disquisitiones Arithmeticae"];

// Change code below this line
function add(bookList, bookName) {
    let books = bookList.map(a => a);
    books.push(bookName);
    return books;

    // Change code above this line
}

// Change code below this line
function remove(bookList, bookName) {
    const book_index = bookList.indexOf(bookName);
    if (book_index >= 0) {
        let books = bookList.map(a => a);
        books.splice(book_index, 1);
        return books;

        // Change code above this line
    }
}

console.log(add("aak"));
console.log(bookList);
console.log(remove("aak"));
console.log(bookList);