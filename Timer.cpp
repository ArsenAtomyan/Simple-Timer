#include <iostream>
#include <windows.h>
#include <stdlib.h>

void display(int minutes, int secconds);

int main()
{
    int min = 0;
    int sec = 0;
    int time = 0;

    std::cout << "Timer (seconds): ";
    std::cin >> time;

    system("CLS");

    for(int i = 0; i < time; i = i + 1)
    {
        display(min, sec);
        sec = sec + 1;
        if(sec == 60)
        {
            sec = 0;
            min = min + 1;
        }
        Sleep(1000);
    }

    return 0;
}

void display(int minutes, int seconds)
{
    bool min_double_digit = 0;
    bool sec_double_digit = 0;

    if(minutes > 9)
    {
        min_double_digit = 1;
    }
    if(seconds > 9)
    {
        sec_double_digit = 1;
    }

    // Screen Clean
    
    for(int i = 5; i; i--)
    {
        std::cout << "\b";
    }

    if(!min_double_digit)
    {
        std::cout << "0";
    }
    
    
    std::cout << minutes;
    std::cout << ":";

    if(!sec_double_digit)
    {
        std::cout << "0";
    }
    
    std::cout << seconds;

    return;
}