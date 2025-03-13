const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
let arr = [];
let max = 0;
let index = 0;

for (let i = 0; i < 9; i++) {
    arr[i] = parseInt(input[i]);
    if (max < arr[i]) {
        max = arr[i];
        index = i + 1;
    }
}

console.log(max);
console.log(index);