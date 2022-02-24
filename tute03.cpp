/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

/*#include <stdio.h>
int main()
{
    int no;

    printf("Enter a Number : ");
    scanf("%d", &no);

    for (int r=1; r >= 13; r++) {
        printf("%d * %d = %d", no,r ,no*r);
    }

    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    int no,r;
    long fac = 1;

    cout<<"Enter a Number: ";
    cin>> no;

    for(r=1; r>=1; r--)
    {
       fac= fac * r;
    }
    cout<<"Factorial "<< no <<" is "<< fac << endl;
}
