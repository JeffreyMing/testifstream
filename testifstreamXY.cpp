#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	/*
	檔案內容為成對的數值:
	50 60
	80 100
	...
	*/
	string fileName("point data.txt");  //讀檔案
	ifstream ifs(fileName);  //in file stream 將檔案寫進去

	if (!ifs) {
		cout << "Can't open file" << endl;
	}
	
	int x, y;

	while (ifs >> x >> y) {  //將文字檔內的資料存入x及y
		cout << x << " " << y << endl;
	}

	system("PAUSE");
	return 0;
}