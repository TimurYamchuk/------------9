#pragma once
#include <iostream>
#include <cstring>

class RAM {
private:
    char* name;
    char* model;
    double price; 

public:
    RAM();
    RAM(const char* n, const char* m, double pr); 
    RAM(const RAM& obj);
    ~RAM();

    char* GetName();
    char* GetModel();
    double GetPrice(); 

    void SetName(const char* n);
    void SetModel(const char* m);
    void SetPrice(double pr); 
};
