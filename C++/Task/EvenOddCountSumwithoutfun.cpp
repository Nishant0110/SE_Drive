#include <iostream>
using namespace std;
int main()
{
    int num[10], i,oddcount[10],evencount[10],j,k,oddsum,evensum;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter any number :";
        cin >> num[i];
    }
    cout << "This is even number:";
    for (i = 0; i < num[i]; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << "\t";
            evencount[j]=num[i];
            j++;
            evensum+=num[i];
        }
        
    }cout<<"this is even number counter:"<<j<<endl;
    cout<<"This is even sum:"<<evensum<<endl;
    cout<<endl<<"This is odd number:";
    for(i=0;i<num[i];i++)
    {
        if(num[i]%2 !=0)
        {
            cout<<num[i]<<"\t";
        }
    }
}
