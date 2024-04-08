# _Heap Data Structure_

_A **heap** is a specialized tree - based data strucutre that plays a crucial role in various algorithms and applications._

Heap data structure is a complete binary tree that satisfies the heap property such that:
* Every node is always greater than its child node(s) and the key of the root node is the largest among all other nodes. This property is also called **max heap property**.
* Every node is always smaller than its child node(s) and the key of the root node is the smallest among all other nodes. This property is also called **min heap property**.

### Heap Operations
Common operations on heap are described below:
- **Insert**:
    - Adds a new element to the heap while maintaining the heap property.
- **Extract Max/Min**:
    - Removes the maximum or minimum element from the heap and return it.
- **Heapify**:
    - Converts an arbitrary binary tree into a heap.

### Applications of Heap Data Structure
- **Priority Queues**:
    - Heaps are commonly used to implement priority queues, where elements are retrieved based on their priority (maximum or minimum value).
- **Sorting**:
    - **Heapsort** is a soring algorithm that uses a heap to sort an array in ascending or descending order.
- **Graph Algorithms**:
    -
