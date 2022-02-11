
	#include <iostream>
	#include <string>
	#include <conio.h>
	// The <windows.h> header adds the command sleep to delay the time of the game
	#include <windows.h>

	using namespace std;

	// Intro class of the game
	class Intro
	{
	   public:
	      void run()
	      {
		// Title of the game
		 cout << "------------------------------------------------"<< endl;
		 cout << " Dating Simulator made by Group 2 in MCS102 BSU" << endl;
			 cout << "                (Tales of the Heart)" << endl;
			 cout << "       Press any key to continue." << endl;
			 cout << "------------------------------------------------"<< endl;
			 // from C can be implemented here holds the output until user press any key
			 getch();
		  }

	      // This method will ask the user to input yes or no if they wanna play 
	      // It will return an Integer value of 1 to 0
	      // If it did not input the right answer it will ask the user again to input a valid one
	      int ask()
	      {
		// This string is just to verify if the player want to play
		string play = "";
		cout << "Do you wanna play? Y/N: ";
		getline(cin, play);
		while (true)
		{
			if (play == "Y" || play == "y" || play == "yes" || play == "Yes")
		    {

				return 1;
				break;
			}
		    else if(play == "N" || play == "n" || play == "No" || play == "no")
		    {
				return 0;
				break;

			}
		    else
		    {
				cout << "Please choose only Y or N: ";
				// This getline command is like the cin command or scanf command
				// But this command read all the strings within the line including spaces
				getline(cin, play);
			};
		};
	      }

	};

	class Prologue{

	   public:
			 // This variable is to store the chosen girl in the prologue
			string girl;
		    // String None is the variable that holds the players chosen option
			string None;
			// String name of the mc
			string name;

	      // First Scene in the Prologue
			int scene1()
			{
				cout << endl;
				cout << "It's my first day of school and Im running pretty late. This happened because I pulled an all-nighter playing a game." << endl;
				// The sleep command came from the header <windows.h> it is use to delay the output in the console
				Sleep(4000);
				cout << endl;
				cout << "I was grinding for a Dark Iron Sword for my game." << endl;
				cout << endl;
				Sleep(3000);
				cout << "Hopefully I won't be late on the first day of school." << endl;
				Sleep(3000);
				cout << endl;
				cout << "*THUMP*" << endl;
				cout << endl;
				Sleep(3000);
				cout << "[Angel]: Hey! Why did you bump into me?" << endl;
				Sleep(3000);
				cout << endl;
				cout << "Responses:\n[1] Sorry *helps her* \n[2] I'm so sorry *helps and escort her*\n[3] … (...)\n[4] *Start Panicking" << endl;
				cout << "Option: ";

				// get line is the same as cin and scanf the difference is that getline reads the whole line
				getline(cin, None);
				cout << endl;

				// While statement to keep repeating until the user chooses a valid option
				while (true)
				{
					// If the users pick the option then this block of code will run
					if (None == "1")
					{
						cout << "1";
						break;
					}
					else if (None == "2")
					{
						Sleep(3000);
						cout << "*While walking her to the classroom*" << endl
							 << endl;
						Sleep(3000);
						cout << "[Angel]: Are you new to this school?" << endl
							 << endl;
						Sleep(3000);
						cout << "[MC]: Yea kind of" << endl;

						cout << endl;
						Sleep(3000);
						cout << "*I Escorted her to her class*" << endl
							 << endl;
						Sleep(3000);
						cout << "[Angel]: Thanks for escorting me\n\n*In class*\n"
							 << endl;
						Sleep(3000);
						cout << "Inner monologue" << endl;
						cout << "[MC]: Damn, that woman I just bumped looked gorgeous.\n"
							 << endl;
						Sleep(3000);
						break;
					}
					else if (None == "3")
					{
						cout << "3";
						break;
					}
					else if (None == "4")
					{
						cout << "4";
						break;
					}
					else
					{
						cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
						getline(cin, None);
					}
				};
			};

			// Second Scene in the Prologue
			// Almost the same as the first scene
			// compose of cout, cin, Sleep, while and if and else statements.
			void scene2()
			{
				Sleep(3000);
				cout << "\n\n";
				cout << "*Bell rings* -- Lunch Break\n"
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "[MC]: *groans* Finally, it's lunch time, time to go to the cafeteria.\n"
					 << endl;
				Sleep(3000);
				cout << "[MC]: *ugh* Eventually, after a while lining up in this line, I can now order." << endl
					 << endl;
				Sleep(3000);
				cout << "Waitress: What do you want?!" << endl
					 << endl;
				Sleep(3000);
				cout << "Inner Monologue" << endl;
				cout << "[MC]: Suddenly, from my back I felt a sudden force.\n"
					 << endl;
				Sleep(2000);
				cout << "*Thump*" << endl
					 << endl;
				Sleep(3000);
				cout << "[Mc]: Stupid bastard bumped me.\n"
					 << endl;
				Sleep(3000);
				cout << "Responses:\n[1] Be angry ( Temporary)\n[2] Let her be\n"
					 << endl;
				cout << "Option: ";
				getline(cin, None);

				while (true)

				{
					if (None == "1")
					{
						Sleep(3000);
						cout << "[???]: Hey what's with you?!\n"
							 << endl;
						Sleep(3000);
						cout << "[MC]: What do you mean? I got here first. There is a line, stupid.\n"
							 << endl;
						Sleep(3000);
						cout << "[???]: So what? I'm hungry, mind your own business.\n"
							 << endl;
						Sleep(3000);
						cout << "[MC]: Do you think you're the only one hungry here?\n"
							 << endl;
						break;
					}
					else if (None == "2")
					{
						break;
					}
					else if (None == "3")
					{
						break;
					}
					else if (None == "4")
					{
						break;
					}
					else
					{
						cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
						getline(cin, None);
					}
				}
	      }

		// Third Scene End of classes

		void scene3()
		{
		    Sleep(3000);
		    cout << "\n\n";
		    cout << "*Bell rings" << endl;
		    cout << "*End of the day\n" << endl;
		    Sleep(3000);
		    cout << "Inner Monologue" << endl;
		    cout << "[MC]: I don't wanna go home; it's not like there's anyone at home anyways.\n" << endl;
		    cout << "*after a while I fell asleep*\n" << endl;
		    Sleep(3000);
		    cout << "[???]: Hey, wake up...\n" << endl;
		    Sleep(3000);
		    cout << "ugdgjaksdjie, who is that?\n" << endl;
		    Sleep(3000);
		    cout << "[???]: Hey kōhai wake up, It's getting late.\n" << endl;
		    Sleep(3000);
		    cout << "[MC]: Ugh, who are you?\n" << endl;
		    Sleep(3000);
		    cout << "Inner Monologue" << endl;
		    cout << "*I can't clearly see her face because I'm still dazed.*\n" << endl;
		    Sleep(3000);
		    cout << "Hi I'm Pascual Cath, I'm the school president. Why are you still in school?\n" << endl;
		    Sleep(3000);
		    cout << "I didn't notice the time and fell asleep.\n" << endl;
		    Sleep(3000);
		    cout << "You need to go home; the school is getting ready to close up. What's you name?\n" << endl;
		    cout << "Name: ";
		    getline (cin, name);
		    cout << "\n";
		    cout << "I'm " << name << ".\n";
		    Sleep(3000);
		    cout << "[Cath]: Ok " << name << " you need to go home now.\n" << endl;
		    Sleep(3000);
		    cout << "*I noticed that she's carrying something big*\n" << endl;
		    Sleep(3000);
		    cout << "Responses:\n[1] Go back to sleep.\n[2] Ask her to sleep beside you.\n[3] Go home by yourself and mind your own business.\n[4] Help her carry that something big\n" << endl;
		    cout << "Option: ";
		    getline(cin, None);

		    while (true)
		    {
			if (None == "1")
			{
			    break;
			}
			else if (None == "2")
			{
			    break;
			}
			else if (None == "3")
			{
				break;
			}
			else if (None == "4")
			{
			    Sleep(3000);
			    cout << "[MC]: Hey, do you need help with that thing?\n" << endl;
			    Sleep(3000);
			    cout << "[Cath]: Yeah... *blush*\n" << endl;
			    Sleep(3000);
			    cout << "Inner Monologue" << endl;
			    cout << "I carried the big thing that she was carrying and accompanied her to the bus stop.\n" << endl;
			    Sleep(3000);
			    cout << "Thanks for helping me, will you also take the bus?\n" << endl;
			    Sleep(3000);
			    cout << "[MC]: Yep...\n" << endl;
			    Sleep(3000);
			    cout << "Inner Monologue" << endl;
						cout << "I can't even make eye contact with her, I'm nervous.\n"
							 << endl;
						Sleep(2000);
						cout << "The bus arrives and I sit behind her.\n" << endl;
			    Sleep(2000);
			    cout << "After 5 minutes the bus stopped and she stood up\n" << endl;
			    Sleep(3000);
			    cout << "[Cath]: Thanks again " << name << ".\n" << endl;
			    Sleep(3000);
			    cout << "[MC]: *hums* uh-.. Y-yeah no problem... *blush*\n" << endl;
			    Sleep(3000);
			    cout << "Inner Monologue" << endl;
						cout << "She went out of the bus stop, but I was too shy to look at ehr.\n"
							 << endl;
						Sleep(3000);
						cout << "End of Prologue\n" << endl;
			    break;
			}
			else
			{

					cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
			};
		    }



	      };
		  void pick()
		  {
			  cout << "\n\n";
			  Sleep(3000);
			  cout << "I've met 3 girls on my first day of school." << endl
				   << endl;
			  Sleep(3000);
			  cout << "If I would ever choose the right girl for me from those 3 girls who should it be?" << endl
				   << endl;
			  Sleep(3000);
			  cout << "[1] Angel \n[2] Cath \n[3] Liah\n\nOption: ";
			  getline(cin, girl);
			  cout << "\n\n";
			  while (true)
			  {
				  if (girl == "1")
				  {
					  Sleep(3000);
					  cout << "I would probably like Angel." << endl;
					  break;
				  }
				  else if (girl == "2")
				  {
					  Sleep(3000);
					  cout << "I would probably like Cath." << endl;
					  break;
				  }
				  else if (girl == "3")
				  {
					  Sleep(3000);
					  cout << "I would probably like Liah." << endl;
					  break;
				  }

				  else
				  {
					  Sleep(3000);
					  cout << "Not an Option\nPlease choose a valid option\n\nOption: " << endl;
					  getline(cin, None);
				  };
			  }
		  };
	};

	// Cath route
	class Cath
	{
	public:
		string play;
		string name;
		string None;
		int headhome;

		Cath(string name)
		{
			name = name;
		};

		void scene1()
		{
			cout << name;

			Sleep(3000);
			cout << "Day 2\n"
				 << endl;
			cout << "Inner Monologue" << endl;
			Sleep(3000);
			cout << "*sigh* I'm late again\n"
				 << endl;
			Sleep(3000);
			cout << "*random background class noise*\n"
				 << endl;
			Sleep(3000);
			cout << "[Teacher]: Mr. " << name << " you're late again. You can't keep getting late. It's literally your 1st week and you're already late twice.\n"
				 << endl;
			cout << "[Teacher]: Please sit down so I can start my class.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Sorry for being late. This won't happen again.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			Sleep(3000);
			cout << "Someone is sitting on the chair I used yesterday. Where do I sit now...\n"
				 << endl;
			Sleep(3000);
			cout << "[Liah]: What are you lookin' at?\n"
				 << endl;
			Sleep(3000);
			cout << "[Teacher]: Sit down already there is a vacant seat at the back.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			Sleep(3000);
			cout << "I sat down and looked on my left and I freakin saw my future through the eyes of the person sitting beside me.\n"
				 << endl;
			Sleep(3000);
			cout << "It's Cath again. I didn't realize yesterday that she's this beautiful since it was dark already.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hello again!\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Uh-hey! Cath, right?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Yes, and you're " << name << " right?\n"
				 << endl;
			Sleep(3000);
			cout << "*Offers to shake hand*\n"
				 << endl;
			Sleep(3000);
			cout << "Responses:\n[1] Shake her hand.\n Inner Monologue: Her hand is so soft, I feel like I don't want to let go.\n[2] Don't shake her hand.\n *Cath felt awkward*\n"
				 << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				// Not final - andrei on docs
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: Thanks for helping me again.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: No problem.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "I'm glad you're safe.\n"
						 << endl;
					cout << "You should stop sleeping in school\n"
						 << endl;
					Sleep(3000);
					cout << "Thanks for your concern. Good thing this school has a great president.\n"
						 << endl;
					Sleep(3000);
					cout << "Haha. Thanks.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
		}
		void scene2()
		{
			Sleep(3000);
			cout << "[MC]: How did you even become a president on the first day of school?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: It's not like I wanted to be a president.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses:\n[1] Why did you run as school president if you don't want it in the first place?\n[2] Why do you not want to be president?\n"
				 << endl;
			cout << "Option: ";

			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: I didn't, the school board and the students just elected me because they saw my past school records and they're amazed.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: My sister was the last school president. She graduated so they replaced her with me.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: I don't even want it. Being the school president makes the teachers think that I'm their personal assistant\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Cath]: Teachers give me orders left and right. They think that I'm sort of their personal assistant.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: They made me carry their belongings and check the test papers. They put so much pressure on me\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "Responses\n[1] *Offer your help again*\n[2] Tell her to shut up and just do her job without complaining\n"
				 << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "[MC]: Our conversation lasted for the whole class. I didn't understand anything in class.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "There was a long awkward silence after that. The silence was louder than whatever our teacher was saying.\n"
						 << endl;
					cout << "I didn't understand anything in class.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Nont an Option\n Please choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "Later that day\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Today was exhausting. I should probably get home by now.\n"
				 << endl;

			Sleep(3000);
			cout << "[???]: Ugh, Why do I have to clean? They should've appointed cleaners by now already.\n"
				 << endl;

			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "[MC]: It's Cath. I should take a look\n"
				 << endl;

			Sleep(3000);
			cout << "[MC]: Hey!\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hi.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Why are you cleaning by yourself?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Our Great Adviser hasn't appointed the daily cleaners yet, so I'm the maid for a while.\n"
				 << endl;

			Sleep(3000);
			cout << "Responses\n[1] Offer Help\n[2] Go home\n[3] ..." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: No thanks, I can handle this, it's just a small room.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: I insist, we could finish faster if you let me help.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Fine, Thank you. I appreciate it... really.\n"
						 << endl;

					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "After a while\n"
						 << endl;

					Sleep(3000);
					cout << "[MC]: That was exhausting. We finally cleaned the whole room.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Yeah, Thank you again.\n"
						 << endl;

					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "We walked home together.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "I can't wait to get home\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[MC]: .... *continues to clean as I watch her*\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not an option\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
		}
		void scene3()
		{
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Damn, I'm so early today. No one is in the class yet.\n"
				 << endl;
			Sleep(3000);
			cout << "*Door Noises\n"
				 << endl;

			Sleep(3000);
			cout << "[Cath]: Good morning!\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Oh hi, good morning.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: You're early today.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yeah. I don't want Mr. Sammy to get angry at me again.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Haha yeah. I hate that guy.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Why?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: He looks at other studnets weirdly. I always noticed him looking at me at the faculty.\n"
				 << endl;

			Sleep(3000);
			cout << "Responses\n[1] That Blockhead.\n[2] He's probably a desperate lonely man." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: I know right? You know what's worse?\n"
						 << endl;
					cout << "[Cath]: He's married!\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Why would he do that then? You should report him or something.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Cath]: No, he's married. I saw a wedding picture in his office.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Why would he do that then? You should report him or something\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not an option\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "We talked for a while. I listened to her all the time. She just keeps ranting about how she despises Sir Sammy.\n"
				 << endl;
			Sleep(3000);
			cout << "*bell rings*" << endl;
			cout << "I didn't realize that the room was already full.\n"
				 << endl;
			Sleep(3000);
			cout << "[Mr.Sammy]: Good morning class.\n"
				 << endl;
			Sleep(3000);
			cout << "[Class]: Goodmorning.\n"
				 << endl;
			Sleep(3000);
			cout << "...\n..." << endl;

			Sleep(3000);
			cout << "[???]: Wake up " << name << " .\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Huh? Ugh...\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey " << name << ". Wake up, the clss is over. You slept the whole time.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Oh, my bad. Did he notice?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: He didn't, you should stop staying up all night, it's not health.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] But when am I gonna play Magic Legends?\n[2] Yeah, I'll try.\n[3] No way." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: You still play that game? are you a child or something?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: You can't tell me what to do, you're not my mom. That game is awesome.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Fine. Go die then.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: That's a bit harsh.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Cath]: Yes. You should really start caring for yourself.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Why?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[Cath]: Fine. Go die then.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: That's a bit harsh.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Well, I don't want you dying. I'll have no one to talk to.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[MC]: Why don't you have befriend our other classmates?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Ehhh. I don't really want to.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Are you some sort of Introbear?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: It's called Introvert. How stupid are you really?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Hahahaha. How could you call me stupid. I'm probably smarter than you.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No way you are.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Let's see. My GPA in highschool is 89.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Pfft. Is that supposed to scare me? Mine's 98.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: What? How can you get it that high? That's impossible. I call cap.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No, it's real. I'll show you my card next time.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Until then I won't believe that you're smarter than me.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: You literally slept in class. How could you learn something?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Shut up.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Haha stupid.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Lunch Break is almost over, we should eat.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I already ate when you were sleeping.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: What? You didn't even wake me up earlier.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I tried to, you're so deep in sleep I can't wake you up.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Ugh.\n"
				 << endl;

			Sleep(3000);
			cout << "Later that day\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Finally school is almost over. I should probably invite Cath to walk home together.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Hey!\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Wanna go home together after this class?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I can't Ms. Joan asked me to help her at the school clinic. Apparently the new first aid kit packs arrived and asked me for help.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Want me to help?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No thanks, Ms. Joan specifically told me to come alone. She doesnt't want many people to be at her clinic.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] Go home\n[2] Wait for her" << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[MC]: Fine.\n"
						 << endl;
					Sleep(3000);
					cout << "*Bell Rung*\n"
						 << endl;
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "I head home for the day\n"
						 << endl;
					Sleep(3000);
					cout << "*Day End*\n"
						 << endl;

					headhome = 1;
					break;
				}
				else if (None == "2")
				{
					headhome = 0;
					Sleep(3000);
					cout << "[MC]: Fine, but I'll wait for you.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Are you sure? it's probably gonna take hours.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Yeah.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Okay, if you insist.\n"
						 << endl;

					Sleep(3000);
					cout << "Inner Monologue." << endl;
					cout << "I waited so long I fell asleep.\n"
						 << endl;
					Sleep(3000);
					cout << "[???]: Hey.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Ugh. Cath? is that you?\n"
						 << endl;
					Sleep(3000);
					cout << "[???]: Wake up.\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: I'm Ms. Joan, are you waiting for Cath?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Yeah, where is she?\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: In the clinic we are almost finished.\n"
						 << endl;
					cout << "[Ms.Joan]: You should come with me.\n"
						 << endl;
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "I followed her.\n"
						 << endl;
					cout << "We talked a bit while we were walking.\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: Why are you waiting for her so late? Are you her boyfriend?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: HEH? NO MA'AM, I'M JUST HER FRIEND. WE LIVE CLOSE TO EACH OTHER SO WE ALWAYS GO HOME TOGETHER.\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: *Laughs* Do you like her?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Ehhhh? I don't know? Maybe?... Stop asking me questions ma'am. Are we there yet?\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: Yeah it's this room.\n"
						 << endl;

					Sleep(3000);
					cout << "*Door SFX*\n"
						 << endl;

					Sleep(3000);
					cout << "[Ms.Joan]: Cath? We're back, I brought your bo-... your friend.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Hey.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Hi!\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: So.. " << name << " when are you gonna answer my question?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: What question?\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: I'm asking " << name << " if he likes-\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: HEY! look at the time, it's already late. I'll help you so we can all go home early\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: *laughs softly\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: What was the question?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: It doesn't matter.\n"
						 << endl;

					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "We finished sorting and arranging the first aid kits. Ms.Joan will distribute them tomorrow.\n"
						 << endl;
					cout << "Cath and I head home safely.\n"
						 << endl;
					Sleep(3000);
					cout << "*Day End*\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
		}
		void scene4()
		{
			Sleep(3000);
			cout << "Many days later\n"
				 << endl;
			Sleep(3000);
			cout << "Day 22\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Two weeks have passed, Cath and I became close friends.\n"
				 << endl;
			if (headhome == 2)
			{
				cout << "I met an amazing teacher. Her name is Ms. Joan. She's pretty sweet." << endl
					 << endl;
			};

			Sleep(3000);
			cout << "*THUMP*\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "A chalk suddenly hit me.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Youch!\n"
				 << endl;
			Sleep(3000);
			cout << "[Mr.Sammy]: Hey! stop day dreaming in my class. Now listen, I'll repeat it once.\n"
				 << endl;
			cout << "[Mr.Sammy]: For this week I want you to do research about any of the famous painters and their art.\n"
				 << endl;
			cout << "[Mr.Sammy]: Then you'll present it in front of the class, you can partner amongst yourselves.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey " << name << "! wanna be my partner?\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] I can't\n[2] Of course!\n"
				 << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[MC]: Sorry, I can't.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Oh. That's ok.\n"
						 << endl;
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "Cath got another partner, they became close friends. A week has passed and I heard they have become lovers.\n"
						 << endl;
					cout << "I should've partnered with her\n"
						 << endl;
					break;
					// not yet done; you have to prompt the user to game over or play again or quit

				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[MC]: Yeah. Of course!\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Really?? Thank you!\n"
						 << endl;
					cout << "[Cath]: I don't know what I'll do if you did not agree. I really don't know anyone in our class.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: So.. what's the plan?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: We need to choose an artist and their art first. Who do you want?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: What about the Great Wave of Kanagawa?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: That's a good one! where do we do this?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: In the library?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: We can't, we need to be somewhere private so we can focus.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: At your house?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: We can't either, my Dad doesn't like visitors.\n"
						 << endl;
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "Her Dad is probably strict.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Yeah, I think my house is ok. I'll ask my mom.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Great, we only have a week. How about tomorrow?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Okay.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}

			Sleep(3000);
			cout << "*Later at Home*\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Mom *calls mom*\n"
				 << endl;
			Sleep(3000);
			cout << "[Abbygail]:  Mom's at work.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Ok sis.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Why do you need mom anyways?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: My friend is coming tomorrow, we'll do some projects. I'm asking if its's okay.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Is it a girl?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Does it matter?\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Yes.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: No, it doesn't.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]:  Yeah it does.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Ugh shut up dork.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Hey you can't say that to your beautiful sister.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: I don't care.\n"
				 << endl;
			Sleep(3000);
			cout << "*gasp in shock*\n"
				 << endl;

			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "I waited for my mom to come home.\n"
				 << endl;
			Sleep(3000);
			cout << "She said it's okay.\n"
				 << endl;
			Sleep(3000);
			cout << "Day End.\n"
				 << endl;
		}
		void scene5()
		{
			Sleep(3000);
			cout << "Day 23 Part 1\n"
				 << endl;
			cout << "*At class*\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey! Are we allowed to do it later?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yeah.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Great! I can't wait.\n"
				 << endl;
			Sleep(3000);
			cout << "[???]: Hey Ms. President.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey?\n"
				 << endl;
			Sleep(3000);
			cout << "[???]: Hi. I'm Von Fischer. Nice to meet you. I've seen you from where I sit these past few weeks and I should tell you that you are awesome.\n"
				 << endl;
			cout << "[Von Fischer]: Can we be friends?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Mhm.\n"
				 << endl;
			Sleep(3000);
			cout << "[Von Fischer]: Great, Oh btw I'm here to pass these papers. Mr.Sammy told us to give you the papers.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Okay.\n"
				 << endl;
			Sleep(3000);
			cout << "[Von Fischer]: Aight! See you later alligator. Haha.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Yeah.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Well would you look at that? Someone is wanting to be friends with you.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Yeah, I guess.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: What? You don't like friends now?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I do, I just don't know how to interact with people.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: How do you interact with me? Am I not people?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hahaha. You're different, I guess.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: What do you mean by different?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]:  It's like you'r-...\n"
				 << endl;
			Sleep(3000);
			cout << "[Ms.Joan]: Hey Cath. May I ask you something?\n"
				 << endl;
			Sleep(3000);
			cout << "[Ms.Joan]: I kinda need help. I'm so sorry if I'm interrupting something.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Don't worry ma'am. I'll help you.\n"
				 << endl;
			Sleep(3000);
			cout << "[Ms.Joan]: Good. I'm sorry " << name << ", I just need to borrow your friend for a while.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] Offer your help\n[2] No worries ma'am\n[3] Get angry" << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Ms.Joan]: Oh you don't need to " << name << ". Cath and I can handdle this. Just finish whatever it is you're currently doing.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Ok ma'am. Bye Cath.\n"
						 << endl;
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "They left.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[MC]: No worries ma'am. We were just talking.\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: What are you two lovebirds talking about?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC and Cath]: Ehhhh?\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: *chuckles*\n"
						 << endl;
					Sleep(3000);
					cout << "[Inner Monologue]" << endl;
					cout << "They left.\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[MC]: Why can't you ask other students instead?!?\n"
						 << endl;
					Sleep(3000);
					cout << "[Ms.Joan]: What?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: I said why can't you ask other students. Why do you always use Cath for these tasks? Cant you see we were busy?\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: No " << name << " it's okay. She asked me properly and I accepte it.\n"
						 << endl;
					break;
					Sleep(3000);
					cout << "Responses\n[1] Continue to get angry\n[2] Calm down" << endl;
					cout << "Option: ";
					getline(cin, None);

					while (true)
					{
						if (None == "1")
						{
							Sleep(3000);
							cout << "[MC]: They can't continue mistreating you! This is wrong.\n"
								 << endl;
							Sleep(3000);
							cout << "[Ms.Joan]: *Cries*\n"
								 << endl;
							Sleep(3000);
							cout << "[Cath]: Would you please just stop.\n"
								 << endl;
							Sleep(3000);
							cout << "[Von Fischer]: Hey what's happening?\n"
								 << endl;
							cout << "[Von Fischer]:  Who made Miss Joan cry?\n"
								 << endl;
							cout << "[Von Fischer]: I can't accept this.\n"
								 << endl;
							Sleep(3000);
							cout << "Inner Monologue" << endl;
							cout << "This got escalated quickly. I shouldn't have done that.\n"
								 << endl;
							cout << "Days later Cath still won't talk to me, and my classmates keep giving me those weird looks. I decided to drop out.\n"
								 << endl;
							break;
							// still don't know how to prompt user to quit, restart etc.
						}
						else if (None == "2")
						{
							Sleep(3000);
							cout << "[MC]: I'm so sorry Miss Joan if I got angry.\n"
								 << endl;
							Sleep(3000);
							cout << "[Ms.Joan]: *smiles* No, it's okay. I totally understand where you're coming from. You're just protecting your friend here.\n"
								 << endl;
							Sleep(3000);
							cout << "[Cath]: Thanks " << name << ".\n"
								 << endl;
							Sleep(3000);
							cout << "[Ms.Joan]: Don't worry, I won't let anything bad happen to your friend.\n"
								 << endl;
							Sleep(3000);
							cout << "Inner Monologue" << endl;
							cout << "They left. I'm glad Ms.Joan treats her students right.\n"
								 << endl;
							break;
						}
					}
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[Von Fischer]: Hey " << name << "!\n"
				 << endl;
			Sleep(3000);
			cout << "[Inner Monologue]" << endl;
			cout << "Oh no is he back? What does he want with me?\n"
				 << endl;
			Sleep(3000);
			cout << "[Von Fischer]: Is Cath your friend?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yes.\n"
				 << endl;
			Sleep(3000);
			cout << "[Von Fischer]: I need your help. You see, I like your friend.\n"
				 << endl;
			cout << "[Von Fischer]: How do you keep your conversation going? When I'm talking to her she's just *Yeah. Mhm. Okay. I see*.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] Maybe you should ask her?\n[2] I don't really know.\n[3] She probably doesn't like you." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Von Fischer]: Yeah. Maybe I should keep asking her.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Von Fischer]: You can't remember what you did to make her close with you?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: I didn't do anything really.\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[Von Fischer]: That's a bummer. Maybe I should keep flirting with her until she likes me.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[Von Fischer]: That's a bummer, maybe I should keep flirting with her until she likes me *Attempting to fist pump me*.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yeah. No problem *Attempting to shake hands*.\n"
				 << endl;
		}
		void scene6()
		{
			Sleep(3000);
			cout << "Day 23 Part 2 The Art\n"
				 << endl;
			Sleep(3000);
			cout << "Later in the Hallway\n"
				 << endl;
			Sleep(3000);
			cout << "[Teacher]: Hey! Why are you loitering here? Aren't you supposed to be going home? Classes are over.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Oh. I'm waiting for my friend.\n"
				 << endl;
			Sleep(3000);
			cout << "[Teacher]: Okay. Stay safe.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "I have been waiting for almost half an hour now. Maybe I should nap.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey!\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Hey, you startled me.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hehe sorry, so let's go?\n"
				 << endl;

			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "*We walked home*\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Hey. If I remember corrently this is the first time you'll see my house.\n"
				 << endl;
			cout << "[MC]: I'm so sorry it's not so clean because no one's home anyways. It's just me and my sister.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Where's your parents?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: My dad is abroad, my mom is always at work and she usually goes home very late.\n"
				 << endl;

			Sleep(3000);
			cout << "*knocks on door*\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: WHO IS IT? (shouts from the inside)\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: It's me.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: WHO ARE YOU?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Abby, oopen the door, it's me " << name << ".\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: WAIT.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: I'm so sorry she's my sister.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No it's okay. I know exactly what you feel. I have a sister too.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: *opens the door ajar* Who is it?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Why do you keep asking. It's me.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: What is it a sin now to be cautious?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Just let us in already.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Who's that girl? Is she your girlfriend? *smug*\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: N-no. Let us in already.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby] : *Sigh* Ok Fine.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]:  Let's go to my room.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]:  Okay. Thanks for letting me in.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: You have a nice clean room.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Thanks *breathes excessively*\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Damn, a girl is in my room. I cleaned my room earlier adn I successfully hid all my personal stash.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: So we need to present something about The Great Wave. You recommend that. Do you know anything about it?\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] It's from the Edo Period\n[2] It's made by katsushika Hokusai\n[3] It's water." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: Maybe we can discuss what happend in the Edo period and the history of the painting.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: That'll be easy. I can certainly do that part.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Cath]: Maybe we can talk about him and the reason for him to draw the Great Wave.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: That'll be easy. I can certainly do that part.\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[Cath]: You're hopeless stupid.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Ouch.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Haha. Maybe you should study it first. Do you have a computer or something?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: I do.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[MC]: Now we need to show it in class. If I remember corrently we have a printer so I'll just print it.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No, don't, it's better if we recreate it.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: But I can't draw.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I'll do it.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Are you sure?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Yeah, just focus on your essay.\n"
				 << endl;

			Sleep(3000);
			cout << "After a while\n"
				 << endl;

			Sleep(3000);
			cout << "[Cath]: Yay, I'm finished.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Let me see.\n"
				 << endl;
			Sleep(3000);
			cout << "...\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Beautiful. This looks like it was painted by God himself. Wait a minute, are you a Goddess?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: *smiles* Thanks. I really appreciate your feedback. I love getting feedback about my work. It makes me feel like you're interested in my art.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: I am interested in your art. You never told me that you're an artist.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: I'm not Proud being an artist.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: But why?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Well...my dad told me that hobbies aren't as important as my career. Het told me to focus on studying, and he keeps-..\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: HEY! time to eat *smug*. Oh did I interrupt something important?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: No, not really. " << name << " lets eat.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Yeah bro let's eat, the food would get cold.\n"
				 << endl;

			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "We ate dinner, Abby keeps asking embarrassing questions. Cath is so smart she's able to answer them safely.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Hey it's almost 8 o'clock. You should let your friend go home, her parents might worry\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Aight.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Thanks for having me in, and thank you for the meal. See you " << name << " tomorrow.\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Wait. Are you just walking home?\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: I can drive you there.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Thanks.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "I didn't get to hear Cath's story, maybe I can ask her tomorrow.\n"
				 << endl;
			Sleep(3000);
			cout << "Day end.\n"
				 << endl;

			Sleep(3000);
			cout << "Day 24 The Project\n"
				 << endl;
			cout << "School.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey! Did you finish the essay?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: No. I'm still halfway through.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: So your house again? Tonight?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yes.\n"
				 << endl;
			Sleep(3000);
			cout << "*Ringtone*\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Excuse me.\n"
				 << endl;

			Sleep(3000);
			cout << "[MC]: Hello?\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Hey bro.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: What?\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Don't get home early tonight.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Why?\n"
				 << endl;
			Sleep(3000);
			cout << "[Abby]: Stop asking questions. I'm having my friends over. I don't want them seeing you.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] Fine.\n[2] But we gonna do a project tonight" << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Abby]: Good.\n"
						 << endl;
					Sleep(3000);
					cout << "*Hangs up*\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: What a snitch\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Abby]: I don't care, can't you just do that at her house or something?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Can't.\n"
						 << endl;
					Sleep(3000);
					cout << "[Abby]: Ugh, not my problem.\n"
						 << endl;
					Sleep(3000);
					cout << "*Hangs up*\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: What a snitch.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[MC]: Hey Cath.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Yeah?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: I-uh, we can't do research at my house tonight.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: That's too bad, should we just skip tonight?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: No, I was hoping we can do it at your house?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Okay, but keep in mind that my father doesn't really like visitors.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "I'm getting nervous, her father is probably strict\n"
				 << endl;
			Sleep(3000);
			cout << "Later that day at Cath's House.\n"
				 << endl;
			Sleep(3000);
			cout << "*Cath knocks on the door and a big man opened it*\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Dad, can we come in? We just gonna do some school stuff.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath's Dad]: O-of course.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Thanks for letting us in.\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: Greetings, I'm Jerome. Cath's father.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Hello Mr.Pascual, I'm " << name << ".\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: Oh, you're " << name << "? I've heard things about you.\n"
				 << endl;
			Sleep(3000);
			cout << "...\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Hey, let's go to the balcony. It'll be nice and calm there. Perfect for thinking.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			Sleep(3000);
			cout << "We headed to the balcony.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Can I read what you wrote?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Of course.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: The Great Wave or The Wave, is a woodblock print by the Japanese ukiyo-e artist Hokusai." << endl;
			cout << "[Cath]: It was published sometime between 1829 and 1833 in the late Edo period as the first print in Hokusai's series Thirty-six Views of Mount Fuji.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: The image depicts an enormous wave threatening three boats off the coust in the Sagami Bay while Mount Fuji rises in the background." << endl;
			cout << "[Cath]: Sometimes assumed to be a tsunami, the wave is more likely to be a large rogue wave...\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Watching her read makes my heart thump. It feels weird, I should say something.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] You have a beautiful voice\n[2] *Don't say anything*" << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Cath]: *stops reading* *blushes* Th-thanks...\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: You should read it in front of the class.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: What? No, you should do it. I can't.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: I refuse, you should do it, trust me.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: What if people...\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Shushhhh... I'm sure everyone will like it.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Everyone will hear you angelic voice.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: *blushes* Do you think so? Maybe...Hmmm..Yeah, ok I'll do it..\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "She eventually finished reading.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Maybe you should read it in front of the class.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: I don't want to.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: You just need confidence. I think you can do it.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: Fine if that's what you want.\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Not a response\nPlease choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
			Sleep(3000);
			cout << "[MC]: I'm looking forward to it.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: *Achoo!*\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: Oh no my daughter, It's getting cold. You two should head inside.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "WHAT?! He was listening to the whole thing...\n"
				 << endl;
			Sleep(3000);
			cout << "We headed to the living room. Mr.Pascual is watching us, I continued writing and didn't talk because I felt akward. I need to ventilate.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: May I use the restroom?\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: I'll escort you to the restroom.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Th-thanks.\n"
				 << endl;
			Sleep(3000);
			cout << "The moment that they got out of Cath's vision Mr.Pascual said something to you.\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: H-hey kid, do you like my daughter?\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] W-what?\n[2] No!!!\n[3] ..." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Jerome]: It's okay kid, I know you like my daughter. I think you're a good person for her and I want the best for my daughter.\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					Sleep(3000);
					cout << "[Jerome]: You don't need to lie. It's okay, I think you're a good person and my daughter seems like she likes you.\n"
						 << endl;
					break;
				}
				else if (None == "3")
				{
					Sleep(3000);
					cout << "[Jerome]: Don't be shy, I know you like her and she seems to like you as well. You're a good kid.\n"
						 << endl;
					break;
				}
			}
			Sleep(3000);
			cout << "[MC]: Th-thanks? I guess.\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: She always talks about you. " << name << " here, " << name << " there.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Do you really think that she likes me?\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: You should ask her yourself, you have my approval kid.\n"
				 << endl;
			Sleep(3000);
			cout << "[Jerome]: ...There's the restroom, you should get back there quickly. I'm just gonna leave you too alone.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "Wow, Mr.Pascual is a good person. I thought he was strict because Cath said she doesn't like visitors, but it's because he's just a shy dude.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: You're back.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses\n[1] You missed me?\n[2] ..." << endl;
			cout << "Option: ";
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "Inner Monologue" << endl;
					cout << "God, that was awkward. I shouldn't have said that.\n"
						 << endl;
					Sleep(3000);
					cout << "[Cath]: I-i did.\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: *Speechless*\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					break;
				}
			}
			Sleep(3000);
			cout << "[MC]: So where were we?\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: We're almost done.\n"
				 << endl;
			Sleep(3000);
			cout << "Inner Monologue" << endl;
			cout << "I should ask something about her, She didn't get to say it because Abby interrupted us.\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: So uhm.. yesterday you're saying something about why you can't persue being an artist.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Oh... you want me to tell you that?\n"
				 << endl;
			Sleep(3000);
			cout << "[MC]: Yes.\n"
				 << endl;
			Sleep(3000);
			cout << "[Cath]: Well when I was a kid about 4 years old...\n"
				 << endl;

			cout << "Cath POV\n\n";
			Sleep(3000);
			cout << "Cath: Mom, look I draw you, and dad, and me and, Remy.\n\n";
			Sleep(3000);
			cout << "Mom: Wow, that's great. *smiles*\n\n";
			Sleep(3000);
			cout << "Cath: Thanks mom. I love your reaction. It makes me feel like you appreciate my art.\n\n";
			Sleep(3000);
			cout << "Mom: I do Cath. You have such great talent.\n\n";
			Sleep(3000);
			cout << "Cath Narrating: Mom was the first person to recognize my talent. When I was in grade school, Mom would make me enter art competitions.\n\n";
			Sleep(3000);
			cout << "Host: And the winner for this year's Art contest is… Cathleah Pascual.\n\n";
			Sleep(3000);
			cout << "Mom: Yay, you did it. You won.\n\n";
			Sleep(3000);
			cout << "Cath: Thanks mom. I can't do it without you supporting me.\n\n";
			Sleep(3000);
			cout << "Cath Narrating: But then… 3 years ago…\n\n";
			Sleep(3000);
			cout << "Remy: DAD!!! Something is happening to mom.\n\n";
			Sleep(3000);
			cout << "Dad: We need to take her to the hospital in a hurry.\n\n";
			Sleep(3000);
			cout << "Cath Narrating: We got in the car.\n\n";
			Sleep(3000);
			cout << "Cath: Mom? mom… Are you ok mom??? *cries*\n\n";
			Sleep(3000);
			cout << "Cath Narrating: Dad, drove us to the hospital. I've never seen him so worked up before. He was probably as scared as us.\n\n";
			Sleep(3000);
			cout << "Cath Narrating: We got to the Hospital. The doctors took mom. They put her in the ER… We waited for hours to hear some news about her… It took the doctors 10 hours to get back. We didn't get any sleep.\n\n";
			Sleep(3000);
			cout << "Doctor : Are you Luna's family?\n\n";
			Sleep(3000);
			cout << "Dad: Yes, I am her husband. Is there any news?\n\n";
			Sleep(3000);
			cout << "Doctor: Sir. Your wife is diagnosed with a rare disease. Unfortunately we can't cure her. The capacity of this Hospital isn't enough. We could send her to Canada where they research this disease. She would get more chances of survival in Canada.\n\n";
			Sleep(3000);
			cout << "Dad: I'll do anything for her. I'll do anything for my love.\n\n";
			Sleep(3000);
			cout << "Doctor: Unfortunately, it would probably cost a lot of money. \n\n";
			Sleep(3000);
			cout << "Luna: Dad, Is mom gonna be okay?\n\n";
			Sleep(3000);
			cout << "Dad: Yes, Honey. Don't worry, everything's gonna be fine.\n\n";
			Sleep(3000);
			cout << "Cath Narrating: They send mom to canada. Dad insisted on staying with us. So my aunt went to Canada with her. It costs us a lot of money. Her maintenance is still costing us until today…\n\n";
			Sleep(3000);
			cout << "My father worked two jobs. My sister became a working student. Now she's working full time at the Rhonson's Mall. They told me to study. I insisted on working as well but my dad hated the idea… I pursued studying. I stopped making art. Because I was busy studying. But mostly because I make art for mom, and she's not here.\n\n";

			Sleep(3000);
			cout << "End of backstory\n\n";

			Sleep(3000);
			cout << "MC: You should continue making art.\n\n";

			Sleep(3000);
			cout << "Cath: Why?\n\n";

			Sleep(3000);
			cout << "MC: So when your Mom came back. She would see more of your beautiful works.\n\n";

			Sleep(3000);
			cout << "Cath: Hmmm… Thanks MC… It feels great to let out my feelings.\n\n";

			Sleep(3000);
			cout << "MC: I want to tell you something.\n\n";

			Sleep(3000);
			cout << "Cath: What is it?\n\n";

			Sleep(3000);
			cout << "Choices\n[1] Say I like you\n[2] Say Nevermind";

			string asd;
			getline(cin, asd);
			while(true)
			{
				if(asd == "1")
				{

				}
				else if(asd == "2")
				{

				}

			}

			Sleep(3000);
			cout << "MC: Nice to meet you, I am MC.\n\n";
			Sleep(3000);
			cout << "Remy: Oh you're MC… I've heard great things about you.\n\n";
			Sleep(3000);
			cout << "Inner: Her father said that to me as well. Cath was probably always telling them about me. \n\n";	
			Sleep(3000);
			cout << "Remy: Okay. I'll leave you two now. I'll go to my room.\n\n";
			Sleep(3000);
			cout << "A mment ago\n\n";
			Sleep(3000);
			cout << "Cath: What was it you're gonna ask me?\n\n";
			Sleep(3000);
			cout << "MC: Oh. I was gonna ask you if the essay is done.\n\n";
			Sleep(3000);
			cout << "Cath: Yes it is.\n\n";
			Sleep(3000);
			cout << "MC: Great, I should probably get home.\n\n";
			Sleep(3000);
			cout << "Jerome: Wait. We were gonna eat dinner. You should join us.\n\n";
			Sleep(3000);
			cout << "Inner: Might as well eat. Abby is probably still partying.\n\n";
			Sleep(3000);
			cout << "MC: Thank you sir.\n\n";
			Sleep(3000);
			cout << " Dinner at Pascual residence\n\n";
			Sleep(3000);
			cout << "Jerome: Cath. How was school?\n\n";
			Sleep(3000);
			cout << "Cath: It was fine dad. MC is helping me with our project.\n\n";
			Sleep(3000);
			cout << "Jerome: Good.\n\n";
			Sleep(3000);
			cout << "*It started raining* //plot convenience rain\n\n";
			Sleep(3000);
			cout << "Remy: Oh no it started raining. MC you're gonna get sick if you get home.\n\n";
			Sleep(3000);
			cout << "Jerome: I'm so sorry we don't have a car. I can't drive you home. You should probably stay with us until the rain stops.\n\n";
			Sleep(3000);
			cout << "MC: It's okay sir.\n\n";
			Sleep(3000);
			cout <<" Later\n\n";
			Sleep(3000);
			cout << "Inner: Rain still won't stop and it's getting stronger.\n\n";
			Sleep(3000);
			cout << "Cath: MC, It's getting late. You should sleep here with us.\n\n";
			Sleep(3000);
			cout << "Jerome: You could use my room. I'll just sleep on the couch.\n\n";
			Sleep(3000);
			cout << "MC: No sir. I'll sleep on the couch. You already did so much for me. I can't thank you enough.\n\n";
			Sleep(3000);
			cout << "Inner: I slept.\n\n";
			Sleep(3000);
			cout << "It was the middle of the night. The door in Cath's room suddenly opened. A beautiful lady walked out of the room.\n\n";
			Sleep(3000);
			cout << "Cath: Hey MC. Are you awake? *she whispers*\n\n";
			Sleep(3000);
			cout << "MC: Huh??? \n\n";
			Sleep(3000);
			cout << "Cath: I'm so sorry. I was checking if you're awake.\n\n";
			Sleep(3000);
			cout << "MC: Well, I am now. What do you want?\n\n";
			Sleep(3000);
			cout << "Cath: Nothing. Can I sit beside you?\n\n";
			Sleep(3000);
			cout << "MC: Of course.\n\n";
			Sleep(3000);
			cout << "Cath: I just can't sleep. I'm thinking about so many things right now. My mom, meeting assemblies, you, school wor-\n\n";
			Sleep(3000);
			cout << "MC: Wait what? You're thinking about me?\n\n";
			Sleep(3000);
			cout << "Cath: Wait. Did I say that? I mean yes I did. *she's panicking* Because you're always helping me. And I'm thinking of a way to thank you. \n\n";
			Sleep(3000);
			cout << "MC: You don't need to thank me. Being your friend is enough already. I'm so grateful that you became my friend.\n\n";
			Sleep(3000);
			cout << "Cath: *Yawns* Same. I feel so comfortable when I'm with you.\n\n";
			Sleep(3000);
			cout << "MC: Cath. Can I tell you something?\n\n";
			Sleep(3000);
			cout << "I love you… \n\n";
			Sleep(3000);
			cout << "Cath: … *She got closer to me*\n\n";
			Sleep(3000);
			cout << "MC: Cath?\n\n";
			Sleep(3000);
			cout << "Cath: Zzzzz\n\n";
			Sleep(3000);
			cout << "Inner: I didn't realize that she fell asleep on my shoulder. She probably didn't hear my confession. I was just sitting there awkwardly while she's asleep. I don't know what to do, I don't want to wake her up either.\n\n";
			Sleep(3000);
			cout << "\n\n";
		}

		void game_over()
		{
			cout << "Game over shit\n[1] Play again\n[2] Exit\n";
			getline(cin, play);
		};
	};

	// Angel Route
	class Angel
	{
	public:
		string name;
		string None;
		Angel(string name)
		{
			name = name;
		};

		void scene1()
		{
			cout << name;
			Sleep(3000);
			cout << "*Aurora*" << endl;
			cout << "I was walking up the stairs when I saw this slow girl climbing up the stairs for some reason.\n"
				 << endl;

			Sleep(3000);
			cout << "*Lunch Break*\n"
				 << endl;

			Sleep(3000);
			cout << "I was going to the cafeteria then I saw this sluggish girl drop her books on the way up the stairs.\n"
				 << endl;
			Sleep(3000);
			cout << "Responses:\n[1] Help her *Looks at the girl* Are you okay?\n[2] Ignore her *walks like nothing happened*\n\nOption: " << endl;
			getline(cin, None);

			while (true)
			{
				if (None == "1")
				{
					Sleep(3000);
					cout << "[Angel]: Thank you, uhm *surprised* ..oh it's you kohai! What's your name again?\n"
						 << endl;
					Sleep(3000);
					cout << "[MC]: Oh didn't notice it's you again. I'm " << name << " from 1-A." << endl;
					Sleep(3000);
					cout << "[Angel]: Thank you again for helping me the other day. I forgot to introduce myself.\n"
						 << endl;
					cout << "[Angel]: I'm Angel Walton from 2-A\n"
						 << endl;
					break;
				}
				else if (None == "2")
				{
					break;
				}
				else
				{
					cout << "Not an Option\n Please choose a valid option\n\nOption: " << endl;
					getline(cin, None);
				}
			}
		}
	};

	class Liah
	{
	public:
		string name;
		Liah(string name)
		{
			name = name;
		};

		void scene1()
		{
			cout << name;
		}
	};

	int main()
	{
	   int None;
	   string name = "";
	   Intro intro;
	   Prologue prologue;
	   Angel angel(name);
	   Cath cath(name);
	   Liah liah(name);

	   intro.run();
	    // Checks if the user wants to play
	   if(intro.ask() == 1)
	   {

		   prologue.scene1();
		   prologue.scene2();
		   prologue.scene3();
		   prologue.pick();

		   name = prologue.name;

		   if(prologue.girl == "1")
		   {   
		    do
		    {
			    cath.scene1();
			    cath.scene2();
			    cath.scene3();
			    cath.scene4();
			    cath.scene5();
			    cath.scene6();
		    } while (cath.play == "1");


		   }
		   else if(prologue.girl == "2")
		   {
		   angel.scene1();

		   }

		   else if(prologue.girl == "3")
		   {


		   }




		   cin >> None;
	   }
	    // IF the user doesn't want to play then run this
	   else
	   {
	    cout << "------------------------------------------------" << endl;
		cout << "      Thanks for playing I guess" << endl << endl;
		cout << "      Enter anything to continue" << endl;
		cout << "------------------------------------------------" << endl;
		cin >> None;
	   }

	  return 0;
	}
