#include<iostream>
#include<vector>
 
std::vector<int> getProductArray(int arr[], int n)
{
 
    // Base case
    if (n == 1) {
        std::vector<int> x{0};
        return x;
    }
 
    int i, temp = 1;
 
    /* Allocate memory for the product array */
    std::vector<int> prod(n);
 
    // product of elements on left side excluding i */
    for (i = 0; i < n; i++) {
        prod[i] = temp;
        temp *= arr[i];
    }
 
    // Re-Init temp to 1
    temp = 1;
 
    // product of elements on right side excluding arr[i]
    for (i = n - 1; i >= 0; i--) {
        prod[i] *= temp;
        temp *= arr[i];
    }
 
    /* print the constructed prod array */
    for (i = 0; i < n; i++)
        std::cout << prod[i] << " ";
 
    return prod;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    getProductArray(arr, n);
}