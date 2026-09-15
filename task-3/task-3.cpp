#include <iostream>

using namespace std;

int main() {

	double w , l , area , tilearea , num_tiles;
	cout << "Enter the width of the room in feet: " << endl;
	cin >> w;
	cout << "Enter the length of the room in feet: " << endl;
	cin >> l;
	area = w * l;
	cout << "The area of the room is: " << area << " square feet" << endl;
	tilearea = (6 / 12) * (6 / 12);
	num_tiles = area / tilearea;
	cout << "The number of tiles needed is: " << num_tiles << endl;
	return 0;
}