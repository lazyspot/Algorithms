#include <iostream>
#include <cstring>

#define T_SIZE 1001

using namespace std;

char* string_merge(char *a, char *b)
{
    int i, c;
    i=0;
    c=0;
    char *s = new char [10000];
    while(a[i] != '\0' && b[i] !=  '\0')
    {
        s[c]=a[i];
        ++c;
        s[c]=b[i];
        ++c;
        ++i;
    }
    s[c]='\0';
    return s;
};

int main()
{
    int t, n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t; /* wczytaj liczbę testów */
    cin.getline(S1,T_SIZE);
    while(t)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        S=string_merge(S1,S2);
        cout << S << endl;
        delete[] S;
        t--;
    }
    return 0;
}
