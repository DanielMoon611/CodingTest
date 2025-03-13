const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');

for (let line of input) {
    line = line.trim();
    if (line) {
        let numbers = line.split(' ');
        if (numbers.length === 2) {
            let a = parseInt(numbers[0]);
            let b = parseInt(numbers[1]);
            if (!isNaN(a) && !isNaN(b))
                console.log(a + b);
        }
    }
}