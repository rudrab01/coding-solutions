# IC26CS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### B - Cyclic Shift

You are given an array $a = [a_1, a_2, \ldots, a_n]$ of $n$ integers. For any array $b = [b_1, b_2, \ldots, b_n]$ of length $n$, define $f(b)=\max_{1 \le i < n}|b_i-b_{i+1}|.$

A  **cyclic shift**  of $a$ is an array of the form $[a_k, a_{k+1}, \ldots, a_n, a_1, a_2, \ldots, a_{k-1}]$ for some $1 \le k \le n$. In particular, choosing $k=1$ leaves the array unchanged.

Find the minimum possible value of $f(b)$ over all cyclic shifts $b$ of $a$.

### Input Format

The first line contains a single integer $t$ — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer $n$ — the length of the array.

The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n$ — the elements of the array.

### Output Format

For each test case, print a single integer — the minimum possible value of $f(b)$ over all cyclic shifts $b$ of $a$.

### Constraints
- $1 \le t \le 10^5$
- $2 \le n \le 2 \cdot 10^5$
- $1 \le a_i \le 10^6$
- It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
2
1 10
4
1 4 2 3
3
7 7 7
6
1 100 1 100 1 100

```

```
9
2
0
99

```

### Explanation:

 **Test Case 1** :

The given array is $[1, 10]$. Its two cyclic shifts are the arrays:

- $b = [1, 10]$ $f([1, 10]) = \max_{1 \le i < 2}|b_i-b_{i+1}| = \max \lbrace |b_1 - b_2| \rbrace = \max \lbrace |1 - 10| \rbrace = 9$
- $b = [10, 1]$ $f([10, 1]) = \max_{1 \le i < 2}|b_i-b_{i+1}| = \max \lbrace |b_1 - b_2| \rbrace = \max \lbrace |10 - 1| \rbrace = 9$

Both cyclic shifts have their $f$-value $9$. So the minimum $f$-value over all the cyclic shifts is $9$. So the answer is $9$.

 **Test Case 2** :

The given array is $[1, 4, 2, 3]$. Its four cyclic shifts are the arrays:

- $b = [1, 4, 2, 3]$ $f([1, 4, 2, 3]) = \max_{1 \le i < 4}|b_i-b_{i+1}| = \max \lbrace |1 - 4|, |4 - 2|, |2 - 3| \rbrace = \max \lbrace 3, 2, 1 \rbrace = 3$
- $b = [4, 2, 3, 1]$ $f([4, 2, 3, 1]) = \max_{1 \le i < 4}|b_i-b_{i+1}| = \max \lbrace |4 - 2|, |2 - 3|, |3 - 1| \rbrace = \max \lbrace 2, 1, 2 \rbrace = 2$
- $b = [2, 3, 1, 4]$ $f([2, 3, 1, 4]) = \max_{1 \le i < 4}|b_i-b_{i+1}| = \max \lbrace |2 - 3|, |3 - 1|, |1 - 4| \rbrace = \max \lbrace 1, 2, 3 \rbrace = 3$
- $b = [3, 1, 4, 2]$ $f([3, 1, 4, 2]) = \max_{1 \le i < 4}|b_i-b_{i+1}| = \max \lbrace |3 - 1|, |1 - 4|, |4 - 2| \rbrace = \max \lbrace 2, 3, 2 \rbrace = 3$

The $f$-values of the cyclic shifts are $3, 2, 3, 3$. So the minimum $f$-value over all the cyclic shifts is $2$, attained by $[4, 2, 3, 1]$. So the answer is $2$.

 **Test Case 3** :

The given array is $[7, 7, 7]$. Its three cyclic shifts are the arrays:

- $b = [7, 7, 7]$ $f([7, 7, 7]) = \max_{1 \le i < 3}|b_i-b_{i+1}| = \max \lbrace |7 - 7|, |7 - 7| \rbrace = \max \lbrace 0, 0 \rbrace = 0$
- $b = [7, 7, 7]$ $f([7, 7, 7]) = \max_{1 \le i < 3}|b_i-b_{i+1}| = \max \lbrace |7 - 7|, |7 - 7| \rbrace = \max \lbrace 0, 0 \rbrace = 0$
- $b = [7, 7, 7]$ $f([7, 7, 7]) = \max_{1 \le i < 3}|b_i-b_{i+1}| = \max \lbrace |7 - 7|, |7 - 7| \rbrace = \max \lbrace 0, 0 \rbrace = 0$

Since all elements are equal, every cyclic shift is the same array, and every adjacent difference is $0$. So the minimum $f$-value over all the cyclic shifts is $0$. So the answer is $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T11:42:07.564Z  

```c_cpp
#include <stdio.h>

int main() {
	// your code goes here

}


```

---

[View on CodeChef](https://www.codechef.com/problems/IC26CS)