#include <iostream>
#include <string>

using namespace std;

void drawRect(char rectOption)
{
    switch (rectOption)
    {
        case '0':
            for (int i = 0; i < 8; i++)
            {
                for (int s = 0; s < 8; s++)
                {
                    cout << '*';
                }
                cout << endl;
            };
            break;
        case 'a':
            for (int i = 0; i < 8; i++)
            {
                for (int s = 0; s < i; s++)
                {
                    cout << ' ';
                }
                for (int w = 0; w < 8 - i; w++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 8; i++)
            {
                for (int s = 0; s < i; s++)
                {
                    cout << '*';
                }
                for (int w = 0; w < 8 - i; w++)
                {
                    cout << ' ';
                }
                cout << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 8; i++)
            {
                for (int w = 0; w < i; w++)
                {
                    cout << ' ';
                }
                for (int s = 0; s < 8 - (i * 2); s++)
                {
                    cout << '*';
                }
                for (int d = 0; d < i; d++)
                {
                    cout << ' ';
                }
                cout << endl;
            }
            break;
        case 'g':
            for (int i = 0; i < 5; i++)
            {
                for (int w = 0; w < 5 - i; w++)
                {
                    cout << ' ';
                }
                for (int s = 0; s < 8 - (8 - i * 2); s++)
                {
                    cout << '*';
                }
                for (int d = 0; d < 5 - i; d++)
                {
                    cout << ' ';
                }
                cout << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 4; i++)
            {
                for (int w = 0; w < i; w++)
                {
                    cout << ' ';
                }
                for (int s = 0; s < 8 - (i * 2); s++)
                {
                    cout << '*';
                }
                for (int d = 0; d < i; d++)
                {
                    cout << ' ';
                }
                cout << endl;
            }
            for (int i = 0; i < 5; i++)
            {
                for (int w = 0; w < 4 - i; w++)
                {
                    cout << ' ';
                }
                for (int s = 0; s < 8 - (8 - i * 2); s++)
                {
                    cout << '*';
                }
                for (int d = 0; d < 4 - i; d++)
                {
                    cout << ' ';
                }
                cout << endl;
            }
            break;
        case 'h':
            for (int i = 0; i < 4; i++)
            {
                for (int s = 0; s < i; s++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            for (int i = 0; i < 4; i++)
            {
                for (int w = 0; w < 4 - i; w++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            break;
        case 'z':
            for (int i = 0; i < 4; i++)
            {
                for (int h = 0; h < 4-i; h++)
                {
                    cout << ' ';
                }
                for (int s = 0; s < i; s++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            for (int i = 0; i < 4; i++)
            {
                for (int s = 0; s < i; s++)
                {
                    cout << ' ';
                }
                for (int w = 0; w < 4 - i; w++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            break;
        case 'e':
            for (int i = 0; i < 4; i++)
            {
                for (int s = 0; s < i; s++)
                {
                    cout << '*';
                }
                for (int w = 0; w < 8 - (i * 2); w++)
                {
                    cout << ' ';
                }
                for (int d = 0; d < i; d++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            for (int i = 0; i < 4; i++)
            {
                for (int s = 0; s < 4-i; s++)
                {
                    cout << '*';
                }
                for (int w = 0; w < i * 2; w++)
                {
                    cout << ' ';
                }
                for (int d = 0; d < 4-i; d++)
                {
                    cout << '*';
                }
                cout << endl;
            }
            break;
        case 'i':
            for (int i = 0; i < 8; i++)
            {
                for (int s = 0; s < 8 - i; s++)
                {
                    cout << '*';
                }
                cout << endl;
            };
            break;
        case 'k':
            for (int i = 0; i < 8; i++)
            {
                for (int s = 0; s < 8 - i; s++)
                {
                    cout << ' ';
                }
                for (int w = 0; w < i; w++)
                {
                    cout << '*';
                }
                cout << endl;
            };
            break;
    }
}

int main()
{
    char rectOption;
    cout << "Select rectangle option: ";
    cin >> rectOption;
    drawRect(rectOption);
}