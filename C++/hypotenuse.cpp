#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

// Function to return the hypotenuse of the
// right angled triangle
double findHypotenuse(double side1, double side2)
{
	double h = sqrt((side1 * side1) + (side2 * side2));
	return h;
}

int main()
{
	int side1 = 3, side2 = 4;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << findHypotenuse(side1, side2);
}
	
