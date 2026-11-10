## [Don't Try to Count] [https://codeforces.com/problemset/problem/1881/A]

# problem Statement..

**Approach**
We can use the following steps:
1. Check whether S is already a substring of X. If yes, answer is 0.
2. Keep doubling X until its length becomes at least S.size().
3. After each doubling, check whether S is a substring.
4. If it is still not found, perform one more doubling and check again.
5. If still not found, answer is -1.
Why is one extra doubling sufficient? Any new occurrence that wasn't present in the previous X must cross the boundary between the two copies when we concatenate X + X. If it doesn't appear there, further doublings cannot create a new kind of boundary.
