#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//�nceden �retti�iniz Tamsay� bir veri setindeki verilerin;
//Aritmetik ortalamas�n� bulup ekrana yazan
//En k���k ve en b�y�k veriyi bulup ekrana yazan
//Verilerin frekanslar�n� (hangi veriden ka� adet var, �rne�in 8�den 3 adet, 21�den 6 adet vs.) ekrana yazan
//Tek ve �ift olanlar�n� ayr� ayr� dizilere atayan (veri setini b�len)
//Ortalamadan k���k olanlar� ve di�erlerini ayr� ayr� dizilere atayan (veri setini b�len) program� yaz�n�z.

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
cout<<i+1<<". ortdan k���k say�:"<<ortdankucuk[i]<<endl;
for(int i=0;i<diger;i++)
cout<<i+1<<". ortdan b�y�k veya e�it say�:"<<digersayi[i]<<endl;
for(int i=0;i<10;i++)
{
for(int j=0;j<15;j++)
{if(j==sayilar[i])
tumsayilar[j]++;
}
}
for(int j=0;j<15;j++)
cout<<j<<" say�s�ndan "<<tumsayilar[j]<<" adet var."<<endl;

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

cout<<"en k���k veri:"<<sayilar[0]<<endl;
cout<<"en b�y�k veri:"<<sayilar[9]<<endl;

for(int i=0;i<10;i++)
{if((int)sayilar[i]%2==0)
ciftsayi[cift++]=sayilar[i];
else
teksayi[tek++]=sayilar[i];
}
for(int i=0;i<cift;i++)
cout<<i+1<<". ��FT SAYI:"<<ciftsayi[i]<<endl;
cout<<"\n";
for(int i=0;i<tek;i++)
cout<<i+1<<". TEK SAYI:"<<teksayi[i]<<endl;


	system("pause");
	return 0;
}
