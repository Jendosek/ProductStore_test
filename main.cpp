#include "domain.h"

int main()
{
	vector<Student> students;
	vector<Subject> subjects;
	do {
		cout << "1. Add student" << endl;
		cout << "2. Add subject" << endl;
		cout << "3. Add grade" << endl;
		cout << "4. Print students" << endl;
		cout << "5. Print subjects" << endl;
		cout << "6. Exit" << endl;

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			string name, surname;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter surname: ";
			cin >> surname;

			Student student(name, surname);
			students.push_back(student);
			break;
		}
		case 2:
		{
			string title;
			cout << "Enter title: ";
			cin >> title;

			Subject subject(title);
			subjects.push_back(subject);
			break;
		}
		case 3:
		{
			string studentName, studentSurname, subjectTitle, teacherName, teacherSurname;
			int grade;
			cout << "Enter student name: ";
			cin >> studentName;
			cout << "Enter student surname: ";
			cin >> studentSurname;
			cout << "Enter subject title: ";
			cin >> subjectTitle;
			cout << "Enter grade: ";
			cin >> grade;
			cout << "Enter teacher name: ";
			cin >> teacherName;
			cout << "Enter teacher surname: ";
			cin >> teacherSurname;

			SubjectGrade subjectGrade(subjectTitle, grade, Teacher(teacherName, teacherSurname));
			for (Student& student : students)
			{
				if (student.getName() == studentName && student.getSurname() == studentSurname)
				{
					student.addGrade(subjectGrade);
				}
			}
			break;
		}
		case 4:
		{
			for (Student& student : students)
			{
				student.print();
			}
			break;
		}
		case 5:
		{
			for (Subject& subject : subjects)
			{
				subject.print();
			}
			break;
		}
		case 6:
		{
			return 0;
		}
		default:
			break;
		}

	} while (true);

	return 0;
}