# Searching
> ***Searching is the process of finding the desired information from the set of elements in the memory. These sets of items are in various forms, such as an array, queue, tree etc.***

## In data structures we deals with the following searching techniques:
### _Linear Search_
<br>
In linear search, a sequential search is made over all items one by one. Every item is checked and if a match is found than that particular item is returned, otherwise the search      continues till the end of the data collection.
<br>
<img align="center" alt="Linear_Search" width="500px" src = "https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif"/>

***Algorithm:*** <br>
linear_search(Array[], key) <br>
**Step 1:** Set i to 0 <br>
**Step 2:** If i > size then go to **Step 7** <br>
**Step 3:** If Array[i] = x then, go to step 6 <br>
**Step 4:** Set i to i + 1 <br>
**Step 5:** Go to **Step 2** <br>
**Step 6:** Print Element is found at index i in Array and go to **Step 8** <br>
**Step 7:** Print Element not found in Array <br>
**Step 8:** EXIT
