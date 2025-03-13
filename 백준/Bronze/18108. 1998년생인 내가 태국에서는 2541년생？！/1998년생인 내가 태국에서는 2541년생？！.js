const fs = require('fs');

const input = fs.readFileSync('/dev/stdin').toString().trim();
const y = parseInt(input);
console.log(y - 543);