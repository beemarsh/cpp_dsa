# Sorting
### Sorting means arranging the elements in a certain order. In this chapter, we will be sorting numbers in an array in an ascending order.

There are different sorting methods.
- Selection Sort
- Bubble Sort
- Insertion Sort

## Selection Sort
In a selection sort, we find the minimum element in the array and swap it with the current element.
Let an array **a** of size **n**
Let **a[7] = {8,3,66,24,1,9,21}**

We have to use two loops.
First traverse from **0** to **n-2** and in the inner loop traverse from **1 to n-1**

```mermaid
graph TD
    A[8,3,66,24,1,9,21] --> |Swap 8 and 1| B[1,3,66,24,8,9,21] --> |3 is already in its position | C[1,3,66,24,8,9,21]
    C --> |Swap 8 and 66| D[1,3,8,24,66,9,21]
    D --> |Swap 24 and 9| E[1,3,8,9,66,24,21]
    E --> |Swap 66 and 21| F[1,3,8,9,21,24,66]
    F --> |Swap 24 and 66 are in position| G[1,3,8,9,21,24,66]
```
