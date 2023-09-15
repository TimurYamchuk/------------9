#include <iostream>
#include "CPU.h"
using namespace std;

CPU::CPU() {
	name = nullptr;
	model = nullptr;
}
CPU::CPU(const char* n, const char* m) {
	name = new char[strlen(n) + 1];
	strcpy(name,n);
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}
CPU::~CPU() {
	delete[] name;
	delete[] model;
}

char* CPU::GetName() {
	return name;
}
char* CPU::GetModel() {
	return model;
}
void CPU::SetName(const char* n) {
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy(name,n);
}
void CPU::SetModel(const char* m) {
	if (model != nullptr) {
		cout << model << "...delete\n";
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}
void CPU::SetPrice(double pr) {
	if (pr <= 0.0) {
		cout << "Enter value > 0" << endl;
	}
	else {
		price = pr;
	}
}
