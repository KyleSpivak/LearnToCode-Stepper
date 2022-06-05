#include "Stepper.h"

// Constructor
Stepper::Stepper()
{
    mcTest = "Kyle";
}

// See description in header file
void Stepper::printTestString(void)
{
    std::cout << "Test with this string: " << mcTest << std::endl;
}