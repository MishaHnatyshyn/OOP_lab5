#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

list<string> generateList(string str){
    list<string> list;
    char separator = ',';
    int start = 0 , length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == separator || i == str.length()-1){
            length = i - start;
            string temp = str.substr(start,length);
            start +=length + 1;
            list.push_back(temp);
        }
    }
    return list;
}

void printWordsWithLength(int length, list<string> List){
    list<string>::const_iterator iterator;
    for (iterator = List.begin(); iterator != List.end(); ++iterator) {
        if ((*iterator).length() == length ) cout << *iterator << "  ";
    }
}

int main() {
    string text = "sdf,fsdfsdf234,sdfsdf,sdfs,df,sdf,sdf,sdf23f,d,gsdf,g,sdf,gsd,fg,sdfg,dsg.";
    list<string> myList = generateList(text);
    printWordsWithLength(3, myList);
    return 0;
}
