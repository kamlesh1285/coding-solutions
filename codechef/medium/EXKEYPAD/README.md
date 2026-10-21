# EXKEYPAD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Sticky Keypad

You are given $2$ integers $N$ and $D$.

Find the smallest integer $x$ which is

- greater than or equal to $N$
- typeable without the digit $D$.

Formally, a non-negative integer $x$ is  **typeable**  if its usual decimal representation (no leading zeros; zero is written as the single digit $0$) does not contain the digit $D$.

### Input Format
- The first line contains a single integer $T$, the number of test cases.
- Each of the next $T$ lines contains two space-separated integers $N$ and $D$.
### Output Format

For each test case, output on a new line the smallest integer $x \ge N$ typeable without digit $D$.

### Constraints
- $1 \le T \le 10^{3}$
- $1 \le N \le 10^{9}$
- $0 \le D \le 9$
### Sample 1:
Input
Output

```
5
99 9
1000 0
12345 3
7 7
2026 5
```

```
100
1111
12400
8
2026

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:49:34.432Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S;
    int D;
    
    cin>>S>>D;
    
    int first_D = -1;
    for (int i=0; i<S.length(); i++) {
        if (S[i] - '0' == D) {
            first_D = i;
            break;
        }
    }
    
    if (first_D == -1) {
        cout<<S<<"\n";
        return;
    }
    
    int carry = 1;
    int last_increased_idx = first_D;
    
    for (int i = first_D; i>=0; i--) {
        int val = (S[i] - '0') + carry;
        carry = 0;
        
        if (val == D) {
            val++;
        }
        
        if (val > 9) {
            val = (D == 0) ? 1 : 0;
            carry = 1;
        }
        
        S[i] == val + '0';
        if (carry == 0) {
            last_increased_idx = i;
            break;
        }
    }
    
    char min_digit = (D == 0) ? '1' : '0';
    
    if (carry > 0) {
        int val = 1;
        if (val == D) val++;
        S = to_string(val) + S;
        last_increased_idx = 0;
    }
    
    for (int i = last_increased_idx + 1; i<S.length(); i++) {
        S[i] = min_digit;
    }
    
    cout<<S<<"\n";
}

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}
	
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXKEYPAD)