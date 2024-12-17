#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Önceden ürettiðiniz Tamsayý bir veri setindeki verilerin;
//Aritmetik ortalamasýný bulup ekrana yazan
//En küçük ve en büyük veriyi bulup ekrana yazan
//Verilerin frekanslarýný (hangi veriden kaç adet var, örneðin 8’den 3 adet, 21’den 6 adet vs.) ekrana yazan
//Tek ve çift olanlarýný ayrý ayrý dizilere atayan (veri setini bölen)
//Ortalamadan küçük olanlarý ve diðerlerini ayrý ayrý dizilere atayan (veri setini bölen) programý yazýnýz.

int main()
{
	setlocale(LC_ALL,"Turkish");
srand(time(NULL));
int kucuk=0,diger=0,tek=0,cift=0, sayilar[10],yedek,tumsayilar[15]={},ciftsayi[10],teksayi[10];
float toplam,ort,ortdankucuk[10],digersayi[10];
for(int i=0;i<10;i++)	
{sayilar[i]=rand()%(15-0+1)+0;
cout<<sayilar[i]<<endl;	
toplam+=sayilar[i];
ort=toplam/10;
if(sayilar[i]<ort)
ortdankucuk[kucuk++]=sayilar[i];
if(sayilar[i]>=ort)
digersayi[diger++]=sayilar[i];
}cout<<"ORT:"<<ort<<endl;
for(int i=0;i<kucuk;i++)
cout<<i+1<<". ortdan küçük sayý:"<<ortdankucuk[i]<<endl;
for(int i=0;i<diger;i++)
cout<<i+1<<". ortdan büyük veya eþit sayý:"<<digersayi[i]<<endl;
for(int i=0;i<10;i++)
{
for(int j=0;j<15;j++)
{if(j==sayilar[i])
tumsayilar[j]++;
}
}
for(int j=0;j<15;j++)
cout<<j<<" sayýsýndan "<<tumsayilar[j]<<" adet var."<<endl;

cout<<"-----------------------\n";
for(int i=0;i<10;i++)
{   for(int j=0;j<9;j++)
    { if(sayilar[j]>sayilar[j+1])
    { yedek=sayilar[j];
        sayilar[j]=sayilar[j+1];
        sayilar[j+1]=yedek;
     }
    }
}	
cout<<"-----------------------\n";
for(int i=0;i<10;i++)
cout<<sayilar[i]<<endl;	

cout<<"en küçük veri:"<<sayilar[0]<<endl;
cout<<"en büyük veri:"<<sayilar[9]<<endl;

for(int i=0;i<10;i++)
{if((int)sayilar[i]%2==0)
ciftsayi[cift++]=sayilar[i];
else
teksayi[tek++]=sayilar[i];
}
for(int i=0;i<cift;i++)
cout<<i+1<<". ÇÝFT SAYI:"<<ciftsayi[i]<<endl;
cout<<"\n";
for(int i=0;i<tek;i++)
cout<<i+1<<". TEK SAYI:"<<teksayi[i]<<endl;


	system("pause");
	return 0;
}
