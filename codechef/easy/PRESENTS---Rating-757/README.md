# PRESENTS - Rating 757

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Presents for Cheffina

Chef has fallen in love with Cheffina, and wants to buy $N$ gifts for her. On reaching the gift shop, Chef got to know the following two things:

- The cost of each gift is $1$ coin.
- On the purchase of every $4^{th}$ gift, Chef gets the $5^{th}$ gift free of cost.

What is the minimum number of coins that Chef will require in order to come out of the shop carrying $N$ gifts?

### Input Format
- The first line of input will contain an integer $T$ — the number of test cases. The description of $T$ test cases follows.
- The first and only line of each test case contains an integer $N$, the number of gifts in the shop.
### Output Format

For each test case, output on a new line the minimum number of coins that Chef will require to obtain all $N$ gifts.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 10^9$
### Sample 1:
Input
Output

```
2
5
4
```

```
4
4
```

### Explanation:

 **Test case $1$** : After purchasing $4$ gifts, Chef will get the $5^{th}$ gift free of cost. Hence Chef only requires $4$ coins in order to get $5$ gifts.

 **Test case $2$** : Chef will require $4$ coins in order to get $4$ gifts.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T16:08:20.575Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        // For every 5 gifts, Chef pays for only 4.
        // Number of full groups of 5 gifts:
        int groups = N / 5;

        // Remaining gifts after full groups:
        int remaining = N % 5;

        // Coins needed:
        // - For each full group of 5 gifts, Chef pays 4 coins.
        // - For remaining gifts, Chef pays 1 coin each (no free gift in partial group).
        int coins = groups * 4 + remaining;

        cout << coins << "\n";
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PRESENTS)