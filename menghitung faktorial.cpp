#include<iostream>
using namespace std;
int main()
{
    int f,hasil=1;
    cout<<"masukan angka yang akan difaktorialkan ";
    cin>>f;
    for(int a=1; a<=f; a++)
    {
        hasil=hasil*a;
    }
    cout<<"maka hasil dari faktorialnya adalah "<<hasil;
}
