const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const N = parseInt(input[0]);
const nums = input[1].split(' ').map(Number);

let min = nums[0], max = nums[0];

for (let i = 1; i < N; ++i) {
    if (nums[i] < min) min = nums[i];
    if (nums[i] > max) max = nums[i];
}

console.log(min, max);