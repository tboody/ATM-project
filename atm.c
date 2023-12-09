/*
Program description: For this program it is necessary to create a C program for this software so that bank clients can control their Personal
Identification Number (PIN) on an ATM (ATM).
Any 4-digit number can serve as the PIN. You can assume that the initial assignment of the number was the customer's default PIN: 1234 
When run, this software should be menu-driven and show a straightforward menu. The following options should  be available in the menu: 

1. Enter PIN and verify correct
2. Change PIN
3. Display the number of times the PIN was entered (i) Successfully (ii)
Incorrectly
4. Exit Program

Author: Abdelrahman abdalla
Date: 13/11/2022

*/
#include <stdio.h>
int main()
{

    //listed variables
    int pin = 1234;
    int prograrunning = 1;
    int menu;
    int inputpin;
    int newpin1;
    int newpin2;
    int enterdcorrect = 0;
    int enterdincorrect = 0;

    //first thing the user will see on the screen
    printf("\nWelcome to the online ATM service\n");
    printf("\nChoose one of the services you would like to use 1,2,3,4\n");
   
    //beginning of while loop
    while (prograrunning == 1)
    {
        //opening menu
        printf("\n1.Enter PIN and verify correct\n");
        printf("2.Change PIN\n");
        printf("3.Display the number of times the PIN was entered (i) Successfully (ii)Incorrectly\n");
        printf("4.Exit program\n");

        //taking input of what service the user will wish to use 
        printf("> ");
        scanf("%d", &menu); 

        //beginning of switch statement
        switch (menu) 
        {   
            // first option which is entering pin
            case 1:
                printf("Enter your current PIN please\n");
                scanf("%d" , &inputpin);

                if(inputpin > 9999)
                {
                    printf("The pin should only be a 4 digit number\n");

                }
                else if (pin == inputpin)
                {
                    printf("PIN was enterd correctly\n");
                    //adds one to every correct pin
                    enterdcorrect++;

                }
                
                else//end else
                {
                    printf("Your PIN was entered incorrectly\n");
                    //adds one to every incorrect pin
                    enterdincorrect++;
                }
                break;


             // second option which is changing pin
            case 2:
                 
                 
                 printf("Enter new PIN: ");
                 scanf("%d" ,&newpin1);
                 printf("Confirm your new PIN: ");
                 scanf("%d" ,&newpin2);


                 //check if both pins are equal to each other
                 if (newpin1 == newpin2)
                 {  
                    //putinf new pin
                     pin = newpin1;
                     printf("\nYour PIN has changed sucessfully\n ");
                 }
                 else
                 {
                     printf("ERROR PIN doesn't match try again please\n ");
                 }
                 break;


             // third option which is checking the number of times the pin was enterd correct or incorrect
            case 3:
                printf("\nYou have entered the PIN correctly %d time(s).\n" ,enterdcorrect);
                printf("\nYou have entered the PIN incorrectly %d time(s).\n",enterdincorrect );
            
                break;

             // first option which is ending ptogram
            case 4:
                prograrunning = 0;
                printf("The program has ended\n");

                break;

            //for other option default runs
            default:
                 printf("Invalid input\n");

        }//end of switch statment
    }//end of while loop
    
        return 0;
}//end of main
