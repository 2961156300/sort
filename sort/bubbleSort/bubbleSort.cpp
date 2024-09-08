#include <iostream>

using namespace std;

int main()
{   
    int a[5] = {12,5,23,6,2};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;)
        {
            if(a[j]>a[j+1])
            {   int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }

    }
    for (int i = 0; i < 4; i++)
    {
        cout << i << " ";
    }
    return 0;
}