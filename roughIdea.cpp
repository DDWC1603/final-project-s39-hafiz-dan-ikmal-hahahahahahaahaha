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
		bool gender;
		int age;
		float weight, height;

		float test() {return (weight + height);}
		
		float bmi() {return (weight / (height*height));}
		
		void info() {
			cout << endl << "Name: " << name;
			cout << endl << "Gender: " << gender;
			cout << endl << "Age: " << age;
			cout << endl << "Weight: " << weight;
			cout << endl << "Height: " << height;
			cout << endl << "BMI: " << bmi();
		}
};

// comparison
/*
void cprofile {
	// put testlin.cpp here
}
*/

void body() {
	int nos = 120;
	char g;
	Profile user[120];
	
	//cout << "Number of Student: ";
	//cin >> nos;
	
	for (int i=0; i<nos; i++) {
		cout << "Name: ";
		getline(cin, user[i].name);
		//cin >> user[i].name;
		
		cout << "M - Male / F - Female" << endl << "Gender: ";
		cin >> g;
		
		if (g == 'm') {
			user[i].gender = false;
		}

		else if (g == 'f') {
			user[i].gender = true;
		}
		
		else {
			cout << endl << "bodo";
		}
					
		cout << "Age: ";
		cin >> user[i].age;
			
		cout << "Weight: ";
		cin >> user[i].weight;
		
		cout << "Height: ";
		cin >> user[i].height;
		
		cout << endl << "Your BMI: " << user[i].bmi();
		
		cout << endl << "Your Profile: " << endl;
		user[i].info();
		
		sleep(10);
		system("cls");
	}
}

int main() {
	body();
}
