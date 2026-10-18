# IC26MP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### C - Furious Farming

After a long think about what career you would like to pursue, you have decided to take up farming. Unfortunately, you overlooked a crucial detail - a farmer's livelihood depends heavily on rain, and the rain this year has been quite poor! So, you decide to take things into your own hands.

You have $n$ fields, numbered $1$ to $n$ from left to right.
Using the power of cloud seeding, you have managed to create $m$ rainclouds. Initially, the $i$-th raincloud is directly above field number $x_i$.
It is guaranteed that all $x_i$ are pairwise distinct.

You have also managed to, somehow, figure out a way to move the clouds by creating a strong enough wind system. However, the system is primitive, and so on each day, you can only either move  *all*  clouds left by one step, or move  *all*  clouds right by one step.
Note that all clouds move simultaneously in the same direction on each day.

For your farming venture to be a success, every field must receive some rain - that is, for each $1 \le i \le n$, there must exist some day such that there is a raincloud above field $i$.

Given that you choose the directions for cloud movements optimally, find the minimum number of days needed to ensure that every field is visited by a raincloud at least once.
Note that this includes the initial configuration as well, i.e. every field $x_i$ is considered visited even before any days have passed.

Also note that it is allowed for clouds to leave the interval $[1, n]$ if necessary.

### Input Format

The first line contains a single integer $t$ — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers $n$ and $m$ — the number of fields and the number of clouds.

The second line of each test case contains $m$ distinct integers $x_1, x_2, \ldots, x_m$ — the initial positions of the clouds.

### Output Format

For each test case, print a single integer — the minimum number of days needed to ensure that every field is visited by a raincloud at least once.

### Constraints
- $1 \le t \le 2 \cdot 10^4$
- $1 \le m \le n \le 2 \cdot 10^5$
- $1 \le x_i \le n$
- The $x_i$ are all distinct within each test case.
- It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
5
5 2
4 2
5 5
3 1 5 2 4
10 1
4
10 2
10 1
12 3
10 3 4

```

```
3
0
12
8
7

```

### Explanation:

In the first test case, the clouds are at positions $[2, 4]$ initially. Consider the following sequence of movements:

- Day 1: Move the clouds one step to the right. Now they're at $[3, 5]$.
- Day 2: Move the clouds one step to the left. Now they're at $[2, 4]$.
- Day 3: Move the clouds one step to the left again. Now they're at $[1, 3]$.

There are $5$ fields, and by the end of the third day all of them have been visited by a raincloud at least once. You can verify that this is the best you can do, and hence the answer is $3$.

In the second test case, every field already has a raincloud over it, so nothing needs to be done and the answer is $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T11:50:41.317Z  

```c_cpp
#include <stdio.h>

int main() {
    
}


```

---

[View on CodeChef](https://www.codechef.com/problems/IC26MP)