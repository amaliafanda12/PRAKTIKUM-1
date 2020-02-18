#include<iostream>
using namespace std;

int main()
{
	int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2];
			int j, k;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Maka Transposenya Adalah " << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					ArrayB[i][j] = ArrayA[j][i];
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
}
