#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }

    }




int arrimage[n][m];
int x=m-1;
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
           {
            arrimage[i][j]=arr[i][x-j];        // logic for array's image
           }
    }

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
           {
           cout<<arrimage[i][j]<<" ";
           }
           cout<<endl;
    }

return 0 ;


















