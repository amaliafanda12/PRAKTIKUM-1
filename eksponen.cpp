#include<iostream>
using namespace std;

int main()
{
	int ArrayA[2][2] = { {4,8},{2,10} }; 
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Eksponen Dari Matriks A Adalah " << endl;
			for (int x = 0; x < 2; x++) 
			{
				for (int y = 0; y < 2; y++) 
				{
					int Rumus = 1;
					for (int z = 0; z < 5; z++) 
					{
						Rumus = (ArrayA[x][y] * Rumus);
					}
					cout << Rumus << " ";
				}
				cout << endl;
			}
			cout << endl;
}
