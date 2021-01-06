
#include "Smoke_detector.h"
#include <iostream>

bool testInput[] = { true,false,true };
bool errorCheck[3];

int main()
{
	int errorCounter=0;
	Smoke_detector det1;
	for (int i = 0; i < 3; i++)
	{
		cout << "please type  " << testInput[i] ;
		if (det1.sense_smoke() != testInput[i])//
		{
			errorCounter++;
			errorCheck[i] = 1;
		}
	}

	if (errorCounter)
	{
		cout << "has error" << endl;
	}
	else
	{
		cout << "no error" << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout <<" loop "<<i+1 <<" error satus : "<<errorCheck[i]<<endl;
		

	}

}

