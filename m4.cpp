/*
* FILE : f6.ccp
* PROJECT : PROG1345 - Major 4
* PROGRAMMER : Anaami Patel 8759633
* FIRST VERSION : 2021-12-01
* DESCRIPTION :
* This function reads the file teams.txt and extracts the teams names from it.
* After the names are extracted, the teams' files are opened, and the info
* from the file is parsed. That parsed info is then used to display the
* amount of games that that team lost, won, or tied and who they played against
* and their final winning percentage is then displayed to the screen.
*/

#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//function prototypes
int parseLine(char result[], char opp[], int* home, int* away);
int processGames(char fileName[]);

#pragma warning(disable: 4996)
int main()
{

	//opening file for reading 

	//if opening file was unsuccessful

			//reads file line by line and stores info in string str

					//checking first line

					//checking second line

					//checking third line

					//checking fourth line


		//checking whether if file closed properly
}





//
// FUNCTION : parseLine
// DESCRIPTION :
// Disects the game results into teamname, home score, and away score
// PARAMETERS :
// char result: the extracted info from file
// char opp: stores opponent teams name
// int* home: stores home score
// int* away: stores away score
// RETURNS :
// -1: if there was an error while parsing
// 0: if the parsing was successful
//
int parseLine(char result[], char opp[], int* home, int* away)
{
	//stores position of desired character
	char* p1;
	char* p2;

	p1 = strstr(result, ",");
	if (p1)
	{
		p2 = strstr(p1, "-");
		if (p2)
		{
			//assigns home score to char opp
			snprintf(opp, sizeof(opp), "%.*s\n", p2 - p1 - 1, p1 + 1);

			//converts home score from char to int
			*home = strtol(opp, &p1, 0);
		}
	}
	else
	{
		return -1;
	}

	p1 = strstr(result, "-");
	if (p1)
	{
		p2 = strstr(p1, "");
		if (p2)
		{
			//assigns away score to char opp
			snprintf(opp, sizeof(opp), "% .*s\n", p2 - p1 - 3, p1 + 1);

			//converts away score from char to int
			*away = strtol(opp, &p1, 0);
		}
	}
	else
	{
		return -1;
	}

	p1 = strstr(result, "");
	if (p1)
	{
		p2 = strstr(p1, "-");
		if (p2)
		{
			//assigns teamname score to char opp
			snprintf(opp, 121, "%.*s\n", p2 - p1 - 3, p1);
		}
	}
	else
	{
		return -1;
	}

	return 0;
}




//
// FUNCTION : parseLine
// DESCRIPTION :
// This function opens the file from the parameter and calculates its winning 
// percentage after parsing the info after calling parseLine. It also 
// displays the opponent teams name and whether if they won, tied, or lost 
// against them. 
// PARAMETERS :
// char filename: name of team file to open and calculate
// RETURNS :
// -1: if there was an error while displaying the info
// 0: if displaying info was successful
//
int processGames(char filename[])
{
	
	//opening file for reading

	//error checking file opening process
	
		//stores position of desired character
		
		//retreives file name without .txt extension
		
				//stores name of file without .txt extension to fullFile

				//gets rid of the new line character at the end of the string
				
		//printong processing statement
		
			//stores all lines of file one by one to str
			
					//parses the first line

					//error checking parsing of line
					
						//checking if team:
						//won
						
						//lost
						
						//tied
						

					//parses the second line

					//error checking parsing of line
					
						//checking if team:
						//won
						
						//lost
						
						//tied
						

					//parses the third line

					//error checking parsing of line
					
						//checking if team:
						//won
						
						//lost
						
						//tied
						

		//calculates winning percentage 

		//displays winning percentage along with wins-ties-losses
		
	//error checks file closing process

	return 0;
}