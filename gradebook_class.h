#ifndef gradebook_c
#define gradebook_c

#include "teacher_class.h"
#include "subjectgrade_class.h"

class Gradebook
{
public:
	vector<SubjectGrade> subjectGrades;

	Gradebook(const vector<SubjectGrade>& subjectGrades) : subjectGrades(subjectGrades) {}

	void addSubjectGrade(const SubjectGrade& sg)
	{
		subjectGrades.push_back(sg);
	}

	void print()
	{
		for (SubjectGrade& sg : subjectGrades)
		{
			sg.print();
		}
	}
};


#endif // !gradebook_c
