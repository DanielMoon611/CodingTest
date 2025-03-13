const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');

for (let i = 0; i < input.length; ++i) {
    let str = input[i].trim().split(' ');
    let a = parseInt(str[0]);
    let b = parseInt(str[1]);
    if (a === 0 && b === 0)
        break;
    console.log(a + b);
}