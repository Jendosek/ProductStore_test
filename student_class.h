#ifndef student_c
#define student_c

#include "gradebook_class.h"

class Student
{
private:
	string name;
	string surname;
	Gradebook grades;
public:
	Student(string name, string surname, Gradebook grades) : grades(grades)
	{
		this->name = name;
		this->surname = surname;
	}

	void addGrade(SubjectGrade grade)
	{
		grades.addSubjectGrade(grade);
	}
	
	void Print()
	{
		cout << name << endl;
		cout << surname << endl;
		grades.print();
	}
};

#endif 
