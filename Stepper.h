#ifndef STEPPER_H
#define STEPPER_H

#include <iostream>

struct UserInfo
{
   std::string mcName;
   int mnHeightFt;
   int mnHeightIn;
   int mnTotalHeightIn;
   float mrAgeYrs;
   bool mbLongGait;
   bool mbShortGait;
};

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
   
   ////// Public Functions //////
   
   /**
    * Introduction the user to the program  
    *
    * @param void
    * @return void
    */
   void Introduction(void);
   
   /**
    * Get User input necessary for the program  
    *
    * @param void
    * @return void
    */
   void GetUserInfo(void);
   
   /**
    * Ask User What they would like to know for the program  
    *
    * @param void
    * @return bool lbFinished
    */
   bool AskUserWhatTheyWouldLikeToKnow(void);
   
   /**
    * Calculate total height in Inches  
    *
    * @param int anFeet, int anInches
    * @return int lntotalHeight
    */
   int CalculateTotalHeightInInches(int anFeet, int anInches);
   
   /**
    * Calculate total height in Inches  
    *
    * @param std::string acYesOrNo
    * @return bool lbYes
    */
   bool IsTheInputYes(std::string acYesOrNo);
   
   
private:

   UserInfo mcUserInfo;
   
};

#endif