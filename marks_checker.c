#include<stdio.h>

int main()
{
    printf("Enter The Student marks:");
    int marks=0;
    scanf("%d", &marks);

        if(marks >= 85 && marks <= 100)
        {
            printf("Grade A");
        }

        else if(marks >= 70 && marks <= 84)
        {
            printf("Grade B");
        }

        else if(marks >= 55 && marks <= 69)
        {
            printf("Grade C");
        }

        else if(marks >= 40 && marks <= 54)
        {
            printf("Grade D");
        }

        else
        {
            printf("Grade F");
        }

}
