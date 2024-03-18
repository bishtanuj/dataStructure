# _Binary Search Tree_

***A binary search tree is a non - linear data structure that stores a collection of data elements dynamically.***

### Representation of the binary search tree
_The representation of a binary search tree depicts that each node consists of three fields. The first field consists of data, and the second and third field consists of pointer that points to another node in left and right direction respectively, i.e., left and right child respsectively._

### Properties of the Binary Search Tree (BST)
1. **Ordered Structure**
    * Each node in a BST has at most two children: a left child and a right child.
    * The left child contains values less than the parent node, while the right child contains values greater than the parent node.
    * This hierarchical arrangement ensures that the tree is sorted.
  
2. **No Duplicate Values**
    * In a BST, there are no duplicate values.
    * Each value appears only once in the tree.
  
3. **Search Efficiency**
    * BSTs allow for efficient searching operations.
    * When searching for a specific value, we can traverse the tree by comparing the target value with the current node's value and moving left or right accordingly.
    * The search time complexity is logarithmic $O(log$ $n)$ on average, where $n$ is the number of nodes in the tree.
