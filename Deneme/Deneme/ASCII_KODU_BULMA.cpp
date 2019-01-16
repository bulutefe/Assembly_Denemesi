#include <stdio.h>
#include <iostream>
using namespace std;

int koyrahvangitsin()
{
	int a;
	char b;
	printf("Lutfen bir harf giriniz: \n");
	cin >> b;
	a = b;
	printf("Yazdiginiz harfin ascii kodu %d", a);
	system("pause");
	return 0;
}