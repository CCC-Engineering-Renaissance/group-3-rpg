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
  int firecount = 0; 
  int forestcount = 0; 
  int watercount = 0; 
  int darkcount = 0;
  int lightcount = 0; 
  set_alternate_window(true);  
  cout << RED << "Hello Rider.\n"; 
  cout << CYAN << "I see you have traveled far to be here. Welcome to Dunmuir's hatching grounds.\n";
  cout << BOLDRED << "In order to join the famed riders, you must pass a test. Would you like to continue? (1 for yes, 0 for no)\n"; 
  cin >> w;
  if (w == 1) {
	set_alternate_window(true); 
	cout << "You and your friends receive a million dollars to go on a dream vacation. Where are you persuading your friends to travel to?\n"
  	cout << "1) Skiing in the Alps! Who doesn’t love the rush of wind whilst speeding down an icy slope?\n"
  	cout << "2) A late-night tea party in Paris, where you can all enjoy decadent desserts and a beautiful view of the city.\n"
  	cout << "3) A backpacking trip, so you can stare into space and sit in silence. You might enjoy a good book.\n"
  	cout << "4) A trip to the museum! You love to see all the artifacts and grab pamphlets on your way out.\n" 
  	cout << "3) You want to travel the whole world anyhow, so you don’t have a particular preference.\n" 
	cin >> numberone; 
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
	
	cout << "What is one thing you are scared to lose the most?\n";
	cout << "Freedom.\n"; 
	cout << "Friendship.\n";  
	cout << "Intelligence.\n";  
	cout << "Happiness.\n"; 
	cout << "Hope.\n";  
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
	
	
	cout << "What is your biggest strength?\n"; 
	cout << "My sociability.\n"; 
	cout << "My empathy.\n";  
	cout << "My cleverness.\n";  
	cout << "My athleticism.\n"; 
	cout << "My decision-making skills.\n" 
	cin >> numberthree; 
	switch (planetchoice) {
		case 1: 
			cout << "Congratulations! Your covenant has mercilessly destroyed Reach.\n";
			break;
		case 2:
			cout<< "Congratulations! Your covenant has mercilessly destroyed Arcadia.\n";
			break;
		case 3:
			cout<<"Congratulations! Your covenant has mercilessly destroyed Earth.\n";
			break;
		case 4:
			cout<<"Congratulations! Your covenant has mercilessly destroyed Harvest.\n";
			break;
		default: 
			cout << "Warning, ship destruction iminent. Incoming enemy batallion.\n";
				break;
		}
  	
	}
  }
  else {
	return 0; 
  }  
  // This is where all your logic will go
  while (true){
    // TODO: Get user input

    // TODO Move character or something cool using the user's input

    // TODO: Output map

  }
}
