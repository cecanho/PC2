#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;
	int maiorNum = 0;
	int menorNum = 0;
	int nums[10];
	
	cout << "Entre com um n�mero inteiro" << endl;
	cin >> num;
	menorNum = num;
	
	for (int i = 0; i < 9 ; i++){
		cout << "Entre com um n�mero inteiro" << endl;
		cin >> num;
		if (num > maiorNum && num < menorNum){
			maiorNum = menorNum;
			menorNum = num; 
		}
		else if (num > maiorNum)
			maiorNum = num;	
		else if (num < menorNum){
			nums[i] = menorNum;
			menorNum = num;
		}
		else if (num > menorNum && num < maiorNum)
			nums[i] = num;			 
	}
	cout << "Maior N�mero: " << maiorNum << endl;
	cout << "Menor N�mero: " << menorNum << endl;
	
	return 0;
}