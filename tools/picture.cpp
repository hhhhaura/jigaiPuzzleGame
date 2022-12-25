#include<bits/stdc++.h>
using namespace std;
/*
function void draw(int location) {
	var int memAddress; 
	let memAddress = 16384+location;
	// column 0
	do Memory.poke(memAddress, 3);
	do Memory.poke(memAddress +32, 252);
	return;
}
*/

int main() {
	for(int i = 0; i < 256; i ++) {
		string s; cin >> s;
		for(int j = 0; j < 32; j ++) {
			int word = i * 32 + j;
			short val = 0;
			for(int k = 0; k < 16; k ++) {
				val = val | (s[j * 16 + k] - '0') << k;
			}
			if(val && val != -32768)
				cout << "do Memory.poke(memAddress + " << word <<
				", " << val << ");\n";
		}
	}
}
