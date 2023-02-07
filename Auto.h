#pragma once
#include<string>
#include<vector>

using namespace std;
class Auto
{
public:
	Auto();
	Auto(const string& aNimi, const string& aMalli, const int& aVuosimalli);
	Auto(const string& aNimi, const string& aMalli, const int& aVuosimalli, const string& aVari);
	virtual ~Auto();
	void setNimi(const string& aNimi);
	void setMalli(const string& aMalli);
	void setVuosimalli(const int& aVuosimalli);
	void setVari(const string& aVari);

	string getNimi() const;
	string getMalli() const;
	int getVuosimalli() const;
	string getVari() const;

	virtual void tulostatiedot() const;
	
private:
	string mNimi;
	string mMalli;
	int mVuosimalli;
	string mVari;
};