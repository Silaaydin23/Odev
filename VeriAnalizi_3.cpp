#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int dizi[500];
	int toplam = 0;
	float ortalama;
	srand(time(NULL));
	bool control = 1;
	int sayac = 0;
	
	do
	{
		for(int i = 0; i < 500; i++)
		{
			dizi[i] = rand() % (35-25+1)+25;
			toplam += dizi[i];
		}
		ortalama = toplam / 500;
		
		if(ortalama >= 20 && ortalama <= 30)
		{
			for(int i = 0; i < 500; i++)
			{
				cout << i+1 << ".sayý : " << dizi[i] << endl;
			}
			control = 0;
			cout << "Ortalama : " << ortalama << endl;
		}
		else
		{
			control = 1;
		}
	}
	while(control); 
	
	
    
	
	system("pause");
	return 0;
	
}
