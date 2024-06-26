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
              Here, each vertex (0 to 5) has a linked list containing its adjacent vertices.
        3. **Pros of Adjacency List**:
            - **Efficient Storage**: Only edges need to be stored, saving space for sparse graphs.
            - **Easy to Find Adjacency Vertices**: Quickly find all vertices adjacent to a given vertex.
        4. **Cons of Adjacency List**:
            - **Slower for Finding All Edges**: To find all edges, we must explore all connected nodes.
            - **Not Ideal for Dense Graphs**: For dense graphs, adjacency matrices may be more efficient.
2. **Adjacency Matrix Representation**:
    - An **adjacency matrix** is a way of representing a graph as a matrix of boolean (0's and 1's). It provides a compact and efficient representation for both directed and unidirected graphs.
    - Here are some key points:
        1. **Definition**:
            - An adjacency matrix represents a graph using **2D matrix**.
            - If a graph has **n vertices**, the adjacency matrix is an **n x n** matrix.
            - Each entry in the matrix indicates whether there is an edge between two vertices.
            - If there is an edge from vertex **i** to vertex **j**, the corresponding entry is **1**; otherwise, it's **0**.
        2. **Example**:
            - Consider the following unidirected graph:
            - We can represent this graph using adjacency matrix as follows:
              ```md
              0 1 1 0 0 0
              1 0 1 1 0 0
              1 1 0 0 1 0
              0 1 0 0 1 0
              0 0 1 1 0 1
              0 0 0 0 1 0
              ```
              Here, each row and column correspond to a vertex, and the value at position **(i, j)** indicates whether there is an edge from vertex **i** to vertex **j**.
        3. **Pros of Adjacency Matrix**:
            - **Efficient Basic Operations**: Adding an edge, removing an edge, and checking edge existence are **constant time** operations.
            - **Suitable for Dense Graphs**: When the graph has many edges, the adjacency matrix is memory - efficient.
            - **Enables Matrix Operations**: Advanced matrix operations can provide insights into graph properties.
        4. **Cons of Adjacency Matrix**:
            - **Memory Usage**: Requires **V x V** space, which can be inefficient for sparse graphs.
            - **Inefficient for Sparse Graphs**: For graphs with few edges, adjacency lists are better.
            - **InEdge and OutEdge**: Finding in-edges and out-edges is expensive.
