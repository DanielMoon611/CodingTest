const input = require('fs').readFileSync('/dev/stdin').toString().trim().split(' ');
let h = parseInt(input[0]);
let m = parseInt(input[1]);

if (m >= 45) {
    m -= 45;
} else {
    if (h === 0) {
        h = 24 - 1;
    } else {
        h -= 1;
    }
    m = m - 45 + 60;
}

console.log(`${h} ${m}`);