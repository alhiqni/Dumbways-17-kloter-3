#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int angka[10]= {20,12,35,11,17,9,58,23,69,21};
	int side;

	cout << "\t\tFinction mengurutkan array\n";

	cout<<"\n\tData : "<<endl;

	for(int i=0; i<10; i++){

		cout << angka[i]<<", ";
	}
	cout << endl;

	for(int i=0; i<9; i++){

		for(int j=i+1; j<10; j++){

			if( angka[i] > angka[j] ){

		        side = angka[i];
		        angka[i] = angka[j];
		        angka[j] = side;
			}
		}
	}
	
	cout << "\n\tData diurutkan : " << endl;

	for(int i=0; i<10; i++){

		cout << angka[i] << " ";
	}
	return 0;
}