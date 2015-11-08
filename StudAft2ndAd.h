#ifndef StudentAd
	#define StudentAd
#endif


const int AMOUNT = 5;

class StudAft2nd : public Student
{
	int itsMarks[AMOUNT];
	public:
		StudAft2nd(char [], int, int []);
		void setMarks(int []);
		int * getMarks();
};
