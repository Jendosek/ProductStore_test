#ifndef subject_calss
#define subject_calss

#include "teacher_class.h"
#include "subject_class.h"

class SubjectGrade
{
public:
    Subject subject;
    Teacher teacher;
    int grade;

	SubjectGrade(Subject subject, int grade, Teacher teacher) : subject(subject), grade(grade), teacher(teacher) {}

    void print()
    {
		cout << "Subject: " << subject.GetTitle() << "; Grade: " << grade << "; Teacher: " << teacher.getName() << " " << teacher.getSurname() << endl;
    }
};


#endif 

