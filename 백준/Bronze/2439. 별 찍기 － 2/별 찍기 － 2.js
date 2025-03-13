const N = parseInt(require('fs').readFileSync('/dev/stdin').toString().trim());

for (let i = 0; i < N; ++i) {
    let line = '';
    for (let j = 0; j < N; ++j) {
        if (i + j >= N - 1)
            line += '*';
        else
            line += ' ';
    }
    console.log(line);
}