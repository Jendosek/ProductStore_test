#ifndef subject_c
#define subject_c

#include "libs.h"

class Subject
{
private:
	string title;

public:
	Subject(string title)
	{
		setTitle(title);
	}

	void setTitle(string title)
	{
		this->title = title;
	}
	string getTitle()
	{
		return title;
	}

	void print()
	{
		cout << "Name: " << getTitle() << endl;
	}
};

#endif // !subject_c

