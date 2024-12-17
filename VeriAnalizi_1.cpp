#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int dizi[500];
	srand(time(NULL));
	
	for(int i = 0; i < 500; i++)
	{
		dizi[i] = rand() % (100-0+1)+0;
		cout << i+1 << ".sayý = " << dizi[i] << endl;
	}

	
	
	system("pause");
	return 0;
}
