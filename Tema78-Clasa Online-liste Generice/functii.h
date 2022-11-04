#include "Node.h"

template<typename U>


struct List {

	Node<U>* head = NULL;

	Node<U>* iterator() {

		return head;

	}

	void addStart(U x) {

		if (head == NULL) {
			head = new Node<U>;
			head->data = x;
			head->next = NULL;
		}
		else {
			Node<U>* nou = new Node<U>;
			nou->data = x;
			nou->next = head;
			head = nou;
		}


	}

	void addFinal(U x) {

		if (head == NULL) {
			head = new Node<U>;
			head->data = x;
			head->next = NULL;
		}
		else {
			Node<U>* aux = head;

			while (aux->next!=NULL) {
				aux = aux->next;
			}
			Node<U>* nou = new Node<U>;

			nou->data = x;
			nou->next = NULL;
			aux->next = nou;

		}

	}

	void addByPosition(U x, int poz) {

		if (poz == 0) {
			addStart(x);
		}
		else {

			Node<U>* aux = head;

			int k = 0;

			while (aux != NULL && k != poz - 1) {
				aux = aux->next;
				k++;
			}

			Node<U>* nou = new Node<U>;
			nou->next = aux->next;
			aux->next = nou;
			nou->data = x;

		}


	}

	void deleteByPosition(int poz) {

		Node<U>* aux = head;
		int ct = 0;

		while (aux != NULL && ct != poz - 1) {
			ct++;
			aux = aux->next;
		}

		aux->next = aux->next->next;

	}

	int size() {

		int ct = 0;

		if (head == NULL) {
			return 0;
		}

		Node<U>* aux = head;

		while (aux) {
			ct++;
			aux = aux->next;
		}
		return ct;
	}

	U get(int poz) {

		Node<U>* aux = head;

		int ct = 0;
		int k = size();

		if (head == NULL) {
			return U();
		}

		if (poz > k - 1) {
			return U();
		}

		while (aux) {
			if (ct == poz) {
				return aux->data;
			}
			ct++;
			aux = aux->next;
		}
		return U();
	}

	void set(int poz, U nou) {

		Node<U>* aux = head;
		int ct = 0;
		int k = size();

		if (head == NULL) {
			return;
		}

		if (poz > k - 1) {
			return;
		}

		while (aux) {

			if (ct == poz) {
				aux->data = nou;
			}
			aux = aux->next;
			ct++;
		}

	}



};
























