#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	vector<double> vd(4);
	
	vd[0] = 1.2;
	vd[1] = 2.1;
	vd[2] = 3.4;
	vd[3] = 4.3;
	
	vd.at(1) = 2.3;
	
	cout<< vd[1] <<endl;
	
	return 0;
}

