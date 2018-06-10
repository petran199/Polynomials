#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	Polionimo pol;
	
	pol.msg2User();
	double** aray= pol.crt2dDoubleTbl(pol.getPlithosExisosewn(), pol.getPlithosPolionimwn());
	pol.fillTblWithValues(aray);
	pol.printRslt(aray, pol.getPlithosExisosewn(), pol.getPlithosPolionimwn(), 2);

	pol.dlt2dDoubleTbl(aray, pol.getPlithosPolionimwn());
	
    return 0;
}

