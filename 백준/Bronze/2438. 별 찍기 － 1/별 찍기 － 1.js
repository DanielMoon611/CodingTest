const N = parseInt(require('fs').readFileSync('/dev/stdin').toString().trim());

for (let i = 0; i < N; ++i) {
    let stars = '';
    for (let j = 0; j <= i; ++j)
        stars += '*';
    console.log(stars);
}