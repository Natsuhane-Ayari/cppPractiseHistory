#include <iostream>
#include <string>

using namespace std;
int main(void){
    cout << "Nya~" << endl;

    //字串的初始方式
    string str0(10, '*');
    cout << "str0 = " << str0 << endl;

    string str1 = "hello";
    cout << "str1 = " << str1 << endl;

    //自動判斷預設值型別

    //string str3 = str1 + " " + str2 + "!";
    string str3a = "\"Hello \\ World!\"";
    string str3b = R"("Hello \ World \n 不會換行")";
    cout << str3a << endl << str3b << endl;

    cout << "str3a capacity = " << str3a.capacity() << endl;
    cout << "str3a length(size) = "<< str3a.size() << endl;
    cout << "str3a max_size = " << str3a.max_size() << endl;
    cout << "SUS\n           SSSSSSSSSS  \n        SSSSSSSSSSSSSSSS\n       SSSSSSSSSSSSSSSSSSS\n       SSSSSSSS        \n       SSSSSSS  SSSSSSSSSSS\n SSS   SSSSSSS SSSSSSSSSSSSS\nSSSSS  SSSSSSS  SSSSSSSSSSS\nSSSSS  SSSSSSSS\nSSSSS  SSSSSSSSSSSSSSSSS \nSSSSS  SSSSSSSSSSSSSSSSS \nSSSSS  SSSSSSSSSSSSSSSSS \nSSSSS  SSSSSSS   SSSSSSS \nSSSSS  SSSSSSS   SSSSSSS \n SSS   SSSSSSS   SSSSSSS \n       SSSSSSS   SSSSSSS \n       SSSSSSS    SSSSS \n        SSSSS" << endl;
    
    string str4 = "Hello World";
    str4.append(str1);
    cout << "str4 = " << str4 << endl;
    str4.append(" ");
    str4 += "Nya";
    cout << "str4 = " << str4 << endl;
    str4.push_back('!');
    cout << "str4 = " << str4 << endl;

    cout << "str4.find(\"World\") = " << str4.find("World") << endl;
    str4.insert(5,"哈哈5被我佔走啦wwwww");
    cout << "str4 = " << str4 << endl;
    str4.erase(str4.begin() + 6,str4.end() - 6);
    cout << "str4 = " << str4 << endl;

    //字串內容轉換成數值
    string str5 = "1234567890";
    int number1 = stoi(str5);
    cout << "number1 = " << number1 << endl;
    string str6 = "1234.56789";
    double number2 = stod(str6);
    cout << "number2 = " << number2 << endl;

    string str7 = to_string(number1);
    string str8 = to_string(number2);
    cout << "str7 = " << str7 << endl;
    cout << "str8 = " << str8 << endl;

    return 0;
}