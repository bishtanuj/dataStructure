# _QUEUE_

_A **queue** is a linear data structure that follows the **First In First Out (FIFO)** order. In other words, the element inserted first will be the first to be removed._

Here are some key points about queues:
1. **Order**: Elements are processed in the order they arrive.
2. **Operations**:
    - **Enqueue**: Insert an element at the rear end.
    - **Dequeue**: Remove an element from the front end.
3. **Overflow and Underflow**:
    - **Overflow**: Cannot insert an element when the queue is full.
    - **Underflow**: Cannot remove an element when the queue is empty.

### Properties
1. **Primary Queue Operations**:
    - `enqueue(element)`: Insert an element at the rear end (constant time complexity).
    - `dequeue(element)`: Removes and returns the front element (constant time complexity).
2. **Auxiliary Queue Operations**:
    - `front()`: Returns the front element without removing it (constant time).
    - `rear()`: Returns the rear element without removing it (constant time).
    - `isEmpty()`: Indicates whether the queue is empty.
    - `size()`: Returns the total number of elements in the queue.
  
### Types of Queues
1. **Simple Queue**:
