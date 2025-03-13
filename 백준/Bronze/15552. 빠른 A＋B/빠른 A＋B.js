const fs = require('fs');

const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
const T = parseInt(input[0]);
let result = '';

for (let i = 1; i <= T; ++i) {
    const [A, B] = input[i].split(' ').map(Number);
    result += (A + B) + '\n';
}

fs.writeFileSync('/dev/stdout', result);