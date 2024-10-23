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
	Student(string name, string surname) : grades(Gradebook())
	{
		setName(name);
		setSurname(surname);
	}
	Student(string name, string surname, Gradebook grades) : grades(grades)
	{
		setName(name);
		setSurname(surname);
	}

	string getName()
	{
		return name;
	}

	string getSurname()
	{
		return surname;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setSurname(string surname)
	{
		this->surname = surname;
	}

	void addGrade(SubjectGrade grade)
	{
		grades.addSubjectGrade(grade);
	}
	
	void print()
	{
		cout << "Name: " << getName() << endl;
		cout << "Surname: " << getSurname() << endl;
		grades.print();
	}
};

#endif 
