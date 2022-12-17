#include<bits/stdc++.h>
using namespace std;
/*function of output so we can easily print*/
void printvector(vector<int> v){
	for(int i=0; i< v.size(); ++i){
		cout << v[i] << " ";
	} //v.size---> o(1) time complexity
	cout << endl;

}
int main(){
    vector<int> v; //declaring a vector
    int n;
    cin >> n;
    for(int i=0;i<n ;++i){
    	int x ;
    	cin >> x;
    	v.push_back(x);//x value will be inserted at end of the vector t(n)=o(1)
    	/*array and vector both are of time complexity o(1) but vector has dynamic memory*/
    }
    printvector(v);
    cout <<"filler vector : " << endl;
    vector <int> k(10,3);
    k.push_back(7); // last 11th position pe 7 aa jayega baki sare 3
    printvector(k);
    k.pop_back(); // ye vector ke last element ko nikal deta hai
    cout << "after pop function \n";
    printvector(k); // it will remove 7 as it was last element there in array
    vector<int> v2=v; // easily whole vector can be copied we can't do this in array
    // but any change on v2 will not impact v 
    v2.pop_back(); // remove last element of v2
    cout << "element of v\n";
    printvector(v);
    cout << "element of v2\n";
printvector(v2);
return 0;
}

/*vector ka size declare bhi kiya ja sakta hai
    vector<int> v(5);
    we can also fill places with same number
    vector<int> v(10,3); 10 places tak array main 3 value fill ho jayegi
*/