#include "colors.h" // If you want to make your map look pretty and use colors :)
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std; 


int main(){
  vector<char> map; // You can use a 2D vector if you'd like, but it's a lot better to emulate a 2D vector with a 1D one.
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
  cout << BOLDGREEN << "Hello Rider.\n"; 
  cout << CYAN << "I see you have traveled far to be here. Welcome to Dunmuir's hatching grounds.\n";
  cout << RED << "In order to join the famed riders, you must pass a test. Would you like to continue? (1 for yes, 0 for no)\n"; 
  cin >> w;
  while (w == 1) {
	set_alternate_window(true); 
	cout << BOLDMAGENTA << "You and your friends receive a million dollars to go on a dream vacation. Where are you persuading your friends to travel to?\n";
  	cout << "1. Skiing in the Alps! Who doesn’t love the rush of wind whilst speeding down an icy slope?\n";
  	cout << "2. A late-night tea party in Paris, where you can all enjoy decadent desserts and a beautiful view of the city.\n";
  	cout << "3. A backpacking trip, so you can stare into space and sit in silence. You might enjoy a good book.\n";
  	cout << "4. A trip to the museum! You love to see all the artifacts and grab pamphlets on your way out.\n"; 
  	cout << "5. You want to travel the whole world anyhow, so you don’t have a particular preference.\n";
	// The cout statements output the question and individual answers for the test. 
	cin >> numberone; 
	// The cin allows the user to answer with a number 1-5.
	switch(numberone) {
		case 1: 
			firecount++;
			continue;  
		case 2:
			forestcount++;
			continue; 
		case 3:
			watercount++;
			continue; 
		case 4:
			darkcount++;
			continue;  
		case 5: 
			lightcount++;
			continue;
		default: 
			return 0; 
		}
	// The cases for the switch statement help us to determine which dragon the player will recieve. 
	// Each case adds one to the number of answers for a certain type of dragon depending on the number answered. The largest number at the end determines what dragon the player recieves. 
	
	cout << BOLDMAGENTA << "What is one thing you are scared to lose the most?\n";
	cout << "1. Freedom.\n"; 
	cout << "2. Friendship.\n";  
	cout << "3. Intelligence.\n";  
	cout << "4. Happiness.\n"; 
	cout << "5. Hope.\n";  
	cin >> numbertwo;
	switch(numberone) {
                case 1:
                        firecount++; 
                case 2:
                        forestcount++;
                case 3:
                        watercount++; 
                case 4:
                        darkcount++; 
                case 5: 
                        lightcount++; 
                default: 
                        return 0; 
                }
	
	
	cout << BOLDCYAN << "What is your biggest strength?\n"; 
	cout << "1. My sociability.\n"; 
	cout << "2. My empathy.\n";  
	cout << "3. My cleverness.\n";  
	cout << "4. My athleticism.\n"; 
	cout << "5. My decision-making skills.\n"; 
	cin >> numberthree; 
	switch(numberthree) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }

  	
	cout << BOLDGREEN << "You are driving and spot a kitten on the median of a 2 lane road. What do you do?\n";
	cout << "1. You run directly into traffic. That kitten’s life depends on you.\n";
	cout << "2. You don’t drive. You park your bike on the side of the street and run over to save the kitten. You take it home and decide to keep it.\n";
	cout << "3. You pick up the kitten and move it away from the road.\n"; 
	cout << "4. You befriend it, take it home, and introduce it to your dog, Max. They love taking baths.\n"; 
	cout << "5. Stop and pick up the kitten. You bring it to a vet clinic, where you proceed to notify the proper authorities.\n";
	cin >> numberfour; 
	switch(numberfour) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }

	cout << BOLDRED << "Your friend is in a fight happening in the middle of your school, how do you react?\n";
	cout << "1. You roundhouse kick your friend's opponent, Bruce Lee style.\n";  
	cout << "2. You hit the opponent with a tree branch.\n"; 
	cout << "3. You run to your friend's side and square up.\n";
	cout << "2. You bet money on your friend.\n"; 
	cout << "3. You yap with your teachers, you didn’t know there was a fight. (You are a teacher’s pet).\n";
	cin >> numberfive; 
	switch(numberfive) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }
	  
	cout << BOLDBLUE << "There's an active shooter, what do you do?\n";
	cout << "1. Sprint at them with a fire extinguisher.\n";  
	cout << "2. You hide in a tree where you meet a squirrel named Little Johnny.\n"; 
	cout << "3. Help the others, then collaborate with the Police to take the shooter down.\n";
	cout << "4. Hide until he walks past, then you attack while his back is turned.\n"; 
	cout << "5. Stay inside, barricade the door, and stand guard. You will not let anyone get hurt on your watch. (You are a teacher’s pet).\n";
	cin >> numbersix; 
	switch(numbersix) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }
	  
	cout << BOLDGREEN << "Who are you when you’re by yourself?\n";
	cout << "1. Thinking of what to do next.\n";  
	cout << "2. Appreciating what's around you.\n"; 
	cout << "3. Going with the flow.\n";
	cout << "4. Planning your future.\n"; 
	cout << "5. Thinking of the people close to you.\n";
	cin >> numberseven; 
	switch(numberseven) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }

	  cout << BOLDCYAN << "Which word sticks out to you the most?\n"; 
	  cout << "1. Drive.\n"; 
	  cout << "2. Purpose.\n"; 
  	  cout << "3. Going with the flow.\n"; 
	  cout << "4. Determination.\n"; 
	  cout << "5. Discipline.\n"; 
	  cin >> numbereight;
	  switch(numbereight) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }

	  cout << BOLDGREEN << "What is your favorite movie genre?\n"; 
	  cout << "1. Action and horror movies.\n"; 
  	  cout << "2. Comedies.\n"; 
	  cout << "3. I prefer TV shows.\n"; 
	  cout << "4. Science fiction and Fantasy.\n";
	  cout << "5. Documentaries.\n"; 
	  cin >> numbernine; 
	  switch(numbernine) {
                case 1:
                        firecount++;
                case 2:
                        forestcount++;
                case 3:
                        watercount++;
                case 4:
                        darkcount++;
                case 5:
                        lightcount++;
                default:
                        return 0;
                }

}  		

  else return 0;
  // This is where all your logic will go
//  while (true){
    // TODO: Get user input
	char input;
	int y_axis;
	int x_axis;
	while (input != m) {
	if (input == 'w'){
	y_axis = y_axis ++;
	}
	if (input == 's') {
	y_axis = y_axis --;
	}
	if (input == 'd'){
	x_axis = x_axis ++;
	}
	if (input == 'a') {
	x_axis = x_axis --;
	}
	}

// TODO: Output map
//		string actual_map = {"******************************************************************************************************",
Vector<string> worldmap = {
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"*                                                                                                    *",
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *",

};         
//		cout << actual_map;
//	}
 }
