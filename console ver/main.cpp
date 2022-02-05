#include <iostream>
#include <string>
// The <windows.h> header adds the command sleep to delay the time of the game
#include <windows.h>

using namespace std;

// Intro class of the game
class Intro{
   public:
      void run(){

      	// Title of the game
      	 cout << "------------------------------------------------"<< endl;
         cout << " Dating Simulator made by Group 2 in MCS102 BSU" << endl;
         cout << "                (Title)" << endl;
         cout << "       Press any key to continue." << endl;
      	 cout << "------------------------------------------------"<< endl;

      }

      // This method will ask the user to input yes or no if they wanna play 
      // It will return an Integer value of 1 to 0
      // If it did not input the right answer it will ask the user again to input a valid one
      int ask()
      {
      	string play = "";
      	cout << "Do you wanna play? Y/N: ";
      	getline(cin, play);
      	while (true)
      	{
      		if (play == "Y" || play == "y" || play == "yes" || play == "Yes"){

      			return 1;
      			break;
      		}else if(play == "N" || play == "n" || play == "No" || play == "no"){
      			return 0;
      			break;

      		}else{
      			cout << "Please choose only Y or N: ";
      			// This getline command is like the cin command or scanf command
      			// But this command read all the strings within the line including spaces
      			getline(cin, play);
      		};
      	};
      }

};

// The prologue class of the Game where the story begins
class Prologue{
   public:
      void run(){
      	cout << "------------------------------------------------------------------------------"<< endl;
        cout << "                        GAME START" << endl;
      	cout << "------------------------------------------------------------------------------"<< endl;
         cout << "Its my first day of school and Im running pretty late. This happened because I pulled an all-nighter playing a game. I was grinding for a mega climactic flesh vibrator for my game." << endl;
         Sleep(6000);
         cout << endl;
         cout << "And now I'm running on the way to school hoping not to be late." << endl;
         cout << endl;
         Sleep(3000);
         cout << "*Thump*" << endl << endl;;
		 Sleep(3000);        
         cout << "[Angel]: Hey! Why did you bumped me?!" << endl << endl;
         cout << "Inner dialogue: \nOn my way to school I bumped a girl what should I say?" << endl;
         cout << endl;
         cout << "[1] Sorry *helps her* \n[2] I'm so sorry *helps and escort her*\n[3] … (...)\n[4] Nag over-think \nWhat to do: ";
		 string option;
		 getline(cin, option);	
		 if (option == "1")
		 {
		 	cout << "test option 1" << endl;
		 }
		 else if (option == "2"){
		 	cout << "test option 2" << endl;
		 }
		 else if (option == "3"){
		 	cout << "test option 3" << endl;
		 }
		 else if (option == "4"){
		 	cout << "test option 4" << endl;
		 } else {
		 	cout << "Not a valid input" << endl;
		 }
        }

};

// The kim route class of the game 
class Kim{
   public:
      void run(){
        cout << "running" << endl;
      }
};

// Angel route of the game 
class Angel{
   public:
      void run(){
         cout << "running" << endl;
      }
};

// Liah route of the game
class Liah{
   public:
      void run(){
         cout << "running" << endl;
      }
};



int main()
{
   // Initialization of the class
   int None = 0;
   Intro intro;
   Prologue prologue;
   Angel angel;
   Kim kim;
   Liah liah;
   
   // It means that the intro class will Run prompting the title of the game
   intro.run();

   //Checks if the users input in the Intro class is Y or N
   // If it is equal to 1 then it means the user input is yes
   // And so this If statement will run
   // If the return value is anything but 1 then it will run the else statement
   // Ending the game
   if (intro.ask() == 1){
   	prologue.run();
   	cin >> None;
   }
   else
   {
   	cout << "------------------------------------------------" << endl;
   	cout << "      Thanks for playing I guess" << endl << endl;
   	cout << "      Enter anything to continue" << endl;
   	cout << "------------------------------------------------" << endl;
   	cin >> None;
   };


  



  return 0;
}
