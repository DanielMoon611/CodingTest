const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
const X = parseInt(input[0]);
const N = parseInt(input[1]);

let answer = 0;

for (let i = 2; i < 2 + N; ++i) {
    const [a, b] = input[i].split(' ').map(Number);
    answer += a * b;
}

console.log(answer === X ? "Yes" : "No");