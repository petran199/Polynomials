#pragma region Class


#include <stdio.h>
#include <tchar.h>
#include <string>
using namespace std;

class Polionimo
{
	//einai i diakrinousa
	double	delta ;
	//apothiki gia tis rizes twn polionimwn
	double riza1;
	double riza2;
	//apothiki tis timis p tha dwsei o xristis
	int plithosExisosewn ;
	//apothiki gia to plithos , sto paradeigma mas einai 3
	int plithosPolionimwn ;
	//apothiki gia ton edamiefti , ssin.str(s)  vazei ta stoixeia tou xristi ston edamiefti
	string s;
	//i timi pou exei dwsei o xristis apo to pliktrologio
	double val;
	//elegxos egirotitas ean exei dwsei skoupidia o xristis meta tin timi
	char c;
	// xreiazete stin while loops pou ginete elegxos
	bool done;
	// i apadisi toy plithous exisosewn
	int apadisi;

public:
	// constructor
	Polionimo();
	//destructor
	~Polionimo();
	//setarei tin timi tou delta(axriasto)
	void setDelta(int value);
	//axriasto
	int getDelta()const;
	//axriasto
	void setPlithosExisosewn(int value);
	//getarei tin timi tou plithous exiswsewn
	int getPlithosExisosewn()const;
	//mnm ston xristi gia to ti tha kanei
	void msg2User();
	//getarei tus times toy plithous poliwnumon
	int getPlithosPolionimwn()const;
	//dimiourgia Array typou double dinamika
	double** crt2dDoubleTbl(int noRows, int noClms);
	//diagrafi Array
	void dlt2dDoubleTbl(double** aray, int noClms);
	//axriasto
	char** crt2dCharTbl(int noRows, int noClms);
	//axriasto
	void dlt2dCharTbl(char** aray, int noClms);
	//axriasto
	void fillTblBasedOnPlithosExisosewn(double** aray);
	//fill tou pinaka me tis times toy xristi
	void fillTblWithValues(double ** aray);
	//aplo mnm ston xristi gia na dwsei times sta a,b,c
	void msgTimesPolionimwn(int value);
	//axriasto
	void prntResults(double** aray, int noRows,int noClms,int precision);
	//printarei ta apotelesmata twn rizwn
	void printRslt(double** aray, int noRows, int noClms, int precision);
	//vriskei tis rizes, diakrinousa klp..
	void sinartisiDelta(double** aray,int noRow,int precision);
	//resetarei tis  times twn metavlitwn (private)
	void resetValues();
};

#pragma endregion Polionima