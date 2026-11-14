## [How Much Does Daytona Cost?]
# [https://codeforces.com/problemset/problem/1878/A]

## Key Learnings

1. **Understanding the Problem Statement**
   - Understand keywords like *most common*, *subsegment*, and *exists*.
   - Identify exactly what the question is asking.

2. **Subsegment Concept**
   - A subsegment is a contiguous (continuous) part of an array.
   - A subsegment of length 1 is also valid.

3. **Important Observation**
   - When a problem asks whether there *exists* a valid subsegment, try checking the smallest possible subsegment first.
   - Sometimes a simple observation eliminates the need for complex algorithms.

4. **Array Traversal**
   - Iterate through an array using a normal `for` loop.
   - Use range-based loops: `for (int &x : a)`.

5. **Boolean Variables**
   - Use `bool found = false` to track whether an element exists.
   - Change it to `true` when the required condition is satisfied.

6. **Break Statement**
   - `break` terminates only the current loop or switch.
   - It does not terminate the entire program.

7. **Conditional Output**
   - Use the ternary operator to simplify conditional output:
   ```cpp
   cout << (found ? "YES" : "NO") << '\n';

## Important baat:

**Copy of each element**
for (int x : arr)    

**Reference to original element**
for (int &x : arr) 

**Read-only reference**
for (const int &x : arr)

