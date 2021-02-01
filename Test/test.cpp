#include<iostream>
#include<vector>
#include<bitset>
#include<cstring>
using namespace std;

int main(){
	/*vector<string> phrase(10, "c");
	for (vector<string>::iterator iter = phrase.begin(); iter != phrase.end(); iter++)
		cout << *iter << endl;

	vector<string>::iterator it = phrase.end() + 3;

	for (int k = 0; k != 4; k++) {
		phrase.push_back("a");
	}

	cout << "changed: " << *it << endl;
	
	for (vector<string>::iterator iter = phrase.begin(); iter != phrase.end(); iter++)
		cout << *iter << endl;
	*/
	/*const int arr[] = { 1, 1, 2, 3, 5 };
	cout << "hexadecimal:" << endl;
	cout << arr << endl;
	cout << &arr[1] << endl;
	cout << "int:" << endl;
	cout << (int)arr << endl;
	cout << (int)&arr[1] << endl;
	*/
	const size_t arr_size = 10;
	int cstr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	bool exits = 0;
	vector<int> vec(cstr, cstr + arr_size);
	for(int* ptr = cstr; ptr != (cstr+arr_size); ptr++)
		cout << *ptr << " ";
	cout << endl;
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << " ";
	cout << endl << "sorted:";
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end();) {
		while (exits != 1) {
			if (*iter < *(iter + 1))
				swap(*iter)
		}
	}

	cin.get();
	return 0;
}