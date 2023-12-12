#include <iostream>

using namespace std;

int main()
{
	int b,r;
	
	cout << "Birinci sayiyi giriniz: " << endl;
	cin >> b;
	cout << "Ikinci sayiyi giriniz: " << endl;
	cin >> r;
	
	if (b==r)
	{
		cout << "Sayilar birbirine esittir." << endl;
	}
	else
	{
		cout << "Sayilar birbirine esit degildir." << endl;
	}
	if (b!=r)
	{
		cout << "Sayilar birbirinden farklidir." << endl;
	}
	else
	{
		cout <<"Sayilar birbirinden farkli degildir." << endl;
	}
	if (b>r)
	{
		cout <<"Birinci sayi ikinci sayidan buyuktur." << endl;
	}
	else
	{
		cout <<"Birinci sayi ikinci sayidan buyuk degildir." << endl;
	}
	if (b<r)
	{
		cout <<"Birinci sayi ikinci sayidan kucuktur." << endl;
	}
	else
	{
		cout << "Birinci sayi ikinci sayidan kucuk degildir." << endl;
	}
	if (b>=r)
	{
		cout << "Birinci sayi ikinci sayiya esit ya da ikinci sayidan buyuktur." << endl;
	}
	else
	{
		cout << "Birinci sayi ikinci sayiya esit degildir ya da ikinci sayidan buyuk degildir." << endl;
	}
	if (b<=r)
	{
		cout << "Birinci sayi ikinci sayiya esit ya da ikinci sayidan kucuktur." << endl;
	}
	else
	{
		cout << "Birinci sayi ikinci sayiya esit degil ya da ikinci sayidan kucuk degildir." << endl;
	}
	return 0;
}