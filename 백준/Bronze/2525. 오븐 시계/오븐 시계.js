const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
let [H, M] = input[0].split(' ').map(Number);
const C = parseInt(input[1]);

M += C;

if (M >= 60) {
    H += Math.floor(M / 60);
    if (H >= 24) H -= 24;
    M = M % 60;
}

console.log(`${H} ${M}`);