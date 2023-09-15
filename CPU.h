#pragma once
class CPU
{
private:
	char* name;
	char* model;
	double price;
public:
	CPU();
	CPU(const char* n, const char* m);
		CPU(const CPU& obj);
	void Print();
	~CPU();
		
	char* GetName();
	char* GetModel();
	void SetName(const char* n);
	void SetModel(const char* m);
	double GetPrice() const;
};