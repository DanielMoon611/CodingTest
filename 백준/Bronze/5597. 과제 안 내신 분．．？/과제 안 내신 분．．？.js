const students = new Array(30).fill(0);

for (let i = 0; i < 28; ++i) {
    const input = parseInt(require('fs').readFileSync('/dev/stdin').toString().trim().split('\n')[i]);
    students[input - 1] = input;
}

for (let j = 0; j < students.length; ++j)
    if (students[j] === 0)
        console.log(j + 1);