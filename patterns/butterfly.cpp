#include <iostream>
using namespace std ;
int main(){
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j<=2*n; j++)
        {
            if (j>i && j<=(2*n-i))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j<=2*n; j++)
        {   
            if(i>1){
                if (j>n-i+1 && j<n+i)
                {
                    /* code */
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}