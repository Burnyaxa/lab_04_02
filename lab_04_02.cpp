// lab_04_02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	double ch=-1;
	double n=1.;
	double sum = 0;
	double sum_p = 0;
	const double eps = 0.000001;
	cout << "a = "; cin >> a;
	do{
		sum_p = sum;
		ch *= (1 - a);
		sum += (ch / n);
		n++;
	  } while (abs((sum -  sum_p)) > eps);
	cout << sum_p << endl;
	cout << log(a)<< endl;
	system("pause");
	return 0;
}


