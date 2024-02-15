### Binary Search Algorithm

###### Running Time: O(log(n))

######Idea:

To take advantage of the fact that the array is sorted before
doing the search, check the value in the middle of the array
if the value is the one we're looking for, stop looking. If the value is greater than then we know we need to look at the left half of the array (assuming the array is in ascending order). If the value is greater then we need to check the right side of the array. We keep doing this with smaller and smaller chunks in the array until we do or don't find the value we're looking for.

---

#####Pre-requisites:
- Array must be sorted

#####Pros
- O(log(n)) running time

#####Cons
- Array must be sorted