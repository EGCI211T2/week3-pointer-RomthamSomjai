#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n;
  cout<<"How may numbers";
  cin>>n;
  pa=new int[n];
  int *start=pa;

  for(i=0;i<n;i++){
    cout<<"Input no."<<i+1<<":";
    cin>> *pa;
    pa++;
  }

  pa-=n;

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
