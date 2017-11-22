#include "books.h"

void Book::setIdentifier(const std::string &str){
	identifier = str;
}

std::string& Book::getIdentifier(void){
	return identifier;
}

void Book::setAuthor(const std::string &str){
	author = str;
}

std::string& Book::getAuthor(void){
	return author;
}

void Book::setName(const std::string &str){
	name = str;
}

std::string& Book::getName(void){
	return name;
}





BookContainer::BookContainer(){
	//Try to open lib file to obtain its descriptor. In case of failure
	//just create it empty.
	std::ifstream fdin("lib/books.txt");
	if (fdin.is_open()) {
		fdin.close();
	}
	else {
		fdin.close();
		std::ofstream fdout("lib/books.txt", std::ios::trunc);
		fdout.close();
	}
}

BookContainer::~BookContainer(){
}

void BookContainer::add(Book& book){
	fd.open("lib/books.txt", std::ios::out | std::ios::app);
	fd<<book;
	fd.close();	
	
//	fd.open("lib/books.txt", std::ios::in);
//	fd>>book;
//	fd.close();	
	

}

std::ostream& operator<<(std::ostream& stream, Book& book){
	stream<<book.identifier<<";"<<book.author<<";"<<book.name<<'\n';
}

std::istream& operator>>(std::istream& stream, Book& book){
	std::string str;
	stream>>str;
	std::cout<<str<<std::endl;
}

//std::istream& operator>>(std::istream& stream, BookContainer& obj){
//	stream>> obj.n >> obj.m;
//}
