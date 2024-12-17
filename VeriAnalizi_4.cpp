#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int dizi[20];
	int toplam = 0;
	int aritmetik_ort;
	int sayac;
	srand(time(NULL));
	
	for(int i = 0; i < 20; i++)
	{
		dizi[i] = rand() % (100-0+1)+0;
		toplam += dizi[i];
		cout << i+1 << ".sayý = " << dizi[i] << endl;
	}
	aritmetik_ort = toplam / 20;
	cout << "Ortalama : " << aritmetik_ort << endl;
	
	
	int sayi_b , sayi_k;
	sayi_b = -1;
	sayi_k = 101;
	
	for(int i = 0 ; i< 20 ; i++)
	{
		
		
		if(dizi[i] > sayi_b)
		{
		
			sayi_b = dizi[i];
		}
		if(dizi[i] < sayi_k)
		{
			sayi_k = dizi[i];
		}
		cout << i+1 << ". sayi : " << dizi[i] << endl;
	}
	cout << "Büyük sayi: " << sayi_b << endl;
	cout << "Küçük sayi: " << sayi_k << endl;
	int sayac2 = 0;
	for (int i = 0 ; i < 20 ; i++)
	{
		for(int j = 0 ; j < 20 ; j++)
		{
			if(dizi[i] == dizi[j])
			{
				sayac2++;
			}
		}
		cout << dizi[i] << " den " << sayac2 << " tane var." << endl;
		sayac2 = 0;
	}
	
	
	
	
	
	
	
	
	for (int i = 0  ; i < 20 ; i++ )
	{
		if(dizi[i] % 2 == 0)
		{
			sayac++;
		}
	}
	int tek_sayi = 20 - sayac;
	int cift_sayi = sayac;
	
	int teksayilar[tek_sayi];
	int ciftsayilar[cift_sayi];
	
	for(int i = 0; i < 20; i++)
	{
		if(dizi[i] % 2 == 0)
		{
			int j = 0;
			ciftsayilar[j] = dizi[i];
			j++;
		}
		else
		{
			int j = 0;
			teksayilar[j] = dizi[i];
			j++;
		}
	}
	sayac = 0;
	
	for (int i = 0  ; i < 20 ; i++ )
	{
		if(dizi[i] < aritmetik_ort)
		{
			sayac++;
		}
	}
	int kucuk_sayi = sayac;
	int buyuk_sayi = 20 - sayac;
	
	int kucuksayilar[kucuk_sayi];
	int buyuksayilar[buyuk_sayi];
	
	
	for(int i =0; i < 20; i++)
	{
		if(dizi[i] < aritmetik_ort)
		{
			int j = 0;
			kucuksayilar[j] = dizi[i];
			j++;
		}
		else
		{
			int j = 0;
			buyuksayilar[j] = dizi[i];
			j++;
		}
	}
	
	
	
	
	
	
     
     
     
     
	system("pause");
	return 0;
}
