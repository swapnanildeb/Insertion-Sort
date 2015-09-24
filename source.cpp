#include<iostream>
using namespace std;

int main(){
	int a[5] = { 3, 5, 2, 6, 4 };
	for (int i = 0; i < 5; i++){
		cout << a[i] << endl;
	}
	for (int j = 1; j < 5; j++){
		int key = a[j];
		//Insert a[j]  into the sorted sequence a[1..j-1]
		int i = j - 1;
		while (/*i > 0 &&*/ a[i] > key){
			a[i + 1] = a[i];
			i--;		
		}
		a[i + 1] = key;

	}
	for (int i = 0; i < 5; i++){
		cout << a[i];
	}
}
