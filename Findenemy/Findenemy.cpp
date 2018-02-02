// Findenemy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//This is needed for the computer to see the numbers
#include <<time>
using std::wcout;
usingstd::endl;

int main()
{

	//Makes  Random location on grid
	cout << "Create a Random location on grid...." << endl;
	//Required for randomizing numbers by help of seeding and using ctime
	srand(time(0));
	int searchGridHighNumber = 100;
	int searchGridLowNumber = 1
		int enemyLocation = rand() % searchGridHighNumber + searchGridLowNumber;
	cout << "The enemy is located #" << enemyLocation
		<< "on grid with 1-100 sectors." << endl:

	cout << "Searchbot booting software....." << endl;
	//Number of the target's location
	int targetLocationPredictionCounter = 0
		//If enemy is found
		bool targetFound = false;

	while (targetFound == false)
	{
		int targetLocationPredection = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber
			targetLocationPredictionCounter++;
		//Radar that pings enemy location
		cout << "===========================================" << endl;
		cout << "Searchbot HK-Aerial Radar sending out ping#" << targetLocationPredictionCounter << endl;
		//Is the target prediction higher than enemy location?
		if (targetLocationPrediction > enemyLocation)

	}

	{
		//The reset the searchGridHighnumber of the grid
		searchGridHighNumber = targetLocationPrediction - 1;
		cout << "The target location prediction of" << targetLocationPrediction << "was higher than usual.";
		cout << "The new searchGridHighNumber =" << searchGridHigherNumber << endl;

	}
	else if (targetLocationPrediction == enemyLocation)
	{
		//Simulation successful!
		cout << "Enemy was hiding at location #" << enemyLocation << endl;
		cout << "Target was found at location #" << targetLoocationPrediction << endl;
		cout << "Searchbot Software took " << targetLocationPredictionCounter << "predictions to find the enemy"
			targetFound = true
	}
	{
	//Something messed up
	cout << "Drone malfunction" << endl;
	cout << "Send Drone for Software Diagnostics" << endl;
	targetFound = true
	}
}

system("pause");
return 0;
}


