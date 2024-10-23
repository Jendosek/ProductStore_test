#ifndef SUBJECT_CLASS
#define SUBJECT_CLASS

#include "libs.h"

class Subject
{
private:
	string title;

public:
	Subject(string title)
	{
		SetTitle(title);
	}

	void SetTitle(string title)
	{
		this->title = title;
	}
	string GetTitle()
	{
		return title;
	}

	void Print()
	{
		cout << "Name: " << GetTitle() << endl;
	}
};

#endif 

