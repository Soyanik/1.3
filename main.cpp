#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Road {
public:
	double length=666.6;
	int width=6;
	Road();
};

Road::Road() {
	length = 666.6;
	width = 6;
}

int main() {
	cout << "Test v1.3: Ok.\n";
	
	Road road;
	cout << "\nBefore access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	string line;
	ifstream in("data.txt");
	if (in.is_open())
    {
		getline(in, line);
		road.length = stof(line);
		getline(in, line);
		road.width = stoi(line);
    }
	in.close();
	
	cout << "\nAfter access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	
	return 0;
}
