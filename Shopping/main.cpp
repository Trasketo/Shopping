#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

void readFile(ifstream& file, vector<string>& targetVec);


int main()
{
	ifstream myIfstream;

	vector<string> myVec;



	myIfstream.close();

	return 0;
}

void readFile(ifstream& file, vector<string>& targetVec)
{
	string temp;
	while (!file.eof())
	{
		file >> temp;
		targetVec.push_back(temp);
	}	
}