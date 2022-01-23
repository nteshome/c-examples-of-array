 #include<iostream>
 using namespace std ;
 void printarray(int thearray[], int sizeofarray);
 int main ()
 {
     int x;
     int nat[3]={55,25,45};
     int a[5]={78,55,789};
     printarray(nat ,3);
 }
void printarray(int thearray[], int sizeofarray){
int x;
    for(int x =0 ; x<sizeofarray; x++){
    cout<<thearray[x];}



}
