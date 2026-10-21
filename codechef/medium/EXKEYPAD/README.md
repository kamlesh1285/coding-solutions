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
**Submitted:** 2026-10-21T16:00:11.671Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S;
    int D;
    
    cin>>S>>D;
    
    int first_conflict = -1;
    for (int i=0; i<S.length(); i++) {
        if (S[i] - '0' == D) {
            first_conflict = i;
            break;
        }
    }
    
    if (first_conflict == -1) {
        cout<<S<<"\n";
        return;
    }
    
    bool incremented = false;
    for (int i = first_conflict; i>=0; i--) {
        int cur_digit = S[i] - '0';
        int next_digit = cur_digit + 1;
        
        if (next_digit == D) {
            next_digit++;
        }
        
        if (next_digit <= 9) {
            S[i] = next_digit + '0';
            
            char fill_digit = (D == 0) ? '1' : '0';
            for (int j=i+1; j<S.length(); j++) {
                S[j] = fill_digit;
            }
            incremented = true;
            break;
        }
    }
    
    if (!incremented) {
        int lead = (D==1) ? 2 : 1;
        string fill_str(S.length(), (D == 0) ? '1' : '0');
        S = to_string(lead) + fill_str;
    }
    
    cout<< S << "\n";
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