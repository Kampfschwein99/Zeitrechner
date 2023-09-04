// Dies ist ein Programm um Sekunden, Minuten und Stunden umrechnen zu lassen.


#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main (int nNumberofArgs, char*pszArgs[])

{

//Eingabe für Sekunden
float Sekunden;
cout << "Geben sie die Zeit in Sekunden ein:";
cin >> Sekunden;

//Eingabe für Minuten
float Minuten;
cout << "Geben sie die Zeit in Minuten ein:";
cin >> Minuten;

//Eingabe für Stunden
float Stunden;
cout << "Geben sie die Zeit in Stunden ein:";
cin >> Stunden;

//Berechnung für Sekunden
float SekundenB;
SekundenB= Minuten*60+Stunden*3600+Sekunden;

//Berechnung für Minuten
float MinutenB;
MinutenB= Sekunden/60+Stunden*60+Minuten;

//Berechnung für Stunden
float StundenB;
StundenB= Sekunden/3600+Minuten/60+Stunden;

//Ausgabe für Sekunden
cout << "Entspricht Sekunden:";
cout <<SekundenB<< endl;

//Ausgabe für Stunden
cout << "Entspricht Minuten:";
cout <<MinutenB<< endl;

//Ausgabe für Stunden
cout << "Entspricht Stunden:";
cout <<StundenB<< endl;

}
