// carrots.cpp -- food processing program
// used and display a variable
# include <iostream>
int main()
{
	using namespace std;
	int carrots; 		// declare an integet variable
	carrots = 25;		// assign a value to the variable
	cout << "I have ";
	cout <<  carrots;  	// display the valu of the variable
	cout << " carrots.";  	
	cout << endl;	
	carrots = carrots - 1; // modify the variable
	cout << "Crunch ,crunch. Now Ihave " << carrots << " carrots." << endl;
	return 0 ;
}
