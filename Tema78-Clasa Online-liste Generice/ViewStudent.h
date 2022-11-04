#include "functii.h"
#include "ControlBook.h"
#include "ControlCourse.h"
#include "ControlEnrolment.h"
#include "ControlStudent.h"

struct ViewStudent {

	List<Student>s;
	List<Book>b;
	List<Course>c;
	List<Enrolment>e;
	ControlBook<Book>controlBook;
	ControlCourse<Course>controlCourse;
	ControlEnrolment<Enrolment>controlEnrolment;
	ControlStudent<Student>controlStudent;

	Student student;

	ViewStudent(Student s) {

		student = s;

	}

	void meniu() {

		cout << "---Meniu Student---" << endl;

		cout << "Introduceti tasta 1 pentru a vizualiza toate cartile scolii " << endl;

		cout << "Introduceti tasta 2 pentru a iesi dintr-un curs " << endl;

		cout << "Introduceti tasta 3 pentru a va inscrie la un curs " << endl;
		cout << endl;
		cout << "-->";
	}

	void play() {

		bool run = true;

		while (run == true) {

			meniu();

			string x;
			cin >> x;

			int a = stoi(x);

			switch (a) {

			case 1:controlBook.afisare();
				break;
			case 2:iesireCurs();
				break;
			default:
				break;
			}

		}

	}

	void iesireCurs() {

		cout << "Introduceti id-ul cursului din care doriti sa iesiti:";

		int id;
		cin >> id;

		cout << endl;

		if (controlCourse.isCourse(id) == true) {
			cout << "A-ti parasit cursul" << endl;
			controlCourse.deleteById(id);
			controlCourse.salvareFisier();
		}
		else {
			cout << "Id-ul cursului este gresit" << endl;

		}

	}









};




















