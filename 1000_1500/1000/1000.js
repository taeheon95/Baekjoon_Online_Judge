const fs = require("fs");

const [a, b] = fs.readFileSync(0, 'utf8').toString().split(' ').map(v=>Number(v));
console.log(a+b);