#include<iostream>
#include<vector>
#include <algorithm>
#include"Auto.h"
#include<memory>

using namespace std;

int main() {
	vector<shared_ptr<Auto>> Autot ;
	
	bool paalla = true;
	int valinta, aVuosimalli, counter, vastaus;
	string aNimi, aMalli, aVari, merkki, malli, yk, nimi;
	while (paalla) {
		cout << "1.Lisaa ajoneuvo, 2. Hae ajoneuvo 3. Poista ajoneuvo, 4. Nayta kaikki ajoneuvot, 5. Muokkaa ajoneuvon tietoja 6.Lopeta : ";
		cin >> valinta;
		switch (valinta){
			
		case 1: {
			cout << "Anna ajoneuvon merkki: ";
			cin >> aNimi;
			nimi = aNimi;
			cout << "Anna malli: ";
			cin >> aMalli;
			cout << "Anna Vuosimalli: ";
			cin >> aVuosimalli;
			cout << "Anna vari: ";
			cin >> aVari;

			Autot.push_back(shared_ptr<Auto> {new Auto{ aNimi,aMalli,aVuosimalli,aVari }});

			break;
		}

		case 2:
			if (Autot.size() == 0) {
				break;
			}
			else {
				cout << "Anna auton merkki: ";
				cin >> merkki;
				for (auto c : Autot) {  // tehin tänne koska ei tunnistanut Autot -termiä Auto.cpp tiedostossa
					if (c->getNimi() == merkki) {
						c->tulostatiedot();
						break;
					}
					else {
						cout << "Merkkia ei loydy." << endl;
						break;
					}
				}
				break;
			}
			
		case 3:
			cout << "Poista yksi vai kaikki(y tai k): " << endl;
			cin >> yk;
			if(yk == "k") {
				Autot.clear();
				cout << "Ajoneuvot tyhjennetty" << endl;
				break;
			}
			
			if (yk == "y") {
				counter = 0;
				cout << "Valitse auton numero jonka tietoja haluat poistaa: " << endl;
				for (auto i : Autot) {
					cout << counter << " " << i->getNimi() << " " << i->getMalli() << " " << i->getVuosimalli() << " " << i->getVari() << endl;
					counter++;
				}
				cin >> counter;
				
				Autot.erase(Autot.begin() + counter);
				cout << "Auton tiedot poistettu" << endl;
			}
			break;
			
		case 4:			
			if (Autot.size() == 0) {
				break;
			}
			else {
				for (auto x : Autot) {
					x->tulostatiedot();
				}
				break;
			}

		case 5:
			counter = 0;
			cout << "Valitse auton numero jonka tietoja haluat muuttaa: " << endl;
			for (auto i : Autot) {
				cout << counter << " " << i->getNimi() << " " << i->getMalli() << " " << i->getVuosimalli() << " " << i->getVari() << endl;
				counter++;
			}
			cin >> counter;
			cout << "Valitse numero jonka tietoja haluat vaihtaa: "<< endl;
			cout << "1. " << Autot[counter]->getNimi() << " 2. " << Autot[counter]->getMalli() << " 3. " << Autot[counter]->getVuosimalli() << " 4. " << Autot[counter]->getVari() << endl;
			cin >> vastaus;
			if (vastaus == 1) {
				cout << "Anna uusi merkki: ";
				cin >> aNimi;
				Autot[counter]->setNimi(aNimi);
				break;
			}
			if (vastaus == 2) {
				cout << "Anna uusi malli: ";
				cin >> aMalli;
				Autot[counter]->setMalli(aMalli);
				break;
			}
			if (vastaus == 3) {
				cout << "Anna uusi vuosimalli: ";
				cin >> aVuosimalli;
				Autot[counter]->setVuosimalli(aVuosimalli);
				break;
			}
			if (vastaus == 4) {
				cout << "Anna uusi Vari: ";
				cin >> aVari;
				Autot[counter]->setVari(aVari);
				break;
			}
			break;

		case 6:
			Autot.clear();
			paalla = false;
			break;

		default:
			break;
		}
	}
	return EXIT_SUCCESS;
}