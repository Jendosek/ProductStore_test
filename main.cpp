#include "domain.h"

int main()
{
	Subject sub = Subject("Math");
	sub.Print();
	Teacher John("John", "Doe");
	Teacher ben = Teacher("Ben", "Lol");
	John.print();
	SubjectGrade sg = SubjectGrade(sub, 10, John);
	sg.print();
	cout << "-------------------" << endl;
	Gradebook gb = Gradebook({ sg });
	gb.print();
	gb.addSubjectGrade(SubjectGrade(Subject("English"), 9, ben));
	cout << "-------------------" << endl;
	gb.print();
	Student s1 = Student("Zenya", "LOL", gb);
	s1.Print();
	s1.addGrade(SubjectGrade(Subject("It"), 9, ben));
	s1.Print();



	return 0;
}