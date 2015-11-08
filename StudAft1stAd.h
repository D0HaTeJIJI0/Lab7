#ifndef StudentAd
	#define StudentA
#endif

const int AMOUNT = 4;

class StudAft1st : public Student
{
	int itsMarks[AMOUNT];
	public:
		StudAft1st(char [], int, int []);
		void setMarks(int []);
		int * getMarks(); 
};
