#ifndef teacher_c
#define teacher_c

#include "libs.h"

class Teacher
{
private:
	string name;
	string surname;
public:
	Teacher(string name, string surname) {
		setName(name);
		setSurname(surname);
	}
	string getName() {
		return name;
	}
	string getSurname() {
		return surname;
	}
	void setName(string name) {
		this->name = name;
	}
	void setSurname(string surname) {
		this->surname = surname;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
	}
};

#endif // !teacher_c
