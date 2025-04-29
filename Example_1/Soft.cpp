#include "Soft.h"

Soft::Soft()
{
    name = "none";
    company = "none";
}

Soft::Soft(string name, string company)
{
    this->name = name;
    this->company = company;
}

Soft::~Soft()
{
}

void Soft::setName(string name)
{
    this->name = name;
}

void Soft::setCompany(string company)
{
    this->company = company;
}

string Soft::getName()
{
    return name;
}

string Soft::getCompany()
{
    return company;
}

void Soft::showInfo() const
{
    cout << endl << "-----Soft-----" << endl;
    cout << "Name: " << name << endl;
    cout << "Company: " << company << endl;

}

void Soft::load(ifstream& file)
{
    getline(file, name);
    getline(file, company);
}


Shareware::Shareware()
{
	installationDate = Date();
	term = 0;
}

Shareware::Shareware(string name, string producer, Date installationDate, int term) : Soft(name, producer)
{
	this->installationDate = installationDate;
	this->term = term;
}

void Shareware::setDate(Date installationDate)
{
	this->installationDate = installationDate;
}

void Shareware::setTerm(int term)
{
	this->term = term;
}

Date Shareware::getDate() const
{
	return installationDate;
}

int Shareware::getTerm() const
{
	return term;
}

void Shareware::showInfo() const
{
	cout << "\tShareware " << endl;
	Soft::showInfo();
	cout << "Installation date: " << installationDate << endl;
	cout << "Term: " << term << endl;
	cout << "finish date" << installationDate + term << endl;
}

bool Shareware::isAvailable() const
{
	return Date()<=installationDate+term;

}

void Shareware::load(ifstream& file)
{
	Soft::load(file);
	int day, month, year;
	file >> day >> month >> year;
	installationDate.setDay(day);
	installationDate.setMonth(month);
	installationDate.setYear(year);
	file >> term;
}




//---------------Commercial---------------

Commercial::Commercial()
{
    price = 0;
    //set_date;
    //free_term;
}

Commercial::Commercial(string name, string producer, Date installationDate, int term, int price) : 
    Shareware(name, producer, installationDate, term)
{
    this->price = price;
}

void Commercial::showInfo() const
{
    cout << "\tCommertial soft\n";
    Soft::showInfo();
    cout << "Installation date: " << installationDate << endl;
    cout << "Term: " << term << endl;
    cout << "Finish date: " << installationDate + term << endl;
    cout << "Price: " << price << endl;
}

void Commercial::load(ifstream& file)
{
    Shareware::load(file);
    file >> price;
}

void Commercial::setPrice(int price)
{
    this->price = price;
}

int Commercial::getPrice() const
{
    return price;
}

