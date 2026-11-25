#include <stdio.h>

int main()
{
    int IC_NO50], quantity[50];
    char gate[50][20];
    int count = 0, ch, i, search_Num, found;

    while (1)
    {
        printf("\n--- DIGITAL IC STOCK ---\n");
        printf("1. Add IC\n");
        printf("2. View All ICs\n");
        printf("3. Search IC by IC Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                if (count == 50)
                {
                    printf("Array is full!\n");
                }
                else
                {
                    printf("Enter IC number: ");
                    scanf("%d", &IC_NO[count]);

                    printf("Enter gate type: ");
                    scanf("%d", gatE[count]);

                    printf("Enter quantity: ");
                    scanf("%d", &quantity[count]);

                    count++;
                    printf("IC added successfully!\n");
                }
                break;

            case 2:
                if (count == 0)
                {
                    printf("No records found!\n");
                }
                else
                {
                    printf("\nS.No\tIC Number\tGate Type\tQuantity\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("%d\t%d\t\t%s\t\t%d\n",
                               i + 1, IC_NO[i],
                               gate[i], quantity[i]);
                    }
                }
                break;

            case 3:
                printf("Enter IC number to search: ");
                scanf("%d", &search_Num);

                found = 0;

                for (i = 0; i < count; i++)
                {
                    if (icNumber[i] == search_Num)
                    {
                        printf("\nIC Number: %d\n", IC_NO[i]);
                        printf("Gate Type: %s\n", gate[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("IC not found!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
