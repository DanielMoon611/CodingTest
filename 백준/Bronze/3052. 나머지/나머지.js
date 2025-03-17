const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').map(Number);
const result = new Set(input.map(x => x % 42)).size;
console.log(result);