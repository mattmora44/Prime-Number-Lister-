#import <iostream>
#import <cmath>
using namespace std;
int main(){
	//get input 
	int max = -1;
	int counter = 0;
	while (max < 1){
		cout <<"Enter max number: ";
		cin >> max;
	}
	cout <<"Prime numbers up to "<<max<<":\n";
	for (int i = 1;i <= max; i++){
		counter = 0;
		for (int j = 1; j <= i; j++){
			if (i % j == 0){
				counter++;
			}

		}
		if (counter <= 2){
				cout<<i<<endl;
		}
	}

}