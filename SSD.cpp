#include <iostream>
#include "SSD.h"
using namespace std;

SSD::SSD() {
	name = nullptr;
	model = nullptr;
}
SSD::SSD(const char* n, const char* m) {
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	model = new char[strlen(m) + 1];
	strcpy(model, m);
}
SSD::~SSD() {
	delete[] name;
	delete[] model;
}

char* SSD::GetName() {
	return name;
}
char* SSD::GetModel() {
	return model;
}

void SSD::SetName(const char* n) {
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy(name,n);
}
void SSD::SetModel(const char* m) {
	if (model != nullptr) {
		cout << model << "...delete\n";
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}

void SSD::SetPrice(double pr) {
    if (pr <= 0.0) {
        cout << "Enter a value > 0" << endl;
    } else {
        price = pr;
    }
}