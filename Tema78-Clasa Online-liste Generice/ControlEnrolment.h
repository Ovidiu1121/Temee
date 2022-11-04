#include "functii.h"

template<typename Enrolment>

struct ControlEnrolment {

	List<Enrolment>lista;

	ControlEnrolment() {

		citire();
	}

	void citire() {

		ifstream read("enrolments.txt");

		while (!read.eof()) {

			int studentId;
			int courseId;
			int createdAt;

			read >> studentId;
			read >> courseId;
			read >> createdAt;

			Enrolment e(studentId, courseId, createdAt);
			lista.addFinal(e);

		}

	}

	void afisare() {

		Node<Enrolment>* it = lista.iterator();

		while (it) {
			cout << it->data.descriere();
			it = it->next;
		}

	}

};























