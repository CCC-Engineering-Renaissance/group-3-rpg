/***********************************************************************
__   __            _          _   _                                 _ 
\ \ / /__  _   _  | |__   ___| |_| |_ ___ _ __   _ __ ___  __ _  __| |
 \ V / _ \| | | | | '_ \ / _ \ __| __/ _ \ '__| | '__/ _ \/ _` |/ _` |
  | | (_) | |_| | | |_) |  __/ |_| ||  __/ |    | | |  __/ (_| | (_| |
  |_|\___/ \__,_| |_.__/ \___|\__|\__\___|_|    |_|  \___|\__,_|\__,_|
                                                                      
                                                            _       
 _ __ ___  _   _    ___ ___  _ __ ___  _ __ ___   ___ _ __ | |_ ___ 
| '_ ` _ \| | | |  / __/ _ \| '_ ` _ \| '_ ` _ \ / _ \ '_ \| __/ __|
| | | | | | |_| | | (_| (_) | | | | | | | | | | |  __/ | | | |_\__ \
|_| |_| |_|\__, |  \___\___/|_| |_| |_|_| |_| |_|\___|_| |_|\__|___/
           |___/                                                    
************************************************************************/

#include "colors.h" // If you want to make your map look pretty and use colors :)
#include <iostream>
#include <string>
#include <vector>
// The <string> and <vector> libraries are used to create the map
#include <iomanip>
#include <cstdlib>
using namespace std; 

void Mapoutput (int x_axis, int y_axis);

int main(){
	bool w;  
	int numberone; 
	int numbertwo; 
	int numberthree; 
	int numberfour; 
	int numberfive; 
	int numbersix; 
	int numberseven; 
	int numbereight; 
	int numbernine;
	int firecount = 0; 
	int forestcount = 0; 
	int watercount = 0; 
	int darkcount = 0;
	int lightcount = 0; 
	set_alternate_window(true);  
	cout << BOLDGREEN << "Hello there.\n"; 
	cout << CYAN << "I see you have traveled far to be here. Welcome to Dunmuir's hatching grounds.\n";
	cout << RED << "In order to join the famed riders, you must pass a test. Would you like to continue? (1 for yes, 0 for no)\n"; 
	cin >> w;
	while (w == 1) { 
		cout << BOLDMAGENTA << "You and your friends receive a million dollars to go on a dream vacation. Where are you persuading your friends to travel to?\n";
		cout << "1. Skiing in the Alps! Who doesn’t love the rush of wind whilst speeding down an icy slope?\n";
		cout << "2. A late-night tea party in Paris, where you can all enjoy decadent desserts and a beautiful view of the city.\n";
		cout << "3. A trip to the museum! You love to see all the artifacts and grab pamphlets on your way out.\n"; 
		cout << "4. A backpacking trip, so you can stare into space and sit in silence. You might enjoy a good book.\n";
		cout << "5. You want to travel the whole world anyhow, so you don’t have a particular preference.\n";
		// The cout statements output the question and individual answers for the test. 
		cin >> numberone; 
		// The cin allows the user to answer with a number 1-5.
		if (cin and numberone < 6 and numberone > 0) {
			break; 
		}
		//This particular if statement bulletproofs input to only numbers between 1 and 5 that are of the type int. 
	}
	switch(numberone) {
		case 1: 
			firecount++;
			break;  
		case 2:
			forestcount++;
			break; 
		case 3:
			watercount++;
			break; 
		case 4:
			darkcount++;
			break;  
		case 5: 
			lightcount++;
			break;
	}
	// The cases for the switch statement help us to determine which dragon the player will recieve. 
	// Each case adds one to the number of answers for a certain type of dragon depending on the number answered. The largest number at the end determines what dragon the player recieves. 
	while (w == 1) {
		cout << BOLDMAGENTA << "What is one thing you are scared to lose the most?\n";
		cout << "1. Freedom.\n"; 
		cout << "2. Friendship.\n";  
		cout << "3. Happiness.\n"; 
		cout << "4. Intelligence.\n";  
		cout << "5. Hope.\n";  
		cin >> numbertwo;
		if (cin and numbertwo < 6 and numbertwo > 0) {
			break; 
		}
	}
	switch(numbertwo) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}


	while (w == 1) {
		cout << BOLDCYAN << "What is your biggest strength?\n"; 
		cout << "1. My sociability.\n"; 
		cout << "2. My empathy.\n";
		cout << "3. My athleticism.\n"; 
		cout << "4. My cleverness.\n";  
		cout << "5. My decision-making skills.\n"; 
		cin >> numberthree; 
		if (cin and numberthree < 6 and numberthree > 0) {
			break; 
		}
	}
	switch(numberthree) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}


	while (w == 1) {
		cout << BOLDGREEN << "You are driving and spot a kitten on the median of a 2 lane road. What do you do?\n";
		cout << "1. You run directly into traffic. That kitten’s life depends on you.\n";
		cout << "2. You don’t drive. You park your bike on the side of the street and run over to save the kitten. You take it home and decide to keep it.\n";
		cout << "3. You befriend it, take it home, and introduce it to your dog, Max. They love taking baths.\n"; 
		cout << "4. You pick up the kitten and move it away from the road.\n"; 
		cout << "5. Stop and pick up the kitten. You bring it to a vet clinic, where you proceed to notify the proper authorities.\n";
		cin >> numberfour; 
		if (cin and numberfour < 6 and numberfour > 0) {
			break; 
		}
	}
	switch(numberfour) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}

	while (w == 1) {
		cout << BOLDRED << "Your friend is in a fight happening in the middle of your school, how do you react?\n";
		cout << "1. You roundhouse kick your friend's opponent, Bruce Lee style.\n";  
		cout << "2. You hit the opponent with a tree branch.\n"; 
		cout << "3. You run to your friend's side and square up.\n";
		cout << "4. You bet money on your friend.\n"; 
		cout << "5. You yap with your teachers, you didn’t know there was a fight. (You are a teacher’s pet).\n";
		cin >> numberfive; 
		if (cin and numberfive < 6 and numberfive > 0) {
			break; 
		}
	}
	switch(numberfive) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}

	while (w == 1) {
		cout << BOLDBLUE << "There's an active shooter, what do you do?\n";
		cout << "1. Sprint at them with a fire extinguisher.\n";  
		cout << "2. You hide in a tree where you meet a squirrel named Little Johnny.\n"; 
		cout << "3. Help the others, then collaborate with the Police to take the shooter down.\n";
		cout << "4. Hide until he walks past, then you attack while his back is turned.\n"; 
		cout << "5. Stay inside, barricade the door, and stand guard. You will not let anyone get hurt on your watch. (You are a teacher’s pet).\n";
		cin >> numbersix; 
		if (cin and numbersix < 6 and numbersix > 0) {
			break; 
		}
	}
	switch(numbersix) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}

	while (w == 1) {
		cout << BOLDGREEN << "Who are you when you’re by yourself?\n";
		cout << "1. Thinking of what to do next.\n";  
		cout << "2. Appreciating what's around you.\n"; 
		cout << "3. Going with the flow.\n";
		cout << "4. Planning your future.\n"; 
		cout << "5. Thinking of the people close to you.\n";
		cin >> numberseven; 
		if (cin and numberseven < 6 and numberseven > 0) {
			break; 
		}
	}
	switch(numberseven) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}
	while (w == 1) {
		cout << BOLDCYAN << "You have the ability to study any of the following subjects in college and make the same salary (approximately $1 million per year). Which do you choose?\n";
		cout << "1. Criminology or fire sciences.\n";
		cout << "2. Environmental science and conservation.\n"; 
		cout << "3. Business and statistics.\n";
		cout << "4. Physics and history.\n";
		cout << "5. Medicine or veterinary science.\n";  

		cin >> numbereight;
		if (cin and numbereight < 6 and numbereight > 0) {
			break; 
		}
	}
	switch(numbereight) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}
	while (w == 1) {	 
		cout << BOLDGREEN << "What is your favorite movie genre?\n"; 
		cout << "1. Action and horror movies.\n"; 
		cout << "2. Comedies.\n"; 
		cout << "3. I prefer TV shows.\n"; 
		cout << "4. Science fiction and Fantasy.\n";
		cout << "5. Documentaries.\n"; 
		cin >> numbernine; 
		if (cin and numbernine < 6 and numbernine > 0) {
			break; 
		}
	}
	switch(numberone) {
		case 1:
			firecount++;
			break;
		case 2:
			forestcount++;
			break;
		case 3:
			watercount++;
			break;
		case 4:
			darkcount++;
			break;
		case 5:
			lightcount++;
			break;
	}

	if (firecount > forestcount and firecount > watercount and firecount > darkcount and firecount > lightcount) 
		cout << BOLDRED << "Congratulations. You have been chosen by the fire dragon.\n"; 
	else if (forestcount > firecount and forestcount > watercount and forestcount > darkcount and forestcount > lightcount)
		cout << BOLDGREEN << "Congratulations. You have been chosen by the forest dragon.\n"; 
	else if (watercount > firecount and watercount > forestcount and watercount > lightcount and watercount > darkcount)
		cout << BOLDBLUE << "Congratulations. You have been chosen by the water dragon.\n";
	else if (darkcount > firecount and darkcount > forestcount and darkcount > watercount and darkcount > lightcount)
		cout << "Congratulations. You have been chosen by the dark dragon.\n";
	else if (lightcount > firecount and lightcount > forestcount and lightcount > darkcount and lightcount > watercount) 
		cout << "Congratulations. You have been chosen by the light dragon.\n";
	else
		cout << "Error. Lizard? Try again.\n"; 
}

void Mapoutput(int x_axis, int y_axis){
	vector <string> Map = {
		"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *",
		"*    =|=|==========|===========|======================|==============|========================|=|=    *",
		"*     | |          |           |         :)           |              |                        | |     *",
		"*     | |__________|___________|__________|___________|______________|________________________| |     *",
		"*     | |   FOOD   |   WATER   |     DRAGON FEED      |     ARMOR    |    MEDICAL SUPPLIES    | |     *",
		"*     | |__________|___________|______________________|______________|________________________| |     *",
		"*                 __________________________________________________________________                  *",
		"*               /                                                                   \\                *",
		"*              /                                                               0     \\               *",
		"*             /                                                              ;=#=;    \\              *",
		"*            |                              _______________                  | | |       |            *",
		"*            |                             /               \\                 / \\        |           *",
		"*             \\                           /                 \\                          /            *",
		"*              \\                         /                   \\                        /             *",
		"*               |                       /                     \\                      |               *",
		"*               |                      |                       |                     |                *",
		"*              /                        \\                     /                       \\             *",
		"*             /                          \\                   /                         \\            *",
		"*            |                            \\                 /                           |            *",
		"*            |__________                   \\_______________/                  __________|            *",
		"*                       \\            0                                       /                       *",
		"*                        \\         ;=#=;                                    /                        *",
		"*                         \\        | | |                                   /                         *",
		"*                          \\____    / \\                              _____/                         *",
		"*                                \\_____                        _____/                                 *",
		"*    / - \\                             \\                      /                              / - \\    *",
		"*   /     \\                             \\                    /                              /     \\   *",
		"*  /       \\                             \\                  /                              /       \\  *",
		"* /  _____  \\                           / \\                /\\                            /  _____  \\ *",
		"*/|  |   |  |\\                         /   \\              /  \\                          /|  |   |  |\\*",
		"* |  |   |  |                         /     \\____________/    \\                           |  |   |  | *",
		"* |  -----  |                        /      /            \\     \\                          |  -----  | *",
		"* |_________|_______________________/______/              \\_____\\_________________________|_________| *",
		"*     ___      ___      ___      ___      |                |      ___      ___      ___      ___      *",
		"*    |   |    |   |    |   |    |   |     |                |     |   |    |   |    |   |    |   |     *",
		"*    |___|    |___|    |___|    |___|     | 99999999999999 |     |___|    |___|    |___|    |___|     *",
		"*                                         |                |                                          *",
		"* _______________________________________ |                |_________________________________________ *",
		"*                                          \\             /                                           *",
		"*                                           |            |                                            *",
		"*                                           |            |                                            *",
		"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"
	};

	char character = 'O';
	//Map.at(40).at(50) = character;

	for (int i = 0; i < Map.size(); i++) {
		cout << Map.at(i) << endl;
	}
	else return 0; // DSD: This is literally pointless. else's only go with if's
				   // This is where all your logic will go
				   //  while (true){
				   // TODO: Get user input
	char input{}; //DSD: Julian, what the hecking heckles were you having them do with the curly braces?
	int y_axis{}; 
	int x_axis{};
	char character = 'O'; //DSD Redeclaration of character. An error. Also, why.


	while (input != 'm') { //DSD What does m represent?
		input = quick_read();
		if (input == 'w') {
			y_axis = y_axis++; //DSD Carefully consider where the origin is in your above map...
		}
		if (input == 's') {
			y_axis = y_axis--;
		}
		if (input == 'd') {
			x_axis = x_axis++;
		}
		if (input == 'a') {
			x_axis = x_axis--;
		}
		// Map size is 102 x 42 //DSD Why are these down here and not up by the map?
		// Playable map size is 100 x 40

		//	The starting point of the character is actual_map.at(100).at(50)


		// TODO: Output map
		set_raw_mode(false);
	}
	//system("cls"); //DSD You can use a function in colors.h to do this same thing, and more effectively
}
