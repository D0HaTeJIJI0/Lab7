#include "StudentAd.h"
#include <cstring>

Student::Student(char name[], int group):
	itsGroup(group)
{
	for (int i = 0; i < strlen(name); i++)
		itsName[i] = name[i];
}

void Student::setName(char name[])
{
	for (int i = 0; i < strlen(name); i++)
		itsName[i] = name[i];
}

void Student::setGroup(int group)
{
	itsGroup = group;
}

char * Student::getName()  
{
	return itsName;
}

int Student::getGroup() const
{
	return itsGroup;
}
