/*

	+	Name
		Age
		Gender
	+	Height
	+	Weight
	+	Family Income
		BMI

	(+) : only display
	
	Compare: Gender
		 Age
		 *BMI

*/

#include <iostream>
#include <fstream>
#include <string>	// name detection for later use
#include <unistd.h>	// some arduino func that can be used for this

using namespace std;

class Profile {
	public:
		string name;
		int gender, age;
		float weight, height;
		
		
		float test() {			
			return (weight + height);
		}
		
		float bmi() {			
			return (weight / (height*height));
		}
};

// comparison
void cprofile {
	// Code here
}

void body() {
	int nos;
	float w, h;
	Profile user;
	
	cout << "Number of Student: ";
	cin >> nos;
	
	for (int i=0; i<nos; i++) {
		cout << "Name: ";
		cin >> user.name;
		
		cout << "Gender: ";
		cin >> user.gender;
		
		cout << "Age: ";
		cin >> user.age;
		
		cout << "Weight: ";
		cin >> w;
		user.weight = w;
		
		cout << "Height: ";
		cin >> h;
		user.height = h;
		
		cout << endl << "Your BMI: " << user.bmi();
		
		sleep(3);
		system("cls");
	}
}

int main() {
	body();
}
