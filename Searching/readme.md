# Searching
> ***Searching is the process of finding the desired information from the set of elements in the memory. These sets of items are in various forms, such as an array, queue, tree etc.***

## In data structures we deals with the following searching techniques:
***Linear Search***
<br>
In linear search, a sequential search is made over all items one by one. Every item is checked and if a match is found than that particular item is returned, otherwise the search      continues till the end of the data collection.
<br>
<img align="center" alt="Linear_Search" width="500px" src = "https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif"/>

**Algorithm:**
linear_search(Array[], key)
**Step 1:** Set i to 0
**Step 2:** If i > size then go to **Step 7**
**Step 3:** If Array[i] = x then, go to step 6
**Step 4:** Set i to i + 1
**Step 5:** Go to **Step 2**
**Step 6:** Print Element is found at index i in Array and go to **Step 8**
**Step 7:** Print Element not found in Array
**Step 8:** EXIT
