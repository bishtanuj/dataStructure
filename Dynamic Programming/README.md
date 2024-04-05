# _Dynamic Programming_

_**Dynamic Programming (DP)** is a powerful technique used in mathematics and computer science to tackle complex problems by breaking them down into smaller, more manageable subproblems. By solving such subproblems just once and storing the results, DP avoids redundant computations, leading to efficient solutions for a wide range of problems._

Here are some key aspects of dynamic programming:
1. **Identifying Subproblems**:
    - DP starts by dividing the main problem into smaller, independent subproblems.
    - These subproblems are often related to each other, and solving them contibutes to solving the overall problem.
2. **Storing Solutions**:
    - As we solve each subproblem, we store the solution in a table or an array.
    - This storage allows us to avoid recalculating the same subproblem in the future.
3. **Building Up Solutions**:
    - We use the stored solutions to construct the solution to the main problem.
    - By combining the results of subproblems, we arrive at the final answer.
4. **Avoiding Redundancy**:
    - DP ensures that each subproblem is solved only once.
    - This reduction in computation time significantly improves efficiency.
  
### Examples of Dynamic Programming:
1. **Fibonacci Sequence**:
    - **Brute Force Approach**: To find the nth Fibonacci number, we would add the (n-1)th and (n-2)th Fibonacci numbers. However, this approach becomes inefficient for large values of n.
    - **Dynamic Programming Appraoch**:
        - We create a table to store the values of F(n) as they are calculated.
        - For F(n), we look up F(n-1) and F(n-2) in the table and add them.
        - DP efficiently computes the Fibonacci sequence without redundant calculations.
2. **Longest Common Subsequence**:
   - Finding the longest subsequence common to two strings.
3. **Shortest Path in Graph**:
    - Determining the shortest path between two nodes in a graph.
4. **Knapsack Problem**:
   - Maximizing the value of items that can fit in a knapsack with a given capacity.
  
### When to Use Dynamic Programming:
- DP is suitable for problems with the following characteristics:
