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
    - Basic version with insertion at the rear and removal from the front.
2. **Circular Queue**:
    - Efficient array - based implementation.
    - Circular arrangement where the last element connects to the first.
    - Better memory utilization.
3. **Priority Queue**:
    - Arranges elements based on priority (not strictly FIFO).
  
### Advantages of Queue
1. **Ordered Processing**: Serves data in a specific order (FIFO).
2. **Fast Insertion and Deletion**: $O(1)$ time complexity.
3. **Applications**:
    - **Task Scheduling**: Prioritize tasks based on urgency.
  

