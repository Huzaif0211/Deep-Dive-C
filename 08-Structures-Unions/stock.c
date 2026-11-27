
#include <stdio.h>

// Creating a structure to store product information
typedef struct product
{
    int id;        // Unique ID of the product
    char name[30]; // Name of the product
    int quantity;  // Available quantity in stock
    float price;   // Price of one item
} prod;            // 'prod' is an alternative name for struct product

// FUNCTION 1: Find a product using its ID
// Returns a pointer to the product if found, otherwise returns NULL
prod *findProduct(prod arr[], int n, int id)
{
    // Traverse the product array one element at a time
    for (int i = 0; i < n; i++)
    {
        // Check whether the current product's ID matches the requested ID
        if (arr[i].id == id)
        {
            // Return the memory address of the matching product
            return &arr[i];
        }
    }

    // If no matching product is found, return NULL
    return NULL;
}

// FUNCTION 2: Sell a product
// Returns 1 if the sale is successful, otherwise returns 0
int sellProduct(prod arr[], int n, int id, int qty)
{
    // Find the requested product and store its address in pointer p
    prod *p = findProduct(arr, n, id);

    // Check whether the product exists
    if (p == NULL)
    {
        return 0; // Sale failed: product not found
    }

    // Check whether the requested quantity is valid and available
    if (qty <= 0 || p->quantity < qty)
    {
        return 0; // Sale failed: invalid or insufficient quantity
    }

    // Reduce the original product's stock by the sold quantity
    p->quantity = p->quantity - qty;

    // Sale completed successfully
    return 1;
}

// FUNCTION 3: Calculate the total value of all products in stock
float totalStockValue(prod arr[], int n)
{
    // Initialize total stock value to zero
    float total = 0;

    // Traverse every product in the array
    for (int i = 0; i < n; i++)
    {
        // Add (quantity * price) of the current product to total
        total += arr[i].quantity * arr[i].price;
    }

    // Return the calculated stock value
    return total;
}

// MAIN FUNCTION: Program execution starts here
int main()
{
    // Create an array containing four product structures
    prod arr[4] = {
        {101, "Pen", 50, 10.0},
        {102, "Notebook", 20, 45.5},
        {103, "Bag", 5, 600.0},
        {104, "Bottle", 12, 150.0}};

    // Calculate and display the initial total stock value
    printf("Total stock value: %.2f\n", totalStockValue(arr, 4));

    // Try selling 3 notebooks (product ID 102)
    // If sellProduct returns 1, the sale is successful
    if (sellProduct(arr, 4, 102, 3))
        printf("Sale of 3 x id 102: successful\n");
    else
        printf("Sale of 3 x id 102: failed\n");

    // Try selling 1 item of product ID 999
    // This product does not exist in our inventory
    if (sellProduct(arr, 4, 999, 1))
        printf("Sale of 1 x id 999: successful\n");
    else
        printf("Sale of 1 x id 999: failed\n");

    // Try selling 1000 pens (product ID 101)
    // Only 50 pens are available, so the sale must fail
    if (sellProduct(arr, 4, 101, 1000))
        printf("Sale of 1000 x id 101: successful\n");
    else
        printf("Sale of 1000 x id 101: failed\n");

    // Calculate and display the updated stock value
    // The value changes because 3 notebooks were sold
    printf("Total stock value: %.2f\n", totalStockValue(arr, 4));

    // End the program successfully
    return 0;
}
