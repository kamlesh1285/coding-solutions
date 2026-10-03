# CHEAT - Rating 763

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Dracula Eats

 *Eat, drink, and be scary* 

There are $N$ spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next $N$ days  **(including today)**  before Halloween.

Note that Dracula follows the standard $7$-day calendar, with Tuesday immediately following Monday.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The only line of each test case contains a single integer $N$, denoting the number of spooky days.
### Output Format

For each test case, output on a new line the number of times Dracula would have had his favorite meal after $N$ days.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 1000$
### Sample 1:
Input
Output

```
4
1
10
15
16

```

```
0
2
2
3

```

### Explanation:

 **Test case $1$:**  The first day is Monday, and Dracula has only one day. So, no Tuesdays are encountered, and the answer is $0$.

 **Test case $2$:**  The first day is Monday, so the second and ninth days are Tuesdays.
Dracula can eat his favorite meal twice.

 **Test case $3$:**  Once again, the second and ninth days are Tuesday, so in $15$ days, Dracula still gets to eat his favorite meal only twice.

 **Test case $4$:**  After the ninth day, the $16$-th day is also a Tuesday. So, this time Dracula gets to eat his favorite meal three times - on days $2, 9, 16$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T18:08:30.227Z  

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

        // Today is Monday (day 1). Tuesday is day 2.
        // In every block of 7 days, Tuesday occurs once.
        // Number of Tuesdays in N days starting from Monday:
        int tuesdays = (N + 5) / 7;  // ceil((N - 1) / 7) + 1 for day 2

        // Alternative direct formula:
        // tuesdays = (N + 5) / 7;
        // This works because:
        // - For N=1 (only Monday): (1+5)/7 = 0 Tuesdays
        // - For N=2 (Mon,Tue): (2+5)/7 = 1 Tuesday
        // - For N=8 (Mon..next Mon): (8+5)/7 = 1 Tuesday... wait, need to check
        // Let me verify: N=8 means days 1..8, Tuesday at day 2 and day 9? No, day 9 is next Tuesday but N=8 only covers days 1..8, so only 1 Tuesday.
        // (8+5)/7 = 13/7 = 1. Correct.
        // N=9: days 1..9, Tuesdays at day 2 and day 9. (9+5)/7 = 14/7 = 2. Correct.
        // N=1: (1+5)/7 = 6/7 = 0. Correct.
        // N=2: (2+5)/7 = 1. Correct.
        // N=7: (7+5)/7 = 12/7 = 1. Correct (only day 2).
        // N=8: (8+5)/7 = 1. Correct.
        // N=9: (9+5)/7 = 2. Correct.

        cout << tuesdays << "\n";
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEAT)