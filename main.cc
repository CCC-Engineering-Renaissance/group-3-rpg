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
  set_alternate_window(true);  
  cout << RED << "Hello Rider.\n"; 
  cout << CYAN << "I see you have traveled far to be here. Welcome to Dunmuir's hatching grounds.\n";
  cout << BOLDRED << "In order to join the famed riders, you must pass a test. Would you like to continue? (1 for yes, 0 for no)\n"; 
  cin >> w;
  if (w == 1) {
	set_alternate_window(true); 
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
