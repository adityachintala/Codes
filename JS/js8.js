/*

Demonstrate through your code the different kinds of algorithms that a web-streaming app (like Netflix) 
or an audio-streaming app (like Spotify) may use for their Recommendation Engine.

Focus on any algorithm that you choose to highlight

Use the JSON link below to fetch the data.

First search through the data to find the movies / genre that consists of the given input and
print the titles of the movies in a sorted fashion(alphabetically).

Input : We take a tag as input and check if the tag is present in movie title or genre
Output : Print the array of movie title which has the tag in sorted order

Case 1 :
Enter tag name: sp
[ 'Despicable Me 2', 'Moneyball' ]

Case 2 : 
Enter tag name: th
[
  'Flight',
  'Match Point',
  'Midnight Express',
  'North by Northwest',
  "One Flew Over the Cuckoo's Nest",
  "Pan's Labyrinth",
  'Psycho',
  'Rear Window',
  'Reservoir Dogs',
  'Shutter Island',
  'The Artist',
  'The Great Beauty',
  'The Hangover',
  'The Hobbit: The Desolation of Smaug',
  'The Shining',
  'The Truman Show'
]

Case 3 :
Enter tag name: dft
There is No Movie with the given tag..
*/

const https = require('https');
let obj;
const url = "https://adityachintala.github.io/jsonhost/data/data.json";
https.get(url, function (response) {
    let result = '';
    response.on("data", (data) => {
        result += data;
    });
    response.on('end', () => {
        obj = JSON.parse(result);
    });
});

let readline = require('readline').createInterface({ input: process.stdin, output: process.stdout });
let ch;
readline.question('Enter tag name: ', function (line) {
ch = line;
solution(obj, ch);
readline.close();
});



function solution(obj, t) {
    t = t.toLowerCase();
    // let result_title = [], result_genre = [];
    // for (let i of obj) {
    //     if (i.genre.some(x => x.toLowerCase().includes(t))) {
    //         result_genre.push(i.title);
    //     }
    //     else if (i.title.toLowerCase().includes(t)) {
    //         result_title.push(i.title);
    //     }
    // }
    // if (result_title.length == 0 && result_genre.length == 0) {
    //     console.log("There is No Movie with the given tag..");
    // }
    // else {
    //     let sorted = merge_sorted(merge_sort(result_title), (merge_sort(result_genre)));
    //     console.log([...new Set(sorted)]);
    // }

    let result = [];
    for (let i of obj) {
        if (i.genre.some(x => x.toLowerCase().includes(t))) {
            result.push(i.title);
        }
        else if (i.title.toLowerCase().includes(t)) {
            result.push(i.title);
        }
    }
    if (result.length == 0) {
        console.log("There is No Movie with the given tag..");
    }
    else {
        console.log(merge_sort(result));
    }
}

// merge sort

function merge_sort(arr1) {
    if (arr1.length === 1) {
        return arr1;
    }
    let mid = Math.floor(arr1.length / 2);
    let left = arr1.slice(0, mid);
    let right = arr1.slice(mid);
    return merge(merge_sort(left), merge_sort(right));
}

function merge(left, right) {
    let result = [];
    while (left.length && right.length) {
        if (left[0] < right[0]) {
            result.push(left.shift());
        } else {
            result.push(right.shift());
        }
    }
    return result.concat(left, right);
}

// merging two sorted arrays

function merge_sorted(arr1, arr2) {
    let result = [];
    while (arr1.length && arr2.length) {
        if (arr1[0] < arr2[0]) {
            result.push(arr1.shift());
        } else {
            result.push(arr2.shift());
        }
    }
    return result.concat(arr1, arr2);
}