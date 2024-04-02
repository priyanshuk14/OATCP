Input:
The numbers are read from a file named "Largest_Number_2.txt" into a vector nums.


Conversion to Strings:
Each integer in the nums vector is converted to a string and stored in a temporary vector temp.


Sorting:
The temp vector is sorted in non-decreasing order based on a custom sorting criterion.
The custom sorting criterion is defined as a lambda function that compares two strings a and b by concatenating them in two different orders (a + b and b + a).
This sorting ensures that when two numbers are concatenated, the larger resulting number comes first.


Concatenation:
The sorted strings in the temp vector are concatenated to form the result string res.


Removing Leading Zeros:
Leading zeros are removed from the result string by finding the position of the first non-zero digit.
The substring of res starting from this position is returned as the final result.


Output:
The result string is written to a file named "output_2.txt".