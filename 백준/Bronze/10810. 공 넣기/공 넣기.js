const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const [N, M] = input[0].split(' ').map(Number);
let arr = new Array(N).fill(0);

for (let index = 1; index <= M; index++) {
    const [i, j, k] = input[index].split(' ').map(Number);
    for (let x = i - 1; x < j; x++)
        arr[x] = k;
}

console.log(arr.join(' '));