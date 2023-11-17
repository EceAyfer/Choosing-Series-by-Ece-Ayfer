
        // Ece AYFER
        // Date: 21.03.2023

        // This program contains four series.
        // It allows you to select as many numbers as you want from these series and print them on the screen.

        #include <stdio.h>                                                             // Adding required library
        #include <stdlib.h>                                                            // Adding required library

        int main ()                                                                    // Compiler provides zero return value

        {                                                                              // Opening curly brace in "int main()"

        int                 choice;                                                    // Adding variable for switch function
        unsigned long long  variable1, state1;                                         // "Unsigned" to prevent minus status when large numbers cannot be stored in memory
        unsigned long long  fib1= 0, fib2 = 1, nexTerm;                                // Special case for the first two terms of the Fibonacci Series
        float               variable2, state2, harmonic = 0;                           // Starting the Harmonic Series from the number of zero
        unsigned int        variable3, state3;                                         // "Unsigned" to prevent minus status when large numbers cannot be stored in memory
        unsigned int        triangular = 0;                                            // Starting the Triangular Series from the number of zero
        unsigned long long  variable4, state4, cube;                                   // "Unsigned" to prevent minus status when large numbers cannot be stored in memory
        char                type;                                                      // In order to write an answer to the question asked: "Do you want to continue?"
        char                confirmation;                                              // Variable of the second question to exit

        printf ("***********************************\n");                              // Adding embellishment
        printf ("    Welcome!\n");                                                     // User greeting message

        while (1)                                                                      // Enclosing codes "while" to give the user more choice

        {                                                                              // Opening curly braces in  "while"
            printf ("Please choose a series:\n");                                      // Asking user to enter type of series
            printf ("1. Fibonacci Series\n");                                          // Adding "Fibonacci Series" to case 1
            printf ("2. Harmonic Series\n");                                           // Adding "Harmonic Series" to case 2
            printf ("3. Triangular Series\n");                                         // Adding "Triangular Series" to case 3
            printf ("4. Cube Series\n");                                               // Adding "Cube Series" to case 4

            scanf ("%d",&choice);                                                      // Evaluating of the entered value

            switch (choice)                                                            // Separation of "choice" for certain situations
            {                                                                          // Opening curly braces in "switch"

                case 1:                                                                // Valid for the Fibonacci Series we assigned to the first case
                    printf ("How many terms do you want to print on the screen?: ");   // Asking the user how many values to enter


                    while (scanf("%llu%*n",&variable1) != 1 || variable1 <= 0)         // Checking if the input has been entered properly

                    {                                                                  // Opening curly braces in "while"
                        while (getchar() != '\n');                                     // Reading the input properly

                            printf ("Please enter a positive number!\n");              // This message is displayed if it is not a positive integer.
                    }

                    if ((int) variable1 < 0)                                           // Checking if input is positive

                    {                                                                  // Opening curly braces in "if"
                        variable1 = variable1 *(-1);                                   // Eliminating the minus situation
                    }                                                                  // Closing curly braces in "if"

                    printf ("Fibonacci Series: ");                                     // Printing the series name on the screen

                    for (state1 = 1 ; state1 <= variable1; state1++)                   // Looping  the entered value and reviewing it sequentially

                    {                                                                  // Opening curly braces in "for"
                        if (state1 < variable1+1 && state1 != 1)                       // Setting the apostrophe case

                        {                                                              // Opening curly braces in "if"
                            printf ("; ", fib1);                                       // Setting the apostrophe case
                        }                                                              // Closing curly braces in "if"

                        printf ("\t %llu", fib1);                                      // Printing the value in fib1 to the screen

                        nexTerm = fib1 + fib2;                                         // Adding the  nexTerm as fib1 and fib2 and printing to nexTerm
                        fib1    = fib2;                                                // Putting fib2 to fib1
                        fib2    = nexTerm;                                             // Putting nexTerm to fib2
                    }                                                                  // Closing curly braces in "for"

                    printf ("\n");                                                     // Leaving a blank line
                    printf ("***********************************\n");                  // Adding embellishment

                break;                                                                 // Allowing us to exit Case 1

                case 2:                                                                // Valid for the Harmonic Series we assigned to the second case
                    printf ("How many terms do you want to print on the screen?: ");   // Asking the user how many values to enter

                    if (scanf("%f%*c", &variable2) != 1 || variable2 <= 0)             // Checking if the given value is a positive integer

                    {                                                                  // Opening curly braces in "if"
                        printf ("Please enter a positive number!");                    // This message is displayed if it is not a positive integer.
                        return 1;                                                      // Terminating the execution of the function
                    }                                                                  // Closing curly braces in "if"

                    printf ("Harmonic Series: ");                                      // Printing the series name on the screen

                    for (state2 = 1 ; state2 <= variable2; state2++)                   // Looping  the entered value and reviewing it sequentially

                    {                                                                  // Opening curly braces in "for"
                        harmonic += (float) 1 / state2;                                // Increasing the number of harmonic value in float types and writing  it in the formula

                        if (state2 < variable2+1 && state2 != 1)                       // Setting the apostrophe case

                        {                                                              // Opening curly braces in "if"
                            printf("; ");                                              // Setting the apostrophe case
                        }                                                              // Closing curly braces in "if"

                        printf("\t %.2f", harmonic);                                   // Adding 2 digits after the decimal and printing it on the screen
                    }                                                                  // Closing curly braces in "for"

                    printf ("\n");                                                     // Leaving a blank line
                    printf ("***********************************\n");                  // Adding embellishment
                break;                                                                 // Allowing us to exit Case 2

                case 3:                                                                // Valid for the Triangular Series we assigned to the third case
                    printf ("How many terms do you want to print on the screen?: ");   // Asking the user how many values to enter

                    while (scanf("%llu%*c",&variable3) != 1 || variable3 <= 0)         // Checking if the input has been entered properly

                    {                                                                  // Opening curly braces in "while"
                        while(getchar() != '\n');                                      // Reading the input properly

                            printf("Please enter a positive number!\n");               // This message is displayed if it is not a positive integer.
                    }                                                                  // Closing curly braces in "while"

                    if ((int) variable3 < 0)                                           // Checking if input is positive

                    {                                                                  // Opening curly braces in "if"
                        variable3 = variable3 *(-1);                                   // Eliminating the minus situation
                    }                                                                  // Closing curly braces in "if"

                    printf ("Triangular Series: ");                                    // Printing the series name on the screen

                    for (int state3 = 1; state3 <= variable3; state3++)                // Looping  the entered value and reviewing it sequentially

                    {                                                                  // Opening curly braces in "for"
                        triangular = (state3 * (state3 + 1) / 2);                      // Writing the formula of the Triangular Series

                        if (state3 < variable3+1 && state3 != 1)                       // Setting the apostrophe case

                        {                                                              // Opening curly braces in "if"
                            printf ("; ");                                             // Setting the apostrophe case
                        }                                                              // Closing curly braces in "if"

                    printf ("\t%u", triangular);                                       // Printing on the screen
                    }                                                                  // Closing curly braces in "for"

                    printf ("\n");                                                     // Leaving a blank line
                    printf ("***********************************\n");                  // Adding embellishment
                break;                                                                 // Allowing us to exit Case 3

                case 4:                                                                // Valid for the Cube Series we assigned to the fourth case
                printf ("How many terms do you want to print on the screen?: ");       // Asking the user how many values to enter

                while (scanf("%llu%*c",&variable4) != 1 || variable4 <= 0)             // Checking if the input has been entered properly

                {                                                                      // Opening curly braces in "while"
                    while (getchar() != '\n');                                         // Reading the input properly

                    printf ("Please enter a positive number!\n");                      // This message is displayed if it is not a positive integer.
                }                                                                      // Closing curly braces in "while"

                if ((int) variable4 < 0)                                               // Checking if input is positive

                {                                                                      // Opening curly braces in "if"
                    variable4 = variable4 *(-1);                                       // Eliminating the minus situation
                }                                                                      // Closing curly braces in "if"

                printf ("Cube Series: ");                                              // Printing the series name on the screen

                for (int state4 = 1; state4 <= variable4; state4++)                    // Looping  the entered value and reviewing it sequentially

                {                                                                      // Opening curly braces in "for"
                    cube = state4 * state4 * state4;                                   // Writing the formula of the Cube Series

                    if (state4 < variable4+1 && state4 != 1)                           // Setting the apostrophe case

                    {                                                                  // Opening curly braces in "if"
                        printf ("; ");                                                 // Setting the apostrophe case
                    }                                                                  // Closing curly braces in "if"

                    printf ("\t %llu", cube);                                          // Printing on the screen
                }                                                                      // Closing curly braces in "for"

                    printf ("\n");                                                     // Leaving a blank line
                    printf ("***********************************\n");                  // Adding embellishment
                break;                                                                 // Allowing us to exit Case 4

                default:                                                               // Working when there is a other character than [1,4]
                    printf ("Please choose a number on [1,4]\n");                      // Printing why there is a error
                    exit   (0);                                                        // Helping to exit
            }                                                                          // Closing curly braces in "switch"

        printf("\nDo you want to continue? (q = exit)\n");                             // Exiting when q is pressed on the keyboard
        scanf("%c", &type);                                                            // Evaluating of the entered value

        if (type == 'q'|| type == 'Q')                                                 // Checking if the given value is 'q' or 'Q'

        {                                                                              // Opening curly braces in "if"
            printf("Are you sure you want to quit? (y = exit)\n");                     // This message is displayed if it is 'q' or 'Q'
            scanf(" %c", &confirmation);                                               // Reviewing the given value

                if (confirmation == 'y' || confirmation == 'Y')                        // Checking if the given value is 'y' or 'Y'

                {                                                                      // Opening curly braces in "if"
                    printf ("    Goodbye!\n");                                         // Printing shutdown message if the variable is"y" or "Y"
                    printf ("***********************************\n");                  // Adding embellishment
                    break;                                                             // Allowing us to exit loop
                }                                                                      // Closing curly braces in "if"
        }                                                                              // Closing curly braces in "if"
        }                                                                              // Closing curly braces in "while"
        return 0;                                                                      // Terminating the execution of the function
        }                                                                              // Closing curly braces in "int main()"
