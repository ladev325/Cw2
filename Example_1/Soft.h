#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Date.h"
using namespace std;

class Soft {
protected:
	string name;
	string company;
public:
	Soft();
	Soft(string name, string company);
	virtual ~Soft();

	void setName(string name);
	void setCompany(string company);
	string getName();
	string getCompany();

	virtual void showInfo()const;
	virtual bool isAvailable()const = 0;

	virtual void load(ifstream& file);

};

class Shareware
	: public Soft
{
protected:
	Date installationDate;
    int term;
public:
    Shareware();
    Shareware(string name, string producer, Date installationDate, int term);

    void setDate(Date installationDate);
    void setTerm(int term);

    Date getDate() const;
    int getTerm() const;

    virtual void showInfo() const override;
    virtual bool isAvailable() const override;
    virtual void load(ifstream& file) override;
};

class Commercial : public Shareware {
protected:
	int price;

public:
	Commercial();
	Commercial(string name, string producer, Date installationDate, int term, int price);
	virtual void showInfo()const override;
	virtual void load(ifstream& file) override;
	void setPrice(int price);
	int getPrice()const;
};