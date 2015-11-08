#include "StudAft2ndAd.h"

StudAft2nd::StudAft2nd(char name[], int group, int marks[]):
	Student(name, group)
{
	for (int i = 0; i < AMOUNT; i++)
		itsMarks[i] = marks[i];
}

void StudAft2nd::setMarks(int marks[])
{
	for (int i = 0; i < AMOUNT; i++)
		itsMarks[i] = marks[i];
}

int * StudAft2nd::getMarks()
{
	return itsMarks;
}
