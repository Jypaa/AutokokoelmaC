#include "Auto.h"
#include<vector>
#include<algorithm>
#include<iostream>

using std::vector;
using namespace std;

Auto::Auto(): mNimi("Tuntematon"), mMalli("Tuntematon"), mVuosimalli(0000),mVari("Tuntematon")
{
}

Auto::Auto(const string& aNimi, const string& aMalli, const int& aVuosimalli)
	:mNimi(aNimi), mMalli(aMalli), mVuosimalli(aVuosimalli)
{
}

Auto::Auto(const string& aNimi, const string& aMalli, const int& aVuosimalli, const string& aVari)
	: mNimi(aNimi), mMalli(aMalli), mVuosimalli(aVuosimalli), mVari(aVari)
{
}

Auto::~Auto()
{
}

void Auto::setNimi(const string& aNimi)
{
	mNimi = aNimi;
}

void Auto::setMalli(const string& aMalli)
{
	mMalli = aMalli;
}

void Auto::setVuosimalli(const int& aVuosimalli)
{
	mVuosimalli = aVuosimalli;
}

void Auto::setVari(const string& aVari)
{
	mVari = aVari;
}

string Auto::getNimi() const
{
	return mNimi;
}

string Auto::getMalli() const
{
	return mMalli;
}

int Auto::getVuosimalli() const
{
	return mVuosimalli;
}

string Auto::getVari() const
{
	return mVari;
}

void Auto::tulostatiedot() const
{
	cout << "Merkki: " << getNimi() << endl;
	cout << "Malli: " << getMalli() << endl;
	cout << "Vuosimalli: " << getVuosimalli() << endl;
	cout << "Vari: " << getVari() << endl;

}