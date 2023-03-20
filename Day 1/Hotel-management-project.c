// Using If  Else sataement create a samll hotel managemnnt project
#include <stdio.h>

int main()
{
    int roomNumber, numDays;

    //float roomRate, totalBill;
    char name[50], address[100];
    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter address: ");
    scanf("%s", address);

    printf("Enter room number: ");
    scanf("%d", &roomNumber);

    printf("Enter room type (S/D): ");
    scanf(" %c", &roomType);

    printf("Enter number of days: ");
    scanf("%d", &numDays);

    }

/*
    totalBill = roomRate * numDays;
    printf("\n\nHotel Management System\n");
    printf("Customer Details\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Room Number: %d\n", roomNumber);
    printf("Room Type: %c\n", roomType);
    printf("Number of days: %d\n", numDays);
    printf("Total Bill: %.2f\n", totalBill);
*/
    return 0;
}
