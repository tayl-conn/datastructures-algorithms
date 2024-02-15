### Array Datastructure

###### Layout:

A contiguous block of memory. Contiguous meaning that the elements in the array are beside each other in memory.

Arrays are fixed in size.

###### Insertion*: O(1)
Arrays don't have a classic notion of insertion as they can only overwrite data. So really insertion is a write operation to a memory address rather than inserting an element and shifting the rest of the array around.

###### Deletion*: O(1)
Same with insertion, arrays don't have a deletion that aligns with what we see as deletion. They can only overwrite a value already stored at a particular memory address in the array.

###### Read: O(1)
In most languages you read from an array as such ```array[0]```.

What this boils down to is *(arrayPointer + (size of data * offset))

All arrays do is take the value within the ```[]``` as the offset, multiplies that value by the size of the data type stored inside the array and adds it onto the pointer that points to the beginning of the array then reads the value at that address. The ```array``` reference can be thought of (and in languages like C/C++ actually is) the pointer to where the array starts. This is why when accessing arrays we start counting at 0. 

###### Write: O(1)

Same with reading, writing to an array (in this case an int array) can be done something like this ```array[0] = 10```.
Writing has the same concept, do the math to get to the address we want to get to and write the value into that memory address.

###### Implementation: 
Because arrays aren't really data-structures but just a block of memory. Array interfaces are usually implemented for us by the languages we use.

---
#####Pros
- O(1) read/write times

#####Cons
- Fixed size