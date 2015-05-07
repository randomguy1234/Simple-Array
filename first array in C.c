#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n, m;
    float test[100], a, x, temp=1.0;

    printf("Enter the amount of numbers to add to the list(between 1 and 100): ");
    scanf("\n%i", &n);

    //test[n+1]; //index of 10 means array of size 11, for example

    if(n>0 && n<=100)
    {
        while(i<n)
        {
            printf("Enter a number into list: ");
            scanf("\n%f", &a);

            test[i]= a;
            i++;
        }

        printf("Enter which number you want to replace: ");
        scanf("\n%d", &m);


        printf("Enter new value: ");
        scanf("\n%f", &x);

        if(m<=n)
        {

            for(i=0;i<=n;i++)
            {
                if(i == m-1 && m<n)
                {
                    temp = test[i];
                    test[i] = x;
                    x = temp;
                    temp = test[i+1];
                    m++;
                    printf("\t%f", test[i]);
                }

                else if(i == m-1 && m==1)    //1st slot is target for switching
                {
                    temp = test[i];
                    test[i] = x;
                    x = test[i+1];
                    test[i+1] = temp;
                    m++;
                    printf("\t%f", test[i]);
                }

                else if(i == m-1 && m==n)               // nth term is target for switch
                {
                    temp = test[i];
                    test[i] = x;
                    test[i+1] = temp;
                    printf("\t%f", test[i]);
                }

                else
                    printf("\t%f", test[i]);
            }
        }
        else
            printf("The replacement number is either bigger than the number of items in the list or less than 1.");
    }
    else
        printf("The number you have entered is either less than 1 or greater than 100. Please try again.");

}
