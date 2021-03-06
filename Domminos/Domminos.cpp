// Domminos.cpp : Defines the entry point for the console application.
//
//potentially handy includes - google the C++ documentation for details
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <cctype>
#include <fstream> 

using namespace std;

// FOR ALL THE FUNCTION DECLARATIONS BELOW, YOU MAY USE VECTORS INSTEAD OF LISTS BUT BEAR IN MIND THE DIFFERENCE IN EFFICIENCY MAY REQUIRE YOU TO ALTER THE IMPLEMENTATION A BIT

/*
This function reads a file and stores each line in a list of strings, you should use <fstream> to achieve this
@param	l: the list of strings
@param	s: the filename
@return	true if the file was read successfully, false otherwise
*/
bool readFile(list<string>& l, string fileName)
{
	ifstream file(fileName);
	string line;
	
	
	while (getline(file, line))
	{
		l.push_back(line);
	}
	




}

/*
This function returns true if a specified string is contained in a list
@param	l: the list of strings
@param	s: the string to be checked
@return	true if s is a member of l, false otherwise
*/
bool isIn(list<string> l, string s)
{
	for (string word : l)
	{
		if (s == word)
			return true;
		

	}
	return false;

}

string toLower(string in) //makes string lower case
{
	string firstLower;
	for (int i = 0; i < in.length(); ++i) {
		firstLower += tolower(in[i]);
	}
	return firstLower;
}

/*
This function returns true if the last letter of one string matches the first letter of another
@param	first: 	the string whose first character is to be checked
@param	last: 	the string whose last character to be checked
@return	true if first and last characteras are equal, regardless of case
*/

bool match(string first, string last)
{
	
	
	string firstLower = toLower(first);
	string lastLower = toLower(last);

		return first[first.length() - 1] == last[0];



}



//insert program here...
int main()
{

	list<string> words;
	readFile(words, "Elements.txt");





	return 0;
}
