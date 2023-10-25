#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void hello_1()
{
    printf("Hello World\n");
}
void hello_2()
{
    std::cout << "Hello World\n";
}
void hello_3()
{
    using namespace std;
        cout << "Hello World\n";
}
void hello_4()
{
    system("echo Hello World\n");
}
void hello_5()
{
    char cmd[50];
    strcpy(cmd, "echo Hello World");
    system(cmd);
}
void hello_6()
{
    char a[100]={4,1,8,8,11,-68,19,11,14,8,0,0};
    for(;a[12]<a[4];a[12]++)
    {
        printf("%c",sizeof(a)+a[a[12]]);
    }
}
int main ()
{
    hello_1();
    hello_2();
    hello_3();
    hello_4();
    hello_5();
    hello_6();
    return 0;
}