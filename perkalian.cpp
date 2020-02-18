#include<iostream>
using namespace std;

int main()
{
	int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2] = { {-5,4},{8,-12} };
			int hasil[2][2];
			int i, j, k, jumlah = 0;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Matriks B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Maka Hasil Perkaliannya Adalah" << endl;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					for (k = 0; k < 2; k++)
					{
						jumlah = jumlah + ArrayA[i][k] * ArrayB[k][j];
					}
					hasil[i][j] = jumlah;
					jumlah = 0;
				}
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					cout << hasil[i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
}
