# PPDEBUGP01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com k_25_cse_0139 kamlesh1285ky@gmail.com

 **Incorrect Number Conversion** 

The following JavaScript program is intended to convert an array of numeric strings into integers and print their sum.

However, the program produces an incorrect result.

 **Expected Output** 

```
100

```

 **Actual Output** 

```
NaN

```

 **Task** 

Find the bug and modify the code so that:

- Every string in values is correctly converted to an integer.
- The sum of all converted values is printed.
- The values array must not be modified.

## Solution

**Language:** JavaScript  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T05:36:43.276Z  

```js
// Fix the following code

const values = ["10", "20", "30", "40"];

const numbers = values.map(value => parseInt(value, 10));

const sum = numbers.reduce((total, value) => total + value, 0);

console.log(sum);
```

---

[View on CodeChef](https://www.codechef.com/problems/PPDEBUGP01)