# Searching
> ***Searching is the process of finding the desired information from the set of elements in the memory. These sets of items are in various forms, such as an array, queue, tree etc.***

## In data structures we deals with the following searching techniques:
### _Linear Search_
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

### _Binary Search_
In binary search, an item is searched by dividing the list in two halves, and then the item is compared with middle element of the list. If the match is found then the location of the middle element is returned. Otherwise, search continues on the either halves of the list depending upon the result produced through the match.
<br>
Binary Search works efficiently on sorted list. Hence, to search an element in list using this technique, one must ensure that the list is sorted.


***Algorithm:*** <br>
binary_search(array[],size,low,mid,high,key) <br>
**Step 1:** Set low = 0 and high = size <br>
**Step 2:** While low <= high then go to **Step ** <br>
**Step 3:** If **Step 2** becomes false then go to **Step 8** <br>
**Step 4:** Set mid = (low + high) / 2 then go to **Step 5** <br>
**Step 5:** If array[mid] == key then return mid and go to **Step 9** <br>
**Step 6:** If **Step 5** becomes false then check if key > array[mid] and set low = mid + 1 and then moves to **Step 2** <br>
**Step 7:** If **Step 6** becomes false then Set high = mid - 1 and then moves to **Step 2** <br>
**Step 8:** Print Element not found in array <br>
**Step 9:** Print Element found at index mid in array <br>
**Step 10:** EXIT
