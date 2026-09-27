// Fix the following code

const values = ["10", "20", "30", "40"];

const numbers = values.map(value => parseInt(value, 10));

const sum = numbers.reduce((total, value) => total + value, 0);

console.log(sum);