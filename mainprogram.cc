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
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *",
	};
	char character = 'O';
				//Map.at(40).at(50) = character;
	
		for (int i = 0; i < Map.size(); i++) 
		{
			cout << Map.at(i) << endl;
		}
		else return 0;
  // This is where all your logic will go
//  while (true){
    // TODO: Get user input
	char input{};
	int y_axis{};
	int x_axis{};
	char character = 'O';
	

	while (input != 'm') {
		input = quick_read();
		if (input == 'w') {
			y_axis = y_axis++;
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
		// Map size is 102 x 42
		// Playable map size is 100 x 40
		
	//	The starting point of the character is actual_map.at(100).at(50)
	

	// TODO: Output map
	set_raw_mode(false);
 }
//system("cls");
	}
  vector<char> map; // You can use a 2D vector if you'd like, but it's a lot better to emulate a 2D vector with a 1D one.

  
}
