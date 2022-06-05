#ifndef STEPPER_H
#define STEPPER_H

#include <iostream>

class Stepper
{
public:
   // Constructor
   Stepper();
   // Destructor
   ~Stepper() = default;
   // Copy Constructor
   Stepper(Stepper const&) = default;
   // Assignment operator
   Stepper& operator=(const Stepper&) = default;
   
   void printTestString(void);
   
private:
   std::string mcTest;
};

#endif