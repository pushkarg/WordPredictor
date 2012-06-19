#include<iostream>
#include<fstream>

using namespace std;

class FileReader {
	string file_name;
	fstream file_obj;

public:
	FileReader();
	FileReader(string file_name);
	void open(string file_name);
};


FileReader :: FileReader(){
}

FileReader :: FileReader(string file_name){
	this->file_name = file_name;
	file_obj.open(this->file_name.c_str());
	if(!file_obj)
		throw "Could not open the file";
}

void FileReader :: open(string file_name){
	this->file_name = file_name;
	file_obj.open(this->file_name.c_str());
	if(!file_obj)
		throw "Could not open the file";
}
