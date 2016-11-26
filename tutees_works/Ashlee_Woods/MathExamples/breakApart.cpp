/***********************************
  Lab 6
#1 - Function

 *************************************/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void breakApart()
{
	int numofdigits, sizeofarray, group;
	int pos_num;

	cin >> pos_num;
	cout << "pos_num " << pos_num << endl; 
	if (pos_num < 10) {
		//1 digit
		numofdigits = 1;
	}
	else if ((pos_num >= 10) && (pos_num < 100)) {
		//2 digits
		numofdigits = 2;
	}
	else if ((pos_num >= 100) && (pos_num < 1000)) {
		//3 digits
		numofdigits = 3;
	}
	else if ((pos_num >= 1000) && (pos_num < 10000)) {
		//4 digits
		numofdigits = 4;
	}
	else if ((pos_num >= 10000) && (pos_num < 100000)) {
		//5 digits
		numofdigits = 5;
	}
	else if ((pos_num >= 100000) && (pos_num < 1000000)) {
		//6 digits
		numofdigits = 6;
	}
	else if ((pos_num >= 1000000) && (pos_num < 10000000)) {
		//7 digits
		numofdigits = 7;
	}
	else if ((pos_num >= 10000000) && (pos_num < 100000000)) {
		//8 digits 
		numofdigits = 8;
	}
	else if ((pos_num >= 100000000) && (pos_num < 1000000000)) {
		//9 digits
		numofdigits = 9;
	}
	else if ((pos_num >= 1000000000) && (pos_num <= 2147483647)) {
		//10 digits
		numofdigits = 10;
	}
	else{
		cout << "error\n";
		return;
	}
	int num_array[numofdigits];
	int temp;
	int i, j;
	for  (i=0; i<numofdigits; i++) {
		temp = pow(10, (i+1));
		group = pos_num % temp;
		num_array[i] = group / pow(10, i);
		cout << "\nnum_array[i]:" <<num_array[i] << "\n"  ;
		}
		cout << "final group: " << group/ pow(10,i) << endl;
	}
	cout << "numofdigits" << numofdigits << endl;
	cout << num_array[0] << endl;
	for (i=0; i < numofdigits; i+=3) {
		for (j=0; (j<3) && (j< numofdigits); j++){
			cout << setw(5) << num_array[i+j];
		}
		
	}

	printf ("goodbye\n");	
}
