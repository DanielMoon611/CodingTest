const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const a = parseInt(input[0]);
const b = parseInt(input[1]);

console.log((b % 10) * a);
console.log(Math.floor((b % 100) / 10) * a);
console.log(Math.floor(b / 100) * a);
console.log(a * b);