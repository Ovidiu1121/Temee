#include "functii.h"

template<typename Student>


struct ControlStudent {

	List<Student>lista;

	ControlStudent() {

		citire();

	}

	void citire() {

		ifstream read("studenti.txt");

		while (!read.eof()) {
			int id;
			string name;
			int age;
			bool isAdmin;
			read >> id;
			read >> name;
			read >> age;
			read >> isAdmin;
			
			Student x(id, name, age, isAdmin);
			lista.addFinal(x);

		}
	}

	void afisare() {

		Node<Student>* it = lista.iterator();

		while (it) {
			cout << it->data.descriere();
			it = it->next;
		}

	}


};






























