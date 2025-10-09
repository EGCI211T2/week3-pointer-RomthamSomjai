#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  /*int n;

  cout<<"How may numbers";
  cin>>n;
  pa=new int[n];
  int *start=pa;

  for(i=0;i<n;i++){
    cout<<"Input no."<<i+1<<":";
    cin>> *pa;
    pa++;
  }*/

   if (argc<2) {
        cout<<"Number: "<<argv[0]<<"<n1> <n2> ..."<<endl;
        return 1;
    }

    int n = argc - 1;
    pa = new int[n];
    int *start = pa;

    for (i=0;i<n;i++) {
        *pa = atoi(argv[i+1]);
        pa++;
    }


pa -=n;
cout<<"Original: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<endl;
pa-=n;
pb=pa+(n-1);

for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}

//pa=&a[0];
pa=start;
cout<<"Reversed: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<endl;

pa=start;
delete []pa;
return 0;
}
