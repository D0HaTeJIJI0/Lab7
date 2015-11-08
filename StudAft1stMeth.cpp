#include "StudAft1stAd.h"

StudAft1st::StudAft1st(char name[], int group, int marks[]):
	Student(name, group)
{
	for (int i = 0; i < AMOUNT; i++)
		itsMarks[i] = marks[i];
}

void StudAft1st::setMarks(int marks[])
{
	for (int i = 0; i < AMOUNT; i++)
		itsMarks[i] = marks[i];
}

int * StudAft1st::getMarks()
{
	return itsMarks;
}
