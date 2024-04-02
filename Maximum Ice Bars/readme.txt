Input:
The number of ice bars available (n).
The prices of each ice bar (values).
The number of coins available (coins).


Sorting:
The values vector containing the prices of the ice bars is sorted in non-decreasing order using sort.


Buying Ice Bars:
The function maxIceBars iterates through the sorted values vector.
For each ice bar, if its price is less than or equal to the remaining number of coins, it's bought.
The price of the bought ice bar is deducted from the total coins available, and the count of bought ice bars is incremented.


Return:
The function returns the count of bought ice bars.


Output:
The main function outputs the result, which represents the maximum number of ice bars that can be bought with the given number of coins.