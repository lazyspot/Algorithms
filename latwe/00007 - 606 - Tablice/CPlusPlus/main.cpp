#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
int x, y, temp;
vector <int> liczby;
scanf("%d",&x);
for (int i=0; i<x; i++)
{
    scanf("%d",&y);
    for (int j=0; j<y; j++)
    {
        scanf("%d",&temp);
        liczby.push_back(temp);
    }
    for (int k=liczby.size()-1; k<=liczby.size(); k--)
    {
        printf("%d ",liczby[k]);
    }
    liczby.clear();
    puts("");
}
    return 0;
}
