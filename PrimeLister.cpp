#import <iostream>
#import <cmath>
using namespace std;
int main(){
	//get input 
	unsigned long max = 0;
	unsigned long counter = 0;
	while (max <= 0 ){
		cout <<"Enter max number (up to 4,294,967,295): ";
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