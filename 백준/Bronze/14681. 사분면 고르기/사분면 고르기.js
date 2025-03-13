const input = require('fs').readFileSync(0).toString().trim().split("\n");
const X = parseInt(input[0]);
const Y = parseInt(input[1]);

if (X > 0) {
    if (Y > 0) console.log("1");
    else console.log("4");
} else {
    if (Y > 0) console.log("2");
    else console.log("3");
}