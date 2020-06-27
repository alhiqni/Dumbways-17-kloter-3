#include <iostream>
using namespace std;

void membuatPersegi(int x);

int main(int argc, char const *argv[])
{
	int x;
	printf("Masukan panjang persegi: \n");
	cin>> x;
	membuatPersegi(x);
	cin.get();
	return 0;
}

void membuatPersegi(int x){

	if ( (x%2) == 0 ){
		x += 1;
	}
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			if (i== ((x+1)/2) && j== ((x+1)/2)){
				cout << "# ";
			}else if (i== ((x+1)/2) || j== ((x+1)/2))
			{
				cout << "* ";
			}else if (i == 1 && j==1 || i==1 && j==x || i==x && j==1 || i==x &&j==x){
				cout << "* ";
			}else{

				cout<< "# ";
			}

		}
		cout << endl;
	}
} 