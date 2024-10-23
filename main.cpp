#include "domain.h"

int main()
{
	Subject sub = Subject("Math");
	sub.Print();
	Teacher teacher("John", "Doe");
	teacher.print();

	return 0;
}