// C++ program to demonstrate the
// push_back() method

#include <iostream>
#include <vector>

using namespace std;

// Class
class GFG {

public:
	float x, y;

	// Parameterized Constructor
	GFG(float x, float y)
		: x(x), y(y)
	{
	}

	// Copy Constructor
	GFG(const GFG& GFG)
		: x(GFG.x), y(GFG.y)
	{
		cout << "Copied" << endl;
	}
};

// Driver Code
int main()
{
	// Vector of object of GFG class
	// is created
	vector<GFG> vertices;

	// Inserting elements in the object
	// created using push_back() method

	// Custom input entries
	vertices.push_back(GFG(1, 2));
	cout << endl;

	vertices.push_back(GFG(4, 5));
	cout << endl;

	vertices.push_back(GFG(7, 8));
	cout << endl;

	return 0;
}
