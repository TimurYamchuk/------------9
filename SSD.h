#pragma once
class SSD
{
private:
	char* name;
	char* model;
	double price; 
public:
	SSD();
	SSD(const char* n, const char* m);
	~SSD();

	char* GetName();
	char* GetModel();

	void SetName(const char* n);
	void SetModel(const char* m);
	 void SetPrice(double pr);
};