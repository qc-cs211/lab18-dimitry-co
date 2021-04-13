#include <iostream>
using namespace std;
int main( ) {
    int b[3][2];
    for(int i=0;i<3;i++)
      for(int j=0;j<2;j++)
        b[i][j] = i+j;
    cout<<"Array size"<<sizeof(b)<<endl;//sizeof- # of bytes
    cout << "integer Size: "<<sizeof(int)<<endl;
    cout<<"Pointer size: " <<sizeof(b+0)<<endl;
    cout<<sizeof(*(b+0))<<endl; // size of the first row

    for(int i=0;i<3;i++){
      for(int j=0;j<2;j++)
        cout<< *(*(b+i)+j)<<" ";
      cout<< endl;
    }

    cout<<" b is: "<<b<<endl;
    cout<<" b+1 is: "<<b+1<<endl;//adds 8 bc first row is 8 bytes(2 int elements)

    cout<<" &b is: "<<&b<<endl;
    cout<<" &b+1 is: "<<&b+1<<endl<<endl;

    return 0;
}
