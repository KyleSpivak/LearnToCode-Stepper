#include "Stepper.h"

// Constructor
Stepper::Stepper()
{
    
}

// See description in header file
void Stepper::Introduction(void)
{
    std::cout << "Introduction" << std::endl;
}

// See description in header file
int Stepper::CalculateTotalHeightInInches(int anFeet, int anInches)
{
    int lnTotalHeight = (anFeet * 12) + anInches;
    
    return lnTotalHeight;
}

// See description in header file
bool Stepper::IsTheInputYes(std::string acYesOrNo)
{
   if( acYesOrNo == "Yes" || acYesOrNo == "yes" || acYesOrNo == "y")
   {
       return true;
   }
   else
   {
       return false;
   }
}

// See description in header file
void Stepper::GetUserInfo(void)
{
   std::string lcTemp;
    
   std::cout << "What is your name? ";
   std::getline(std::cin, mcUserInfo.mcName);
    
   std::cout << "How old are you? ";
   std::getline(std::cin, lcTemp);
   mcUserInfo.mrAgeYrs = atof(lcTemp.c_str());
    
   std::cout << "How tall are you in\n\tFeet?  ";
   std::getline(std::cin, lcTemp);
   mcUserInfo.mnHeightFt = atoi(lcTemp.c_str());
    
   std::cout << "\tInches?  ";
   std::getline(std::cin, lcTemp);
   mcUserInfo.mnHeightIn = atoi(lcTemp.c_str());
    
   mcUserInfo.mnTotalHeightIn = CalculateTotalHeightInInches(mcUserInfo.mnHeightFt, mcUserInfo.mnHeightIn);

   std::cout << "Do you have a long gait? ";
   std::getline(std::cin, lcTemp);
   mcUserInfo.mbLongGait = IsTheInputYes(lcTemp);

   
   if(mcUserInfo.mbLongGait == false)
   {
      std::cout << "Do you have a short gait? ";
      std::getline(std::cin, lcTemp);
      mcUserInfo.mbShortGait = IsTheInputYes(lcTemp);
   }
   else
   {
       mcUserInfo.mbShortGait = false;
   }
}

bool Stepper::AskUserWhatTheyWouldLikeToKnow(void)
{
    // Declare local variables
    bool lbFinished = false;
    std::string lcInput;
    
    std::cout << "Please Setect an option:";
    std::cout << "\n\t0 - Finish";
    std::cout << "\n\t1 - Calculate current distanced walked";
    std::cout << "\n\t2 - Calculate how long it will take to walk around the Earth";
    std::cout << "\n\t3 - Calculate distance walked based on age";
    std::cout << "\n";
    std::getline(std::cin, lcInput);
    
    if(lcInput == "0")
    {
        lbFinished = true;
    }
    else if(lcInput == "1")
    {
        std::cout << "Calculating current distanced walked" << std::endl;
    }
    else if(lcInput == "2")
    {
        std::cout << "Calculating how long it will take to walk around the Earth" << std::endl;
    }
    else if(lcInput == "3")
    {
        std::cout << "Calculating current distanced walked" << std::endl;
    }
    else
    {
        std::cout << "Invalid input, Please try again" << std::endl;
    }
    
    
    return lbFinished;
}
