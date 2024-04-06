# _Graphs_

_A **graph** is a non- linear data structure that consists of vertices (also known as nodes) connected by **edges**. These edges represent relationship between different entities. Graphs are used to model various real - world scenarios and can be analyzed using graph algorithms._

Here are some key points about graphs:
1. **Components of a Graph**:
    - **Vertices**: These are the fundamental units of the graph. Each vertex represents an entity or a point in the graph.
    - **Edges**: Edges connect two vertices and represent the relationships between them. Edges can be directed (with the specific direction) or unidirected (bidirectional).
    - A graph is formally denoted as **G(V, E)**, where **V** is the set of vertices and **E** is the set of edges.
2. **Basic Operations on Graphs**:
    - **Insertion**: Adding vertices or edges to the graph.
    - **Deletion**: Removing vertices or edges from the graph.
    - **Searching**: Finding a specific entity (vertex) in the graph.
    - **Traversal**: Visiting all nodes in the graph.
3. **Applications of Graphs**:
    - **Social Networks**: Graphs are commonly used to represent social networks, such as connections between friends on social media platforms.
    - **Computer Networks**: Graphs model the topology of computer networks, including connection between routers and switches.
    - **Transportation Networks**: Representing connections between places (roads, airports) in transportaion systems.
    - **Neural Networks**: In neural networks, vertices represent neurons, and edges represent synapses.
4. **Graph Algorithms**:
    - **Breadth-First Search (BFS)**: Traverses the graph level by level, useful for finding the shortest path.
    - **Depth-First Search (DFS)**: Explores as far as possible along each branch before backtracking, useful for detecting cycles.
    - **Shortest Path Algorithms**: Find the shortest path between two vertices (e.g., Dijkstra's algorithm).
    - **Minimum Spanning Tree Algorithms**: Find the minimum spanning tree (e.g., Prim's or Kruskal's algorithm).
    - **Topological Sorting**: Orders vertices based on dependencies (used in task scheduling).
5. **Real - Life Examples**:
    - In sport data science, graphs analyze player interactions (passes, shots, tackles) to understand team dynamics.
    - Social media platforms use graph to recommend friends and connections.
    - Neural networks model brain connections and learning processes.
  
### Representation of Graph
1. **Adjacency List Representation**
    - An **adjacency list** is a common way to represent graphs in computer science. It's particularly useful for sparse graphs (where the number of edges is much smaller than the maximum possible edges).
    - Here are some key points:
        1. **Definition**:
            - An adjacency list represents a graph as an **array of linked lists**.
            - Each index in the array corresponds to a **vertex** (or node) in the graph.
            - The linked list at each index contains the **adjacent vertices** connected to that vertex.
        2. **Example**:
            - Consider the following unidirected graph:
            - We can represent this graph using an adjacency list as follows:
              ```md
              0 -> 1, 2
              1 -> 0, 2, 3
              2 -> 0, 1, 4
              3 -> 1, 4
              4 -> 2, 3, 5
              5 -> 4
              ```
