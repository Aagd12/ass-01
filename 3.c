#include<stdio.h>
#include<math.h>


int main()
{
    int myRoll = 2001175, tempRoll = myRoll;
    int sum = 0;

    int last4[4] = {0};
    int Init4[4] = {0};
    int myRollArray[7] = {0};

    printf("%d", myRoll);

    for(int i = 0; tempRoll; i++)
    {
        sum += tempRoll % 10;
        tempRoll /= 10;
    }

    printf("\nSum of digits of my Roll = %d\n", sum, tempRoll);


    for(int i = 0; i < 8; i++)
    {
        myRollArray[i] = ((int)(myRoll / pow(10, i)) % 10);
    }


    if(myRoll % 2000000 <= 4)
    {
        printf("Initial 4 digits of my Roll are ");

        for(int i = 6; i >= 3; i--)
        {
printf("%d ",myRollArray[i]);
        }
    }
    printf("Last 4 digits of my Roll are ");

    for(int i = 3; i >= 0; i--)
    {
        printf("%d ",myRollArray[i]);
    }

    return 0;
}
