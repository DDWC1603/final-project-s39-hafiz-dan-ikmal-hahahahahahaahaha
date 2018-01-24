/*
		+Name
		 Age
		 Gender
		+Height
		+Weight
		+Family Income
		 BMI

(+) : only display
	
		Compare: Gender
			 Age
		 	 BMI (if possible)
*/

#include <iostream>
#include <fstream>	// finalize
//#include <ostream>
//#include <iomanip>
#include <string>	// name detection for later use
#include <unistd.h>	// some arduino func that can be used for this
//#include <stdlib.h>

using namespace std;

//class Profile {
struct Profile {
		string name;
		int gender, age;
		float weight, height;

		float test() {return (weight + height);}
		
		float bmi() {return (weight / (height*height));}
};

// comparison
void cprofile {
	// put testlin.cpp here
}

void body() {
	int nos;
	float w, h;
	Profile user;
	
	cout << "Number of Student: ";
	cin >> nos;
	
	for (int i=0; i<nos; i++) {
		cout << "Name: ";
		getline(cin, user.name);
		//cin >> user.name;
		
		cout << "Gender: ";
		cin >> user.gender;
		
		cout << "Age: ";
		cin >> user.age;
		
		cout << "Weight: ";
		cin >> user.weight;
		//cin >> w;
		//user.weight = w;
		
		cout << "Height: ";
		cin >> user.height;
		//cin >> h;
		//user.height = h;
		
		cout << endl << "Your BMI: " << user.bmi();
		
		sleep(3);
		system("cls");
	}
}

int main() {
	body();
}
