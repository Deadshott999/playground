#include "playground.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <map>

using namespace std;




char findMostFrequentChar(string input){
	map<char, int> frequency;
	for(int i = 0; i < input.size(); i++){
		if(!frequency.contains(input.at(i))){
			frequency[input.at(i)] = 1;
		}else{
			int& value = frequency[input.at(i)];
			value++;
		}
	}

	int largest = -1;
	char character = 0;
	for(auto it : frequency){
		if(it.second > largest){
			largest = it.second;
			character = it.first;
		}
	}
	return character;

}



int main()
{
	
	string a = "111144";
	cout << findMostFrequentChar(a) << endl;


	return EXIT_SUCCESS;
}
