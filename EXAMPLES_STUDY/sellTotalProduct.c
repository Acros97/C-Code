#include <stdio.h>
int main()

{

char productName[10];
int itemsSold = 0;
float pricePerItem = 0;

printf("What is the name of your product?:\n");

scanf("%s", &productName);

printf("Product Name: %s\n", productName);

printf("How many items were sold?:\n");

scanf("%d", &itemsSold);

printf("Items Sold: %d\n", itemsSold);

printf("How much is the product worth?:\n");

scanf("%1f", &pricePerItem);

printf("Price/Product: %.2f\n", pricePerItem);

float totalEarnings = (itemsSold * pricePerItem);

printf("Total Earnings: %.2f\n", totalEarnings);

system("pause");

}