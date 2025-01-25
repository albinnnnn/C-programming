#include <stdio.h>

int main()
{
    int num1, num2, c, res, flag;
    flag = 1;

    while (flag == 1)
    {
        printf("1. Add\n2. Subtract\n3. Divide\n4. Multiply\n5. Exit\n");
        scanf("%d", &c);

        if (c == 5) 
		{
            flag = 0; 
        } 
		else 
		{
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

            switch (c)
            {
                case 1:
                    res = num1 + num2;
                    printf("Sum of %d and %d is %d\n", num1, num2, res);
                    break;
                case 2:
                    res = num1 - num2;
                    printf("Difference of %d and %d is %d\n", num1, num2, res);
                    break;
                case 3:
                    if (num2 != 0) 
					{
                        res = num1 / num2;
                        printf("Division of %d by %d is %d\n", num1, num2, res);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                case 4:
                    res = num1 * num2;
                    printf("Product of %d and %d is %d\n", num1, num2, res);
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        }
    }

    return 0;
}

