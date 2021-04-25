#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
int t, y, temp;
vector <int> numbers;
scanf("%d",&t);
for (int i=0; i<t; i++)
{
    scanf("%d",&y);
    for (int j=0; j<y; j++)
    {
        scanf("%d",&temp);
        numbers.push_back(temp);
    }
    for (int k=numbers.size()-1; k<=numbers.size(); k--)
    {
        printf("%d ",numbers[k]);
    }
    numbers.clear();
    puts("");
}
    return 0;
}
