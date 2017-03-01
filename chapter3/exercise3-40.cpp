#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

int main()
{
    char str1[] = "Hello";
    char str2[] = " World!";
    const int size = strlen(str1) + strlen(str2) + 10;
    char str3[size];
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3 << endl; 
    return 0;
}