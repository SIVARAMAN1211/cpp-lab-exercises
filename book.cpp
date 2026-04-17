#include<iostream>
#include<string>
using namespace std;
class Book{
 public:
 string title;
 string author;
 Book(string t,string a){
 title =t;
 author=a;
 }
 void displayBook(){
 cout<<"Title: "<<title<<",Author:"<<author;
 }
};
int main(){
 string title,author;
 getline(cin,title);
 getline(cin,author);
 Book book(title,author);
 book.displayBook();
 return 0;
}
