# _Greedy Programming_

_A **greedy algorithm** is a type of optimization algorithm that makes locally optimal choices at each step with the goal of finding a **globally optimal solution**. It operates  on the principle of "taking the best option now" without considering the long-term consequences._

Here are the key points about the greedy algorithms:
1. **Definition**: A greedy algorithm follows the problem - solving heuristic of making the **locally optimal choice** at each stage. It aims to find a solution in the **shortest time possible** by selecting the best option available at the current moment, without regard for the overall optimization of the final solution.
2. **Steps for Creating a Greedy Algorithm**:
    - **Define the problem**: Clearly state the problem to be solved and the objective to be optimized.
    - **Identify the greedy choice**: Determine the locally optimal choice at each step based on the current state.
    - **Make the greedy choice**: Select the greedy choice and update the current state.
    - **Repeat**: Continue making greedy choices until a solution is reached.
3. **Examples of Greedy Algorithms**:
    - **Fractional Knapsack**: Optimizes the value of items that can be fractionally included in a knapsack with limited capacity.
    - **Dijkstra's algorithm**: Finds the shortest path form a source vertex to all other vertices in a weighted graph.
    - **Kruskal's algorithm**: Finds the minimum spanning tree of a weighted graph.
    - **Huffman coding**: Compresses data by assigning shorter codes to more frequent symbols.
4. **Applications of Greedy Algorithm**:
    - **Assigning tasks to resources**: Minimize waiting time or maximize efficiency.
    - **Knapsack problem**: Select the most valuable items to fit into a knapsack with limited capacity.
    - **Image segmentation**: Divide an image into regions with similar characteristics.
    - **Data compression**: Reduce the size of data by removing redundant information.
5. **Disadvantages/Limitations of Using a Greedy Algorithm**:
    - Greedy algorithms may not always find the **best possible solution**.
    - The **order** in which elements are considered can significantly impact the outcome.
    - Greedy algorithms focus on **local optimizations** and may miss better solutions that require considering a broader context.
