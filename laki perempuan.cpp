#include<iostream>

using namespace std;
struct profile
{
	int x=10;
	string name1="Maznah";
	bool gender;
	void apaapanama(){
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
		
	int main()
	{	char x,input;
		profile user[10];
		bool holder;
	for(int y=0;y<10;y++){
		cout<<"Enter Your Gender : "<<endl;
		cin>>x;
		
		if(x=='m')
		{
			user[y].gender=false;			
		}
		else if(x=='f')
		{
			user[y].gender=true;
		}
		else
		{
			cout<<"BODOH";
			
		}
			}
			for(int z=0;z<10;z++)
			{
				for(int k=0;k<10;k++)
				{
					if(user[k].gender==true)
					{	
						holder=user[k].gender;
						user[k].gender=user[k+1].gender;
						user[k+1].gender=holder;
													
					}
				}
				user[z].apaapanama();
			}
		}
/*
	string name2="Abu";
	string name3="Ainul";
	string name4="Jabir";
	string name5="Zainah";
	string name6="Ropin";
	string name7="Rogayah";
	string name8="Kudin";
	string name9="Saloma";
	string name10="Salim";
*/
