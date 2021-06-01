#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
void pianino(int freq);
int main()
{
    pianino(500);
    return 0;
}



void pianino(int freq)
{
    while (1) {
        switch (_getch())
        {
        case 'q': {system("cls");
            Beep(500, freq);
        }
                break;
        case 'w': {system("cls");
            Beep(523.25, freq);
        }
                break;
        case 'e': {system("cls");
            Beep(587.33, freq);
        }
                break;
        case 'r': {system("cls");
            Beep(659.26, freq);
        }
                break;
        case 't': {system("cls");
            Beep(698.46, freq);
        }
                break;
        case 'y': {system("cls");
            Beep(783.99, freq);
        }
                break;
        case 'u': {system("cls");
            Beep(880, freq);
        }
                break;
        case 'i': {system("cls");
            Beep(987.77, freq);
        }
                break;

        }
    }
}