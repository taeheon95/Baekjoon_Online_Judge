import * as fs from 'fs'

const [a, b] = require("fs").readFileSync(0, 'utf8').toString().split(' ').map(v=>Number(v));
console.log(a+b);