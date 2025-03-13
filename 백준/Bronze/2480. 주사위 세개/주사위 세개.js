const input = require('fs').readFileSync('/dev/stdin').toString().trim().split(' ');
const [H, M, C] = input.map(Number);
let result = 0;

if (H === M && M === C) {
    result = 10000 + H * 1000;
} else if (H === M || H === C) {
    result = 1000 + H * 100;
} else if (M === C) {
    result = 1000 + M * 100;
} else {
    result = Math.max(H, M, C) * 100;
}

console.log(result);