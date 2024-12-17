#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL , "Turkish");
    
    
	int ciro[5][12];
	float ortciro[5];
	float toplam = 0;
	int yil;
	int ortalama;
	srand(time(NULL));

	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			ciro[i][j] = rand() % (5000-100+1)+100;
		}
	}
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			toplam += ciro[i][j];
		}
		ortciro[i] = toplam / 12;
		toplam = 0;
	}
    
    cout << "Lütfen yýl bilgisi giriniz : ";
    cin >> yil;
    cout << endl;
    
    cout << yil << ". yýl için ortalamanýz : " << ortciro[yil-1] << endl;
    cout << endl;
    
    cout << "Yýlýn ortalama cirosundan fazla ciroya sahip olan aylar ve ciro bilgileri : " << endl;
    for(int i = 0; i < 12; i++)
    {
    	if(ortciro[yil-1] < ciro[yil-1][i])
    	{
    		cout << i+1 << ". ay için ciro : " << ciro[yil-1][i] << endl;
		}
	}
	cout << endl;
		
	for(int i = 0; i < 4; i++)
	{
	  	toplam += ciro[yil-1][i];
		
	}
	ortalama = toplam/4;
	cout << "1. çeyrek için ortalama : " << ortalama << endl;
	toplam = 0;
	
	for(int i = 4; i < 8; i++)
	{
	  	toplam += ciro[yil-1][i];
		
	}
	ortalama = toplam/4;
	cout << "2. çeyrek için ortalama : " << ortalama << endl;
	toplam = 0;
	
	for(int i = 8; i < 12; i++)
	{
	  	toplam += ciro[yil-1][i];
		
	}
	ortalama = toplam/4;
	cout << "3. çeyrek için ortalama : " << ortalama << endl;
	
	
	
	system("pause");
	return 0;
}

