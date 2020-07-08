#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int X11, Y11, X12, Y12,
    X21, Y21, X22, Y22,
    X31, X32, Y31, Y32,
    pole_3=0, pole_1=1, pole_2=1, output;

    cin>>X11>>Y11>>X12>>Y12;
    cin>>X21>>Y21>>X22>>Y22;

    if(X11<=X21)
    {
        if((X12>X21)&&(Y12>Y21))
        {
            /*SKRAJNIE PRAWY CZESCI WPOLNEJ*/
            if(X12<X22)
            {
                X32=X12;
            }
            else
            {
                X32=X22;
            }
            /*SKRAJNIE LEWY CZESCI WSPOLNEJ*/
            if(X21>X11)
            {
                X31=X21;
            }
            else
            {
                X31=X11;
            }
            /*SKREAJNIE GORNY CZESCI WSPOLNEJ*/
            if(Y12<Y22)
            {
                Y32=Y12;
            }
            else
            {
                Y32=Y22;
            }
            /*SKRAJNIE DOLNY CZESCI WSPOLNEJ*/
            if(Y21>Y11)
            {
                Y31=Y21;
            }
            else
            {
                Y31=Y11;
            }
            pole_3=(Y32-Y31)*(X32-X31);
        }
        else pole_3=0;
    }
    if(X11>=X21)
    {
        if((X22>X11)&&(Y22>Y11))
        {
            /*KRAJNIE PRAWY CZESCI WPOLNEJ*/
            if(X12<X22)
            {
                X32=X12;
            }
            else
            {
                X32=X22;
            }
            /*SKRAJNIE LEWY CZESCI WSPOLNEJ*/
            if(X21>X11)
            {
                X31=X21;
            }
            else
            {
                X31=X11;
            }
            /*SKREAJNIE GORNY CZESCI WSPOLNEJ*/
            if(Y12<Y22)
            {
                Y32=Y12;
            }
            else
            {
                Y32=Y22;
            }
            /*SKRAJNIE DOLNY CZESCI WSPOLNEJ*/
            if(Y21>Y11)
            {
                Y31=Y21;
            }
            else
            {
                Y31=Y11;
            }
            pole_3=(Y32-Y31)*(X32-X31);
        }
        else pole_3=0;
    }
    /*----------------------------------*/
    if(X12>X11)
    {
        pole_1*=(X12-X11);
    }
    else
    {
        pole_1*=(X11-X12);
    }
    if(Y12>Y11)
    {
        pole_1*=(Y12-Y11);
    }
    else
    {
        pole_1*=(Y11-Y12);
    }
    /*----------------------------------*/
    if(X22>X21)
    {
        pole_2*=(X22-X21);
    }
    else
    {
        pole_2*=(X21-X22);
    }
    if(Y22>Y21)
    {
        pole_2*=(Y22-Y21);
    }
    else
    {
        pole_2*=(Y21-Y22);
    }
    output=pole_1+pole_2-pole_3;
    cout<<output;
    return 0;
}
