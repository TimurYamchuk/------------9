#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Vcard.h"
using namespace std;

class Laptop
{
private:
	char* name;
	char* color;
	int year;
	double price;
	CPU cpu;
	SSD ssd;
	Vcard vcard;
	RAM ram;
public:
	Laptop();
	Laptop(const char* name, const char* color, 
	int year, double price);
	void Input();
	void Print();
	~Laptop();

	char* GetName();
	int GetYear();
	double GetPrice();
	CPU GetCpu();
	SSD GetSsd();
	Vcard GetVcard();
	RAM GetRam();

	void SetName(const char* n);
	void SetYear(int y);
	void SetPrice(double pr5);
	void GetCpu(CPU cpu);
	void GetSsd(SSD ssd);
    void GetVcard(Vcard vcard);
	void GetRam(RAM ram);
	void AllPrice() const;

};

