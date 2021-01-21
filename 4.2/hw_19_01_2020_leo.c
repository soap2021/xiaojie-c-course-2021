/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; //iterator
    int a, b, reminder, residual, addition, show_detail, outer_it = 0, inner_it = 0;

    printf("please input a number:  ");
    scanf("%d", &a);
    b = a;

    printf("enter 1) expand details; 0) hide details. \n");
    scanf("%d", &show_detail);

    while (b >= 10) //outer loop, when b has 2+ digits, run inner loop
    {
        addition = 0; //  |-> reset addition to 0

        while (b > 0) //inner loop, adds each digit of a number as a new integer   |-> 3895 -> 25; 31 -> 4; 20 -> 2
        {
            reminder = b % 10; // 3895 -> 5; 31 -> 1; 20 -> 0;

            residual = b - reminder; // 3895 - 5 -> 3890; 31 - 1 -> 30; 20 - 0 -> 20;

            b = residual / 10; // 3890 / 10 -> 389; 30 / 10 -> 3; 20 / 10 -> 2;  |-> prepare b for the next iteration

            addition += reminder;

            if (show_detail) // EXTRA
            {
                printf("\t\tinner iteration %d: addition: %d = addition: %d + reminder: %d.\n", ++inner_it, addition, addition - reminder, reminder);
            }
        }

        b = addition; // |-> prepare a for the next iteration;

        if (show_detail) // EXTRA
        {
            printf("\n\touter iteration %d: b = %d.\n", ++outer_it, b);
        }
    }

    printf("\n\n\n\nHere you go! The processed number of %d is %d. \n", a, b);

    return 0;
}