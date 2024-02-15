int linear_search(int needle, int *haystack, int sizeOfHaystack)
{
    int found = 0;

    for (int i = 0; i < sizeOfHaystack; i++)
    {
        if (haystack[i] == needle)
        {
            found = 1;
            break;
        }
    }

    return found;
}