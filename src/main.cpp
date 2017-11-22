#include <iostream>
#include "books.h"

int main(){
	BookContainer cont; 
	
	Book book;
	
	while(1){
	std::string str;
	std::cout<<"Enter book's id: ";
	std::cin>>str;
	book.setIdentifier(str);
	std::cout<<"Enter book's author: ";
	std::cin>>str;
	book.setAuthor(str);
	std::cout<<"Enter book's name: ";
	std::cin>>str;
	book.setName(str);
	
	cont.add(book);
	}
}
