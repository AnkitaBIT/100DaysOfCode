'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

//Solution
function greeting(parameterVariable) {
    // This line prints 'Hello, World!'
    console.log('Hello, World!');

    // This line prints "Welcome to 10 Days of JavaScript!"
    console.log(parameterVariable);
}

