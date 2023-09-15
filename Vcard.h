#pragma once
class Vcard
{
private:
	char* name;
	char* model;
	double price; 
public:
	Vcard();
	Vcard(const char* n, const char* m);
	~Vcard();

	char* GetName();
	char* GetModel();

	void SetName(const char* n);
	void SetModel(const char* m);
	 void SetPrice(double pr);
};