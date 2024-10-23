#ifndef gradebook_c
#define gradebook_c

#include "teacher_class.h"
#include "subjectgrade_class.h"

class Gradebook
{
private:
	vector<SubjectGrade> subjectGrades;

public:
	Gradebook() {}
	Gradebook(const vector<SubjectGrade>& subjectGrades) : subjectGrades(subjectGrades) {}

	void addSubjectGrade(const SubjectGrade& subjectGrade)
	{
		subjectGrades.push_back(subjectGrade);
	}

	void print()
	{
		for (SubjectGrade& subjectGrade : subjectGrades)
		{
			subjectGrade.print();
		}
	}
};


#endif // !gradebook_c
