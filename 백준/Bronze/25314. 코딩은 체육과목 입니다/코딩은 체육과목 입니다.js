const N = parseInt(require('fs').readFileSync('/dev/stdin').toString().trim());
const result = Math.floor(N / 4);

for (let i = 0; i < result; ++i)
    console.log("long");

console.log("int");