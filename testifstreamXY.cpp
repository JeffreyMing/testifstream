#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	/*
	�ɮפ��e�����諸�ƭ�:
	50 60
	80 100
	...
	*/
	string fileName("point data.txt");  //Ū�ɮ�
	ifstream ifs(fileName);  //in file stream �N�ɮ׼g�i�h

	if (!ifs) {
		cout << "Can't open file" << endl;
	}
	
	int x, y;

	while (ifs >> x >> y) {  //�N��r�ɤ�����Ʀs�Jx��y
		cout << x << " " << y << endl;
	}

	system("PAUSE");
	return 0;
}