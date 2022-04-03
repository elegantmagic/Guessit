#include <bits/stdc++.h>
using namespace std;

int main()
{
    int guess;
    int n;
    char again;
    do  {
    srand(time(0));
    guess = rand()%100 + 1;
    while(cin >> n)
    {
        if(n == guess)
            {cout << "Ban da doan dung" << endl;
            break;}
        else if(n > guess)
            cout << "So cua ban lon hon" << endl;
        else cout << "So cua ban nho hon" << endl;
    }
    cout << endl << "Do you want to play again (y/n) ?  ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}
