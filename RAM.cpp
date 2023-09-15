#include <iostream>
#include "RAM.h"
using namespace std;

RAM::RAM() {
	name = nullptr;
	model = nullptr;
}
RAM::RAM(const char* n, const char* m) {
	name = new char[strlen(n) + 1];
	strcpy(name,n);
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}
RAM::~RAM() {
	delete[] name;
	delete[] model;
}

char* RAM::GetName() {
	return name;
}
char* RAM::GetModel() {
	return model;
}
void RAM::SetName(const char* n) {
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy(name,n);
}
void RAM::SetModel(const char* m) {
	if (model != nullptr) {
		cout << model << "...delete\n";
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}

void RAM::SetPrice(double pr) {
    if (pr <= 0.0) {
        cout << "Enter a value > 0" << endl;
    } else {
        price = pr;
    }
}
