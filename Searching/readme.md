# Searching
> ***Searching is the process of finding the desired information from the set of elements in the memory. These sets of items are in various forms, such as an array, queue, tree etc.***
A ***search algorithm*** is an algorithm that accepts an argument a and tries to find a record whose key is a. The algorithm may return the entire record or, more commonly, it may return a pointer to that record. It is possible that the search for a particular argument in a table is unsuccessful; i.e., there is no record in that table with the argument as its key. In such a case the algorithm may return a special “null record” or a null pointer. Very often, if a search is unsuccessful, it may be desirable to add a new record with the argument as its key. An algorithm that does this is called a ***search and insertion*** algorithm. A successful search is often called a ***retrieval.***

## In data structures we deals with the following searching techniques:
### _Linear Search_
In linear search, a sequential search is made over all items one by one. Every item is checked and if a match is found than that particular item is returned, otherwise the search      continues till the end of the data collection.
<br>
<img align="center" alt="Linear_Search" width="500px" src = "https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif"/>

***Algorithm:*** <br>
```md
linear_search(Array[], key) 
Step 1: Set i to 0
Step 2: If i > size then go to Step 7
Step 3: If Array[i] = x then, go to Step 6 
Step 4: Set i to i + 1 
Step 5: Go to Step 2
Step 6: Print Element is found at index i in Array and go to Step 8
Step 7: Print Element not found in Array 
Step 8: EXIT
```

### _Binary Search_
In binary search, an item is searched by dividing the list in two halves, and then the item is compared with middle element of the list. If the match is found then the location of the middle element is returned. Otherwise, search continues on the either halves of the list depending upon the result produced through the match.
<br>
Binary Search works efficiently on sorted list. Hence, to search an element in list using this technique, one must ensure that the list is sorted.


***Algorithm:*** <br>
```md
binary_search(array[],size,low,mid,high,key) 
Step 1: Set low = 0 and high = size 
Step 2: While low <= high then go to Step 4
Step 3: If Step 2 becomes false then go to Step 8
Step 4: Set mid = (low + high) / 2 then go to Step 5
Step 5: If array[mid] == key then return mid and go to Step 9
Step 6: If Step 5 becomes false then, check if key > array[mid] and set low = mid + 1 and then, moves to Step 2
Step 7: If Step 6 becomes false then, set high = mid - 1 and then, moves to Step 2
Step 8: Print Element not found in array 
Step 9: Print Element found at index mid in array 
Step 10: EXIT
```

