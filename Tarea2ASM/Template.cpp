// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
extern "C" int Area(int diame), Radio(int diame);

int main()
{
	int diame, salida, salida1;
	cout << "Entrar el diametro : ";
	cin >> diame;
	salida = Area(diame);
	salida1 = Radio(diame);
	cin.get();
	cout << "El Radio es : " << salida1 << endl;
	cout << "El Area es : " << salida << endl;

	
	return 0;
  }