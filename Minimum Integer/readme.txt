Algorithm --

Define a function removeKdigits:
The function takes a string num representing the number and an integer k indicating the number of digits to remove.
If the length of the number is equal to k, return "0" (since removing all digits results in 0).

Initialize variables:
Declare a string ans to store the result.
Declare a vector stack of characters to act as a stack.

Iterate through each digit of the number:
For each digit num[i]:
    While k is greater than 0 and the stack is not empty and the last digit in the stack (stack.back()) is greater than num[i], pop elements from the stack and decrement k.
Push num[i] onto the stack.

Remove remaining digits:
After the loop, if there are still digits to remove (k > 0), pop elements from the stack until k becomes 0.

Construct the result string:
Iterate through the stack and append each character to ans, skipping leading zeros.

Return the result:
If ans is empty, return "0"; otherwise, return ans.