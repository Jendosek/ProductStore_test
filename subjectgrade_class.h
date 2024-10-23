#ifndef subject_calss
#define subject_calss

#include "subject_class.h"

class SubjectGrade
{
public:
    Subject subject;
    int grade;

    SubjectGrade(const Subject& subject, int grade) : subject(subject), grade(grade) {}

    void print()
    {
        cout << "Subject: " << subject.GetTitle() << ", Grade: " << grade << endl;
    }
};


#endif 

