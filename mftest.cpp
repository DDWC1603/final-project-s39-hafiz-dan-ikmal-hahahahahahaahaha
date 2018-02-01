#include<iostream>

using namespace std;
struct profile
{
	int x=10;
	string name1="Maznah";
	bool gender;
	void apaapanama() {
		if(gender==false)
		{
			cout<<endl<<"Male";
		}
		else if(gender==true)
		{
			cout<<endl<<"Female";
		}
	}
};
		
int main() {	
	char input;
	profile user[10];
	bool holder;
	int cm=0, cf=0;
		
	for(int x=0; x<10; x++){
			
		cout<<"Enter Your Gender : "<<endl;
		cin>>input;
			
		if(input=='m') {
			user[x].gender=false;			
			cm++;
		}
			
		else if(input=='f') {
			user[x].gender=true;
			cf++;
		}
			
		else {					// repeatable
			cout<<"BODOH";	
		}
	}
	
	// data will decay
	for(int y=0; y<cm; y++) {
		user[y].gender = false;
		user[y].apaapanama();
	}
		
	for(cm; cm<10; cm++) {
		user[cm].gender = true;
		user[cm].apaapanama();
	}
}
