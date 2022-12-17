/* pairs are used to maintain relation between two things*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,string> p; //pair to compare two data type
    //p= make_pair(2,"abc");//to add value in pair
    p={1,"xyz"};//to add value in pair this can also be used
    pair<int,string> p1=p; // to copy pair
    p1.first=3; // it will not change value of output if you want then do 
                // &p1=p;
    pair<int,string> &p2=p;
    p2.second ="abc"; //this changes value as it is called by reference
 cout << p.first <<" " << p.second << endl; //to print pair first and second values
 pair<int,int> a[3]; // declared an array with pair
 a[0]= {1,2};
 a[1]= {3,4};
 a[2]= {5,6};
for (int i = 0; i < 3; ++i)
{
	cout << "before swap \n";
	cout << a[i].first << " " <<a[i].second << endl;
}
/*now if i swap the first and last element of any array then it will swap in all other array */
swap(a[0],a[2]); 
for (int i = 0; i < 3; ++i)
{
	cout << "after swap \n";
	cout << a[i].first << " " <<a[i].second << endl;
}
}