Algorithm:
1. Define a function `solve` that takes an array `arr[]` of integers and its size `n` as input.
2. Calculate the total sum of all elements in the array `arr[]` and store it in the variable `sum`.
3. Initialize a variable `current` to 0.
4. Iterate through the array `arr[]`:
    a. For each element `arr[i]`, add `i * arr[i]` to the `current`.
5. Initialize `maxProduct` with the value of `current`.
6. Iterate through the array `arr[]` starting from the second element:
    a. Calculate the next value `next` by subtracting `sum - arr[i-1]` from `current` and adding `arr[i-1] * (n - 1)` to it.
    b. Update `current` to `next`.
    c. Update `maxProduct` to the maximum of `maxProduct` and `next`.
7. Return the value of `maxProduct`, which represents the maximum sum of weighted elements of any contiguous subarray of `arr[]`.

Main Function:
1. Read the size of the array `n` from the standard input.
2. Declare an array `numbers[]` of size `n`.
3. Read `n` integers into the array `numbers[]`.
4. Call the `solve` function with the array `numbers[]` and `n`, storing the result in `maxValue`.
5. Print `maxValue` to the standard output.
6. End the program.
