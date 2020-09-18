
#include <iostream>
using namespace std;
const int MAX = 10;
void umnosci_redaka(int A[][MAX], int n, int m, int umnosci[]);


int main(){

	int A[MAX][MAX];
	int n, m;
	int i,j;
	int umnosci[MAX];



	cout << "Unesi broj redaka: " << endl;
	cin >> n;
	cout << "Unesi broj stupaca: " << endl;
	cin >> m;


	cout << "Unesi elemente polja" << endl;
	for (i = 0; i < n; i++){
		for (j = 0; j < m;j++)
			cin >> A[i][j];
	}


	cout <<"Elementi polja su: " << endl;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			cout << A[i][j]<<" ";
		cout << endl;
	}


	umnosci_redaka(A, n, m, umnosci);
	cout << "Elementi polja s umnoscima: " << endl;
	for (i = 0; i < n; i++)
		cout << umnosci[i] << " ";


	system("pause");
	return 0;
}

void umnosci_redaka(int A[][MAX], int n, int m, int umnosci[]){
	int umnozak = 1;
	int i, j;

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			umnozak = umnozak*A[i][j];

		}

		umnosci[i] = umnozak;
		umnozak = 1;
	}


}
