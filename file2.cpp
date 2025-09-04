// Function yo calculate average

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
double average (int arr[0], int size){
	int sum = 0;
	
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	
	return (double)sum/size; // return average
}

int main() {
	int scores[4] = {5, 10, 15, 20};
	
	cout << "Average = " << average(scores, 4) << endl;
	return 0;
}
