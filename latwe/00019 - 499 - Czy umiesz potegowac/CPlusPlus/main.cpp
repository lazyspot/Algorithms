#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d;
    cin>>d;
    int a[d],b[d];
    for(int i=0; i<d; ++i)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0 ; i<d ; ++i)
    {
        int c = a[i]%10;
        switch(c)
        {
            case 9:
                if(b[i]%2)
                {
                    cout<<"9"<<endl;
                }
                else
                {
                    cout<<"1"<<endl;
                }
                break;
            case 8:
                if(!(b[i]%4))
                {
                    cout<<"6"<<endl;
                }
                else if(!(b[i]%2))
                {
                    cout<<"4"<<endl;
                }
                else if(b[i]>8)
                {
                    for(int k=3 ; k<=1000000000 ; k+=4)
                    {
                        if(!(b[i]%k))
                        {
                            cout<<"2"<<endl;
                            break ;
                        }
                    }
                }
                else
                {
                    cout<<"8"<<endl;
                }
                break;
            case 7 :
                if(!(b[i]%4))
                {
                    cout<<"1"<<endl;
                }
                else if(!(b[i]%2))
                {
                    cout<<"9"<<endl;
                }
                else if(b[i]>7)
                {
                    for(int k=3 ; k<=1000000000 ; k+=4)
                    {
                        if(!(b[i]%k))
                        {
                            cout<<"3"<<endl;
                            break ;
                        }
                    }
                }
                else
                {
                    cout<<"7"<<endl;
                }
                break;
            case 6 :
                cout<<"6"<<endl;
                break;
            case 5 :
                cout <<"5"<<endl;
                break;
            case 4 :
                if(!(b[i]%2))
                {
                    cout<<"6"<<endl;
                }
                else
                {
                    cout<<"4"<<endl;
                }
                break;
            case 3 :
                if(!(b[i]%4))
                {
                    cout<<"1"<<endl;
                }
                else if(!(b[i]%2))
                {
                    cout<<"9"<<endl;
                }
                else if(b[i]>3)
                {
                    for(int k=3 ; k<=1000000000 ; k+=4)
                    {
                        if(!(b[i]%k))
                        {
                            cout<<"7"<<endl;
                            break;
                        }
                    }
                }
                else
                {
                    cout<<"3"<<endl;
                }
                break;
            case 2:
                if(!(b[i]%4))
                {
                    cout<<"6"<<endl;
                }
                else if(!(b[i]%2))
                {
                    cout<<"4"<<endl;
                }
                else if(b[i]>2)
                {
                    for(int k=3 ; k<=1000000000; k+=4)
                    {
                        if(!(b[i]%k))
                        {
                            cout<<"8"<<endl;
                            break ;
                        }
                    }
                }
                else
                {
                    cout<<"2"<<endl;
                }
                break;
            case 1:
                cout<<"1"<<endl;
                break ;
            case 0:
                cout<<"0"<<endl;
                break ;
            default :
                cout<<a[i]%10<<endl;
                break;
        }
    }
    return 0 ;
}
