#include<iostream>
#include "Vcard.h"
using namespace std;

Vcard::Vcard()
{
	name = nullptr;
	model = nullptr;
}
 Vcard::Vcard(const char* n, const char* m )
{
	name = new char[strlen(n) + 1];
	strcpy(name,n);
	model = new char[strlen(m) + 1];
	strcpy(model,m);
}
   Vcard::~Vcard()
    {
        delete[]name;
        delete[]model;
    }
    char* Vcard::GetName()
{
	return name;
}
char* Vcard::GetModel()
{
	return model;
}
void Vcard::SetName(const char* n)
{
	if (name != nullptr) {
		cout << name << "...delete\n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy(name,n);
}
void Vcard::SetModel(const char* m)
{
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