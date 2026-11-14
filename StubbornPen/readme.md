## B. Stubborn Pen [https://codeforces.com/contest/2290/problem/B]

# Problem Statement
A pen can write in two colors: red and blue. Initially, the pen writes in red. Each time the pen writes a letter, its color switches automatically: after writing a red letter, it writes in blue, and after writing a blue letter, it writes in red.

Before writing each letter, including the first one, you may also switch the color of the pen manually: from red to blue or from blue to red.

You need to write a string s
 of length n
 consisting of the characters R and B. The letters are written one by one from left to right. The i
-th letter must be written in red if si=R
, and in blue if si=B
.

Find the minimum number of manual switches needed to write the string.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the string.

The second line of each test case contains the string s
 of length n
, consisting only of the characters R and B.

Output
For each test case, print a single integer — the minimum number of manual switches.