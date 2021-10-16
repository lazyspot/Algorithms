#include <bits/stdc++.h>

using namespace std;

int char_number[2000];

int main()
{
    unsigned char c;
    while(scanf("%c", &c) != EOF) {
        char_number[(int)c] +=1;
    }
    for(int i =0; i < 2000; ++i) {
        if(char_number[i] != 0) printf("%i %i\n", i, char_number[i]);
    }
    return 0;
}
