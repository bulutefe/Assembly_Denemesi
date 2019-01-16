#include <stdio.h>
#include <iostream>
using namespace std;

class Hesap_Makinesi
{
public:
	Hesap_Makinesi();
	~Hesap_Makinesi();
	void ikisayi_toplama()
	{
		int a;
		int b;
		printf("Lutfen ilk sayiyi giriniz: \n");
		cin >> a;
		printf("Lutfen ikinci sayiyi girniz: \n");
		cin >> b;
		__asm
		{
			MOV EAX, a;
			ADD EAX, b;
			MOV a, eax;
		}
		sonuc1 = a;
		cout << "Islem sonucu: " << sonuc1 << endl;
	}
	void coksayi_toplama()
	{
		int a;
		int b;
		int c;
		printf("Lutfen ilk sayiyi giriniz: \n");
		cin >> a;
		printf("Lutfen ikinci sayiyi girniz: \n");
		cin >> b;
		__asm
		{
			MOV EAX, a;
			ADD EAX, b;
			MOV b, EAX;
		}
		while (c != 0)
		{
			printf("Lutfen diger sayiyi giriniz: \n#Donguden cikis icin 0 yaziniz. \n");
			cin >> c;
			__asm
			{
				MOV EAX, c;
				ADD EAX, b;
				MOV b, EAX;
			}
		}
		sonuc2 = b;
		cout << "Islem sonucu: " << sonuc2 << endl;

	}
	void ikisayi_carpma()
	{
		int a;
		int b;
		printf("Lutfen ilk sayiyi giriniz: \n");
		cin >> a;
		printf("Lutfen ikinci sayiyi girniz: \n");
		cin >> b;
		__asm
		{
			MOV EAX, a;
			MUL b;
			MOV a, EAX;
		}
		sonuc3 = a;
		cout << "Islem sonucu: " << sonuc3 << endl;
	}
	void coksayi_carpma()
	{
		int a;
		int b;
		int c;
		printf("Lutfen ilk sayiyi giriniz: \n");
		cin >> a;
		printf("Lutfen ikinci sayiyi girniz: \n");
		cin >> b;
		__asm
		{
			MOV EAX, a;
			MUL b;
			MOV b, EAX;
		}
		while (c != 1)
		{
			printf("Lutfen diger sayiyi giriniz: \n#Donguden cikis icin 1 yaziniz. \n");
			cin >> c;
			__asm
			{
				MOV EAX, c;
				MUL b;
				MOV b, EAX;
			}
		}
		sonuc4 = b;
		cout << "Islem sonucu: " << sonuc4 << endl;

	}
	void ikisayi_bolme()
	{
		int a;
		int b;
		printf("Lutfen ilk sayiyi giriniz: \n");
		cin >> a;
		printf("Lutfen ikinci sayiyi girniz: \n");
		cin >> b;
		__asm
		{
			XOR EDX, EDX;
			MOV EAX, a;
			MOV EBX, b;
			DIV EBX;
			MOV b, EDX;
			MOV a, EAX;
		}
		sonuc5 = b;
		cout << "Kalan: " << sonuc5 << endl;
		sonuc6 = a;
		cout << "Bolum: " << sonuc6 << endl;
	}

private:
	int sonuc1;
	int sonuc2;
	int sonuc3;
	int sonuc4;
	int sonuc5;
	int sonuc6;
};

Hesap_Makinesi::Hesap_Makinesi()
{
}

Hesap_Makinesi::~Hesap_Makinesi()
{
}