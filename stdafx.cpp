#pragma region Libraries
#include "stdafx.h"
#include <stdlib.h>
#include <cmath>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
istringstream ssin;
#pragma endregion

#pragma region Asimanta

Polionimo::Polionimo()
{
	delta = 0;
	riza1 = 0;
	riza2 = 0;
	plithosExisosewn = 0;
	plithosPolionimwn = 3;
	 s = " ";
	 val = 0;
	 c = ' ';
	 done = false;
	 apadisi = 0;
	// cout << "const\n\n";
}

Polionimo::~Polionimo()
{
	
	//dlt2dDoubleTbl(aray, pol.getPlithosPolionimwn())
	//cout << "\n\ndestr\n\n";
}

void Polionimo::setDelta(int value)
{
	delta = value;
}

int Polionimo::getDelta() const
{
	return delta;
}

void Polionimo::setPlithosExisosewn(int value)
{
	plithosExisosewn = value;
}

int Polionimo::getPlithosExisosewn()const
{
	return plithosExisosewn;
}

int Polionimo::getPlithosPolionimwn()const
{
	return plithosPolionimwn;
}

char ** Polionimo::crt2dCharTbl(int noRows, int noClms)
{
	char** aray = new char*[noRows];
	for (int i = 0; i < noRows; i++) {
		aray[i] = new char[noClms];
	}
	return aray;
}

void Polionimo::dlt2dCharTbl(char ** aray, int noClms)
{
	for (int i = 0; i < noClms; i++)delete[] aray[i];
	delete[] aray;
}

void Polionimo::prntResults(double ** aray, int noRows, int noClms, int precision)
{
	cout << "ta (a,b,c) gia to 1o polionimo einai \n";
	for (int i = 0; i < noRows; i++) {
		for (int j = 0; j < noClms; j++) {
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout.width(10);
			cout.precision(precision);
			cout << aray[i][j];
		}
		cout << endl;
		if (i < noRows - 1) {
			cout << "\nta (a,b,c) gia to " << i + 2 << "o polionimo einai \n";
		}

	}
	switch (noRows)
	{
	case 1:
		sinartisiDelta(aray, 0, precision);
		break;
	case 2:
		sinartisiDelta(aray, 0, precision);
		sinartisiDelta(aray, 1, precision);
		break;
	case 3:
		sinartisiDelta(aray, 0, precision);
		sinartisiDelta(aray, 1, precision);
		sinartisiDelta(aray, 2, precision);
		break;
	case 4:
		sinartisiDelta(aray, 0, precision);
		sinartisiDelta(aray, 1, precision);
		sinartisiDelta(aray, 2, precision);
		sinartisiDelta(aray, 3, precision);
		break;
	default:
		sinartisiDelta(aray, 0, precision);
		sinartisiDelta(aray, 1, precision);
		sinartisiDelta(aray, 2, precision);
		sinartisiDelta(aray, 3, precision);
		sinartisiDelta(aray, 4, precision);
		break;
	}
}

void Polionimo::fillTblBasedOnPlithosExisosewn(double** aray)
{
	switch (getPlithosExisosewn())
	{
	case 1:
		msgTimesPolionimwn(1);
		for (int i = 0; i < getPlithosExisosewn(); i++) {
			for (int j = 0; j < getPlithosPolionimwn(); j++) {
				while (!done) {
					getline(cin, s, '\n');
					ssin.clear();
					ssin.str(s);
					ssin >> val;
					if (ssin.fail()) {
						cout << "aparadektoi xaraktires(" << s << ") \n";
					}
					else
					{
						ssin >> c;
						if (ssin.eof()) {
							aray[i][j] = val;
							done = true;
						}
						else {
							cout << "aparadektos xaraktiras (\'" << c << "\')\n";

						}
					}
				}
				done = false;
			}
		}
		break;
	case 2:
		msgTimesPolionimwn(1);
		for (int i = 0; i < getPlithosExisosewn(); i++) {
			for (int j = 0; j < getPlithosPolionimwn(); j++) {
				while (!done) {
					getline(cin, s, '\n');
					ssin.clear();
					ssin.str(s);
					ssin >> val;
					if (ssin.fail()) {
						cout << "aparadektoi xaraktires(" << s << ") \n";
					}
					else
					{
						ssin >> c;
						if (ssin.eof()) {
							aray[i][j] = val;
							done = true;
						}
						else {
							cout << "aparadektos xaraktiras (\'" << c << "\')\n";

						}
					}
				}
				done = false;
			}
			if (i < getPlithosExisosewn() - 1) {
				msgTimesPolionimwn(i + 2);
			}
		}
		break;
	case 3:
		msgTimesPolionimwn(1);
		for (int i = 0; i < getPlithosExisosewn(); i++) {
			for (int j = 0; j < getPlithosPolionimwn(); j++) {
				while (!done) {
					getline(cin, s, '\n');
					ssin.clear();
					ssin.str(s);
					ssin >> val;
					if (ssin.fail()) {
						cout << "aparadektoi xaraktires(" << s << ") \n";
					}
					else
					{
						ssin >> c;
						if (ssin.eof()) {
							aray[i][j] = val;
							done = true;
						}
						else {
							cout << "aparadektos xaraktiras (\'" << c << "\')\n";

						}
					}
				}
				done = false;
			}
			if (i < getPlithosExisosewn() - 1) {
				msgTimesPolionimwn(i + 2);
			}
		}
		break;
	case 4:
		msgTimesPolionimwn(1);
		for (int i = 0; i < getPlithosExisosewn(); i++) {
			for (int j = 0; j < getPlithosPolionimwn(); j++) {
				while (!done) {
					getline(cin, s, '\n');
					ssin.clear();
					ssin.str(s);
					ssin >> val;
					if (ssin.fail()) {
						cout << "aparadektoi xaraktires(" << s << ") \n";
					}
					else
					{
						ssin >> c;
						if (ssin.eof()) {
							aray[i][j] = val;
							done = true;
						}
						else {
							cout << "aparadektos xaraktiras (\'" << c << "\')\n";

						}
					}
				}
				done = false;
			}
			if (i < getPlithosExisosewn() - 1) {
				msgTimesPolionimwn(i + 2);
			}

		}
		break;
	default:
		msgTimesPolionimwn(1);
		for (int i = 0; i < getPlithosExisosewn(); i++) {
			for (int j = 0; j < getPlithosPolionimwn(); j++) {
				while (!done) {
					getline(cin, s, '\n');
					ssin.clear();
					ssin.str(s);
					ssin >> val;
					if (ssin.fail()) {
						cout << "aparadektoi xaraktires(" << s << ") \n";
					}
					else
					{
						ssin >> c;
						if (ssin.eof()) {
							aray[i][j] = val;
							done = true;
						}
						else {
							cout << "aparadektos xaraktiras (\'" << c << "\')\n";

						}
					}
				}
				done = false;
			}
			if (i < getPlithosExisosewn() - 1) {
				msgTimesPolionimwn(i + 2);
			}
		}
		break;
	}
	resetValues();
}

void Polionimo::resetValues()
{
	s = " ";
	val = 0;
	c = ' ';
	done = false;
	apadisi = 0;
}

void Polionimo::msgTimesPolionimwn(int value)
{
	cout << "dwse tis times (a ,b ,c) tou " << value << "ou polionimou \n";
}


#pragma endregion Methods

#pragma region Simantika

void Polionimo::msg2User()
{
	cout << "dwse to plithos twn exisosewn ton polionimwn (oi timi na einai megaliteri tou 1 \n";

	while (!done )
	{
	getline(cin, s, '\n');
	ssin.clear();
	ssin.str(s);
	ssin >> apadisi;
		if (ssin.fail()) {
			cout << "aparadektoi xaraktires (" << s << "), dwse akerea timi megaliteri tou 1" << endl;
		}
		else if (apadisi < 1) {
			cout << "dwse timi megaliteri tou 1 \n";
		}
		else {
			ssin >> c;
			if (ssin.eof()) {
				setPlithosExisosewn(apadisi);
				done = true;
			}
			else {
				cout << "aparadektos xaraktiras(\'" << c << "\') , boreis na exeis mono akeraia timi megaliteri tou 1" << endl;
			}
		}
	}
	resetValues();
}

double ** Polionimo::crt2dDoubleTbl(int noRows, int noClms)
{
	double** aray = new double*[noRows];
	for (int i = 0; i < noRows; i++) {
		aray[i] = new double[noClms];
	}
	return aray;
}

void Polionimo::dlt2dDoubleTbl(double ** aray, int noClms)
{
	for (int i = 0; i < noClms; i++)delete[] aray[i];
	delete[] aray;
}

void Polionimo::fillTblWithValues(double ** aray)
{
	msgTimesPolionimwn(1);
	for (int i = 0; i < getPlithosExisosewn(); i++) {
		for (int j = 0; j < getPlithosPolionimwn(); j++) {
			while (!done) {
				getline(cin, s, '\n');
				ssin.clear();
				ssin.str(s);
				ssin >> val;
				if (ssin.fail()) {
					cout << "aparadektoi xaraktires(" << s << ") \n";
				}
				else
				{
					ssin >> c;
					if (ssin.eof()) {
						aray[i][j] = val;
						done = true;
					}
					else {
						cout << "aparadektos xaraktiras (\'" << c << "\')\n";

					}
				}
			}
			done = false;
		}
		if (i < getPlithosExisosewn() - 1) {
			msgTimesPolionimwn(i + 2);
		}
	}
	resetValues();
}

void Polionimo::printRslt(double ** aray, int noRows, int noClms, int precision)
{
	cout << "ta (a,b,c) gia to 1o polionimo einai \n";
	for (int i = 0; i < noRows; i++) {
		for (int j = 0; j < noClms; j++) {
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout.width(10);
			cout.precision(precision);
			cout << aray[i][j];
		}
		cout << endl;
		if (i < noRows - 1) {
			cout << "\nta (a,b,c) gia to " << i + 2 << "o polionimo einai \n";
		}

	}
	for (int i = 0; i < noRows; i++) {
		sinartisiDelta(aray, i, precision);
	}
}

void Polionimo::sinartisiDelta(double** aray, int noRow,int precision)
{
	delta = pow(aray[noRow][1], 2) - 4 * aray[noRow][0] * aray[noRow][2];
	if (delta>0) {
		riza1 = (-aray[noRow][1] + sqrt(delta)) / 2 * aray[noRow][0];
		riza2 = (-aray[noRow][1] - sqrt(delta)) / 2 * aray[noRow][0];
	}
	else if (delta == 0) {
		riza1 = riza2 = -aray[noRow][1] / 2 * aray[noRow][0];
	}
	else riza1 = riza2 = -1;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(precision);
	cout << "\noi liseis tis "<<noRow+1<<"is exiswsis polionimou einai : 'x1'= " << riza1 << " & 'x2' = " << riza2 << endl;
}

#pragma endregion Methods
