Algorithm -- 

Initialize variables:
Declare a long long integer sum to track the current sum that can be formed using the elements of the array.
Declare an integer cnt to count the number of patches required.
Initialize an index i to 0 to iterate through the elements of the array.

Iterate while the sum is less than n:
While the current sum sum is less than n:
    Check if i is less than the size of the array nums and if nums[i] is less than or equal to sum + 1.
    If the above condition is true, update sum by adding nums[i] to it and increment i.
    If the above condition is false (i.e., the next element of the array cannot be added to form the next sum), increment cnt and update sum by adding sum + 1.

Return the count of patches:
Once the loop finishes, return the value of cnt, which represents the minimum number of patches required to make the range [1, n] inclusive.