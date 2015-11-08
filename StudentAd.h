const int MAXLENNAME = 100;

class Student
{
	protected:
		char itsName[MAXLENNAME];
		int itsGroup;
	public:
		Student(char [], int);
		void setName(char []);
		void setGroup(int);
		char * getName();
		int getGroup() const;
};

