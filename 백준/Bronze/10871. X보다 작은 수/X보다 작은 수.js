const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');

const [N, X] = input[0].split(' ').map(Number);
const nums = input[1].split(' ').map(Number);

let answer = [];
for (let i = 0; i < N; ++i)
    if (X > nums[i])
        answer.push(nums[i]);

console.log(answer.join(' '));