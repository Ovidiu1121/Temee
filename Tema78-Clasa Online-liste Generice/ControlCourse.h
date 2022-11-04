#include "functii.h"

template<typename Course>

struct ControlCourse {

	List<Course>lista;

	ControlCourse() {

		citire();

	}

	void citire() {

		ifstream read("courses.txt");

		while (!read.eof()) {

			int id;
			string name;
			int department;

			read >> id;
			read >> name;
			read >> department;

			Course e(id, name, department);
			lista.addFinal(e);

		}

	}

	void afisare() {

		Node<Course>* it = lista.iterator();

		while (it) {
			cout << it->data.descriere();
			it = it->next;
		}

	}

	bool isCourse(int id) {

		Node<Course>* it = lista.iterator();

		while (it) {
			if (it->data.getId() == id) {
				return true;
			}
		}
		return false;

	}

	void deleteById(int id) {

		Node<Course>* it = lista.iterator();
		int k = 0;
		while (it) {
			if (it->data.getId() == id) {
				lista.deleteByPosition(k);
				return;
			}
			k++;
			it = it->next;
		}

	}

	string save() {

		string text = "";
		
		Node<Course>* it = lista.iterator();

		while (it) {

			text +=it->data.toSave();
			text += "\n ";
			it = it->next;

		}

		text += it->data.save();
		return text;
	}

	void salvareFisier() {

		ofstream write("courses.txt");

		write << save();

		write.close();

	}



};


