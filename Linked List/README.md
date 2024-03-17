# _Linked List_

***A linked list is a linear data structure that stores a collection of data elements dynamically.***

### Representation of the linked list
_The representaion of a linked list depicts that each node consists of two fields. The first field consists of data, and the second field consists of pointer that points to another node._

### Properties of the linked list
**1. Dynamic Size:**
  * Unlike fixed - size arrays, linked list can **expand or contract** as needed during program execution.
  * The dynamic sizing makes linked lists suitable for scenarios where the number of elements can change over time.

**2. Effective Element Insertion and Deletion:**
  * Linked list allow **efficient insertion and deletion** of elements.
  * By updating pointers, you can insert or delete elements from anywhere in the list.
  * This flexibility is especially useful when dealing with dynamic data.

**3. Node Structure:**
  * A linked list consists of **nodes**, where each node contains two components:
    * **Data**: The actual value or payload associated with the node.
    * **Reference (Link)**: A pointer to the next node in the sequence.
  * This structure allows for **sequential traversal** through the list.

**4. Memory Efficiency:**
  * Linked list do not waste memory due to fixed sizes.
  * However, they consume extra memory because they use pointers to keep track of the next successive node.

### Advantages of the linked list
1. **Dynamic memeory allocation**: Linked lists allow efficient allocation and deallocation of memory.
2. **Insertion and deletion**: These operations are faster compared to arrays.
3. **No fixed size**: Linked list adapt to changing data requirements.

### Disadvantages of the linked list
1. **Slower access time**: Accessing elements by index is slower than in arrays.
2. **Extra memory overhead**: Due to the need for pointers.
3. **Sequential traversal**: To find an element, you must traverse the list sequentially.

