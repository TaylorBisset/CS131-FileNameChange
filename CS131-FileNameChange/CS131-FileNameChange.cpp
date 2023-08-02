#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string inputFileName;
	cin >> inputFileName;
	ifstream inputFile(inputFileName);
	string fileName;

	while (getline(inputFile, fileName))
	{
		int position = static_cast<int>(fileName.find("_photo.jpg"));
		fileName.replace(position, strlen("_photo.jpg"), "_info.txt");
		cout << fileName << endl;
	}

	inputFile.close();

	return 0;
}
