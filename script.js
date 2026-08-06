const { performance } = require("perf_hooks");

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let k = 1000000;

function rotate(arr, k) {
    let n = arr.length;

    while (k--) {
        let lastEl = arr[n - 1];

        for (let i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = lastEl;
    }
}

const start = performance.now();

rotate(arr, k);

const end = performance.now();

console.log(arr);
console.log(`Execution Time: ${(end - start).toFixed(6)} ms`);