#include "domain.h"

int main()
{
	Subject sub = Subject("Math");
	sub.Print();
	Teacher teacher("John", "Doe");
	teacher.print();
	SubjectGrade sg = SubjectGrade(sub, 10);
	sg.print();

	return 0;
}