const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');

let N = parseInt(input[0]);
let str = input[1].split(' ');
let v = parseInt(input[2]);

let count = 0;
for (let i = 0; i < N; ++i) {
    if (v === parseInt(str[i]))
        count++;
}

console.log(count);