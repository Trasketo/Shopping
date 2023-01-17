#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"ItemFrequencies.h"

using namespace std;

void file2Vec(ifstream& file, vector<string>& targetVec);


int main()
{
	ifstream myIfstream;

	vector<string> myVec;

	myIfstream.open("shopping.txt");

	file2Vec(myIfstream, myVec);

	ItemFrequencies myItem(myVec);

	myItem.getStats();

	myIfstream.close();

	return 0;
}

void file2Vec(ifstream& file, vector<string>& targetVec)
{
	string temp;
	while (!file.eof())
	{
		file >> temp;
		targetVec.push_back(temp);
	}	
}