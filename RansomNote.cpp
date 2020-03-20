#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;
bool canConstruct(string ransomNote, string magazine) {
	map<char, int> ransomNoteMap;
	map<char, int> magazineMap;
	for (const auto e : ransomNote)
		++ransomNoteMap[e];
	for (const auto e : magazine)
		++magazineMap[e];
	if (ransomNoteMap.size() > magazineMap.size())
		return false;
	map<char, int>::iterator beginRansomNoteMap = ransomNoteMap.begin(),
		beginMagazineMap = magazineMap.begin();
	map<char, int>::iterator endRansomNoteMap = ransomNoteMap.end(),
		endMagazineMap = magazineMap.end();
	for (;beginRansomNoteMap != endRansomNoteMap;beginRansomNoteMap++) {
		if (magazineMap[beginRansomNoteMap->first] < beginRansomNoteMap->second)
			return false;
	}
	return true;
}
	
int main() {
	/*string testRansomNote = "bg";
	string testmagazine	="efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";*/
	string testRansomNote = "a";
	string testmagazine = "b";
	cout << canConstruct(testRansomNote, testmagazine);
}