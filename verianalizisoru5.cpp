#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//veri analizi soru 5
int main()
{
	setlocale(LC_ALL,"Turkish");
//0-100 (dahil) aras�nda 500 adet rastgele float veri �retiniz, uygun bir dizi yap�s� �zerinde saklay�n�z, ekrana
//yazd�r�n�z.
srand(time(NULL));	
float sayilar[500];
for(int i=0;i<500;i++)
{sayilar[i]=rand()%(100-0+1)+0+(float)rand()/(float)RAND_MAX;
cout<<sayilar[i]<<endl;
}	
	
	
	
	
	
	system("pause");
	return 0;
}
