const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const [N, M] = input[0].split(' ').map(Number);
let arr = Array.from({ length: N }, (_, index) => index + 1);

for (let i = 1; i <= M; i++) {
    const [x, y] = input[i].split(' ').map(Number);
    let temp = arr[x - 1];
    arr[x - 1] = arr[y - 1];
    arr[y - 1] = temp;
}

console.log(arr.join(' '));