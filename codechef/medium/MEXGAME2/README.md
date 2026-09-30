# MEXGAME2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MEX Game (Hard)

Alice and Bob are playing a game on an array $A$ of $N$ integers. Alice goes first.

On each of their turn, they choose some index $i$ such that $A_i > 0$, and replace it with $A_i - 1$.

Such a move is valid only if the MEX$^{\dagger}$ value of the entire array does not change. The player unable to make a valid move loses.

You are given an array $A$ of $N$ integers. Count the number of pairs of integers $(L, R)$ such that:

- $1 \le L \le R \le N$
- Alice wins the game on the subarray $[A_L, A_{L + 1}, \ldots, A_R]$

$^{\dagger}$ The MEX of an array is the minimal non-negative element not included in the array.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the winner of the game.

### Constraints
- $1 \le T \le 10^4$
- $1 \le N \le 2 \cdot 10^5$
- $0 \le A_i \le 100$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
3
0 3 0
4
0 1 2 3
4
0 0 1 1
1
100

```

```
3
4
2
1
```

### Explanation:

 **Test Case 1:**  The subarrays $[0, 3]$, $[3, 0]$ and $[0, 3, 0]$ are winning for Alice. $[0]$ and $[3]$ are losing.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T16:27:07.447Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;



void solve() {
    int N;
    cin>>N;
    
    vector<int> A(N);
    for (int &x : A) cin>>x;
    
    int answer = 0;
    
    
    
    for (int mex = 0; mex <= 101; mex++) {
        vector<int> pref(N+1, 0);
        
        for (int i=0; i<N; i++) {
            int x=A[i];
            int w=0;
            
            if (x<mex) {
                w=x;
            }
            else if (x>=mex+2) {
                w=x-mex-1;
            }
            
            pref[i+1] = pref[i]^(w & 1);
        }
        
        vector<int> cnt0(N+2, 0);
        vector<int> cnt1(N+2, 0);
        
        for (int i=0; i<=N; i++) {
            cnt0[i+1] = cnt0[i] + (pref[i] == 0);
            cnt1[i+1] = cnt1[i] + (pref[i] == 1);
        }
        
        vector<int> last(mex, -1);
        
        int lastMex = -1;
        
        for (int r=0; r<N; r++) {
            int x=A[r];
            if(x == mex) {
                lastMex = r;
            }
            else if (x<mex) {
                last[x]=r;
            }
            
            int minLast;
            
            if(mex == 0) {
               minLast = r+1; 
            }
            else {
                minLast = N;
                
                for(int x=0; x<mex; x++) {
                    minLast = min(minLast, last[x]);
            }
            
            if (minLast == -1)
                continue;
        }
        
        int L = max(0, lastMex+1);
        int R = minLast;
        
        if (L>R)
            continue;
        
        int C = (mex*(mex-1)/2)&1;
        
        int requiredParity = C^1;
        
        int needed = pref[r+1]^requiredParity;
        
        if(needed == 0) {
            answer += cnt0[R + 1] - cnt0[L];
        }
        else {
            answer += cnt1[R+1] - cnt1[L];
        }
    }
    }
    cout<<answer<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    solve();
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/MEXGAME2)