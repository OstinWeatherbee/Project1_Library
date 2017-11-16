#include "books.h"







BookContainer::BookContainer(){
	std::ifstream fin("lib/books.txt");
	if (fin.is_open()) {
		fin.close();
	}
	else {
		fin.close();
		std::ofstream fout("lib/books.txt", std::ios::trunc);
		fout.close();
	}
	fd.open("lib/books.txt", std::ios::out | std::ios::in);
	fd.write("Hello!", 6);
	std::cout<<"!!"<<std::endl;
}

BookContainer::~BookContainer(){
	fd.close();
}
