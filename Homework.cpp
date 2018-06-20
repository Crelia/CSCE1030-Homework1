/*
	Jefferson Crelia
	JeffersonCrelia@my.unt.edu

	This program is designed to give the volume of air inside a customizable building layout.
	It does this through user input, and the cout and cin functions.
*/


#include <iostream>
	using namespace std;
	int main ()
	{

	double wall_a, wall_b, wall_c, wall_d, wall_e, wall_f, wall_g, wall_h,  building_height, area_of_building, volume_of_building;
	int tonnage;
	// Here I declared my variables


	cout << " \n";
	cout << "Department: Computer Science and Engineering \n";
	cout << "Course: CSCE 1030 \n";
	cout << "Program: Section 002 \n";
	cout << "Name: Jefferson Crelia \n";
	cout << "Email: JeffersonCrelia@my.unt.edu \n";
	cout << " \n \n \n";
	// Above I made a block-header that gives the department cand course names, along with my own info


	cout << "What are the lengths of the following walls? \n";
		cout << "A: ";
			cin >> wall_a;
			cout << " \n";
		cout << "C: ";
			cin >> wall_c;
			cout << " \n";
		cout << "D: ";
			cin >> wall_d;
			cout << " \n";
		cout << "F: ";
			cin >> wall_f;
			cout << " \n";
		cout << "G: ";
			cin >> wall_g;
			cout << " \n";
		cout << "H: ";
			cin >> wall_h;
			cout << " \n";
	// I prompted the user to enter the lengths of the needed walls


	wall_b = ((wall_h - wall_f) + wall_d);
	wall_e = (wall_a - wall_c - wall_g);
	// Above I gave a formula to solve for wall b and wall e

	while (wall_c >= wall_a || wall_g >= wall_a || wall_c + wall_g >= wall_a || wall_f >= wall_h)
	{
		if (wall_c >= wall_a)
		{
			cout << "Wall C cannot be larger than wall A. Please enter the correct values of both walls.\n \n";
			cout << "Wall C: ";
				cin >> wall_c;
				cout << "\n \n";
			cout << "Wall A: ";
				cin >> wall_a;
				cout << "\n \n";
		}

		if (wall_g >= wall_a)
		{
			cout << "Wall G cannot be larger than wall A. Please enter the correct values of both walls. \n \n";
			cout << "Wall G: ";
				cin >> wall_g;
				cout << "\n \n";
			cout << "Wall A: ";
				cin >> wall_a;
				cout << "\n \n";
		}

		if (wall_c + wall_g >= wall_a)
		{
			cout << "The sum of  wall C and wall G cannot be larger than or equal to wall A. Please enter the correct values of the three walls.\n \n";
			cout << "Wall C: ";
				cin >> wall_c;
				cout << "\n \n";
			cout << "Wall G: ";
				cin >> wall_g;
				cout << "\n \n";
			cout << "Wall A: ";
				cin >> wall_a;
				cout << "\n \n";
		}

		if (wall_f >= wall_h)
		{
			cout << "Wall F cannot be larger than or equal to wall H. Please enter the correct values of both walls. \n \n";
			cout << "Wall F: ";
				cin >> wall_f;
				cout << "\n \n";
			cout << "Wall H: ";
				cin >> wall_h;
				cout << "\n \n";
		}
	}
	// Above is a while loop with if statemtents to allow the user to re enter values that were not opriginally valid

	cout << "What is the height building? ";
		cin >> building_height;
		cout << " \n";
	// I prompted the user to enter the height of the building

	area_of_building = (wall_a * (wall_h - wall_f)) + (wall_d * wall_c) + (wall_g * wall_f);
	// I gave the variable area_of_building an amount

	volume_of_building = (area_of_building * building_height);

	tonnage = (volume_of_building/1000);

	cout << " \n \n \n";
	// adding lines to make the code look more "user freindly"


	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision(2);
	cout << "The total volume of air in the house is ";
		cout << volume_of_building;
			cout << " cubic feet. \n";
		cout << " \n";
	// Here I set the number of deciamls to 2. (ex: 2.19362739482 -> 2.19)


	cout << "The correct amount of air tonnage is a ";
		cout << tonnage + .9999;
			cout << " ton unit. \n";
	// Here I rounded the air tonnage to the next highest integer and display that value to the user
	cout << " \n \n \n \n";

	return 0;
}
