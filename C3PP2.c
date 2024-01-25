#include <stdio.h>

int main(void)
{
	int item, month, day, year;
	float price;
	
	printf("Enter item number: ");
	scanf("%d", &item);
	
	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t\t\b%.2d/%.2d/%d", item, price, month, day, year);
	
	return 0;
}
