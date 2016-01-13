/*Ratespiel*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main()
{
	int Annahme(0), Zufallszahl(0), counter(0);
	bool found(false);  //F�r Abbruch der Suche
	char x('\0');
	srand(time(NULL));                                  //Initialisierung Zufallszahlengenerator

	cout<<"Eine Zahl von 1 bis 100 eingeben"<<endl<<endl;
	
	do
	{
		Zufallszahl=rand()%100+1;                           //erzeugen der Zufallszahl 0-99;
		while(found != true && counter <= 5) //Abfrage auf gefunden od. 5 Versuche
		{
			cout<<"Geben Sie die "<<counter+1<<" Zahl ein:";
			cin>>Annahme;
                                                      //Eingabe der Zahl
			if(Annahme<Zufallszahl)                         //Falls kleiner, dann ausf�hren
			{
			 	cout<<"Gr�ssere Zahl eingeben"<<endl;
			}
			else if(Annahme>Zufallszahl)                    //Falls gr�sser, dann ausf�hren
			{
				cout<<"Kleinere Zahl eingeben"<<endl;
			}
			else                                            //Falls gleich, dann ausf�hren
			{
				cout<<"Gratulation! Sie haben die Zahl "<<Zufallszahl<<" im "<<counter+1<<" Versuch erraten"<<endl;
				found = true;
			}
			counter++;
		}
		if(found == false && counter >= 6)                //Falls nach Schleifenabbruch nicht gefunden, dann ausf�hren
			cout<<"\nSie haben verlohren"<<endl;
			
		found = false;                                    //found zur�cksetzen
		counter = 0;                                      //counter zur�cksetzten
		cout<<"Spiel wiederhohlen? y/n"<<endl;            //Bedingung f�r Do-while Schleife
		cin>>x;
	}while(x=='y');
	return 0;
}



