/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "Stepper.h"


int main()
{
    // Create the Stepper Class
    Stepper lcStepper;
    
    // Send the Introduction Message
    lcStepper.Introduction();
    
    // Get User Input
    lcStepper.GetUserInfo();
    
    // Ask user what they would like to know
    bool lbFinished = false;
    while(!lbFinished)
    {
        lbFinished = lcStepper.AskUserWhatTheyWouldLikeToKnow();
    }

    return 0;
}
