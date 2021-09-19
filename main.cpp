#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    int m,a;
    a=0;
    ofstream f1("d:\\m.dat");
    while(true){
        cin>>m;
        a++;
        if(m==0)
            break;
            f1<<m;


    }
    cout<<a;
    f1.close();

    return 0;
}
