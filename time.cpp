/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Time.cpp


#include <iostream>
#include <iomanip>
using namespace std;

void input(int& hours, int& minutes)
{
	cout<<"Enter in Hours. (0-23)\n";
	cin>>hours;

	while (hours<0 || hours>23)
	
	{	cout<<"Invalid entry. Please enter an Hour from 0-23)"<<endl;
		cin>>hours;
	}		

	{
	}
	cout<<"Enter in Minutes. (0-59)\n";
	cin>>minutes;

        while (minutes<0 || minutes>59)
        {       
		cout<<"Invalid entry. Please enter in minutes from 0-59"<<endl;
                cin>>minutes;
	}
	cout<<"You entered "<<hours<<" hours and "<<minutes<<" minutes"<<endl;
}


int conversion(int& hours, char& display)
{	

	if (hours==0)
	{
		hours=hours+12;
		display='A';
	}		
	else if (hours<12)
	{
		display='A';
	}
	else if (hours==12)
	{
		display='P';
	}
	else if (hours >12 && hours<24)
	{
		hours=hours-12;
		display='P';
	}	
}

int output(int& hours, int& minutes,char& display)
{
	
	if (display=='A')
	{
		cout<<"The time is "<<hours<<":"<<setfill('0')<<setw(2)<<minutes<<" A.M."<<endl;
	}
	else
	{
		cout<<"The time is "<<hours<<":"<<setfill('0')<<setw(2)<<minutes<<" P.M."<<endl;
	}
}

int main()
{
	char ans;
	do
	{
		int hours=0, time, minutes=0;
		char display='N';	
		input(hours, minutes);
		conversion(hours, display);
		output(hours, minutes, display);
		cout<<"Would you like to enter another time?"<<endl;
		cin>>ans;

	}while (ans =='Y' || ans =='y');	

	return 0;
}
