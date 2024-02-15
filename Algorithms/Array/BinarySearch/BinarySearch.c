/*

    ******
    pre-requisites: The array must be sorted for binary search to work.
    ******

    needle: value to look for
    haystack: array of integers
    low: this acts as a index value for the lower bound index on where to search in the array
    high: this acts as a index value for the upper bound index on where to search in the array

    Example:

        1st:

        search(1, array, 0, 6)
         
        [ 1, 2, 3, 4, 5, 6, 7]
          ^        ^        ^
         low     middle    high

        1 != 4, therefore we need to check to the left of 4
        because 1 < 4 and since our array is sorted from least to greatest
        we know the value we're looking for will be on the left side of the array

        Notice: Since this is the first call to search,
        we are looking at the entire array because low = 0
        and high = 6.

        2nd:

        search(1, array, 0, 2)
        [ 1, 2, 3, 4, 5, 6, 7]
          ^  ^  ^        
          l  m  h    

        1 != 2, therefore because 1 < 2 we know
        we need to look to the left of 2 to get closer
        to finding our value

        3rd:

        search(1, array, 0, 1)
        [ 1, 2, 3, 4, 5, 6, 7]
          ^  
          l
          m
          h  

        low = middle = high. So now that we are here
        we check to see if this value is equal to 1
        and it is, hooray! If it were NOT equal to 1
        however, search would be called once more.

        search(1, array, 1, 0)      

        and at this call, our base case would trigger
        as low > high and we would return that we never
        found our needle in our haystack :(.
        

*/

int search(int needle, int *haystack, int low, int high)
{
    if (low > high)
        return 0;

    int middleIndex = low + (high - low) / 2;
    int valueAtMiddleIndex = haystack[middleIndex];

    if (valueAtMiddleIndex == needle)
        return 1;

    if (needle < valueAtMiddleIndex)
        return search(needle, haystack, low, middleIndex - 1);

    return search(needle, haystack, middleIndex + 1, high);
}

int binary_search(int needle, int *haystack, int sizeOfHaystack)
{
    return search(needle, haystack, 0, sizeOfHaystack - 1);
}