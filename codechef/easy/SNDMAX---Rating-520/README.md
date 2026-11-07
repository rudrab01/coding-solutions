# SNDMAX - Rating 520

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Second Max of Three Numbers
### Problem Statement

Write a program that accepts sets of three numbers, and prints the  *second-maximum number*  among the three.

### Input
- First line contains the number of triples, N.
- The next N lines which follow each have three space separated integers.
### Output

For each of the  **N**  triples, output one new line which contains the second-maximum integer among the three.

### Constraints
- 1 ≤ N ≤ 6
- 1 ≤ every integer ≤ 10000
- The three integers in a single triplet are all distinct. That is, no two of them are equal.
### Sample 1:
Input
Output

```
3
1 2 3
10 15 5
100 999 500
```

```
2
10
500
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T16:51:01.161Z  

```c_cpp
#include <stdio.h>

int main() {
	int N,A,B,C;
	scanf("%d",&N);
	while (N--){
	    scanf("%d %d %d", &A, &B, &C);
	    if(A>B && A<C || A<B && A>C)
	    printf("%d\n", A);
	    else if (B>C && B<A || B<C && B>A)
	    printf("%d\n", B);
	    else
	    printf("%d\n", C);
	}

}


```

---

[View on CodeChef](https://www.codechef.com/problems/SNDMAX)