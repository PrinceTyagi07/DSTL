//  A PROGRAMM IS MADE BY PRINCE TYAGI..

//PROGRAMM TO PRINT THE UNION OF TWO SET...
#include <stdio.h>
int main()
{
    // giving the value by user..

    int a[10], b[10], c[20], i, n1, n2, j, k = 0;

    printf("ENTER THE SIZE OF 1st SET:\n");
    scanf("%d", &n1);

    printf("ENTER THE ELEMENT OF 1st SET:\n");
    for (i = 0; i < n1; i++)
        scanf("%d:", &a[i]);

    printf("ENTER THE SIZE OF 2nd SET:\n");
    scanf("%d", &n2);

    printf("ENTER THE ELEMENT OF 2nd SET:\n");
    for (i = 0; i < n2; i++)
        scanf("%d:", &b[i]);

    // printing the element...

    printf("THE ELEMENT OF 1st SET ARE:\n");
    for (i = 0; i < n1; i++)
        printf("%d\t", a[i]);

    printf("\nTHE ELEMENT OF 2nd SET ARE:\n");
    for (i = 0; i < n2; i++)
        printf("%d\t", b[i]);

    // logic to print the union of two set..
    for (i = 0; i < n1; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (c[j] == b[i])
                break;
        }
        if (j == n1)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("\nUNION OF SET A and SET B is:-\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
//PROGRAMM FINISH...