# QUICK SORT
- Based on divide and conquer approach.
- Not inplace or not stable sort.


### Algorithm

```md
Partition(array, p, r)
{
  i = p - 1
  x = array[r]
  for(j = p to r-1)
  {
    if(array[j] <= x)
    {
      i += 1
      swap(array[i] <--> array[j])
    }
  }
  swap(array[i+1] <--> array[r]
  return i+1
}


```md
Quicksort(array, p, r)
{
  if(p < r)
  {
    q = partition(array, p, r)
    Quicksort(array, p, q-1)
    Quicksort(array, q+1, r)
  }
}
```
