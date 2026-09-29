# FLOW018 - Rating 757

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T16:08:23.202Z  

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

[View on CodeChef](https://www.codechef.com/problems/FLOW018)