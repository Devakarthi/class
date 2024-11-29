#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
	int arr[]={10,5,20,45,35,65};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Vector is:";
	for (int i=0;i<n;i++)
	   cout<<vect[i]<<" ";
	sort(vect.begin(),vect.end());
	cout<<"\nVector after sorthing is: ";
	for (int i=0;i<n;i++)
	   cout<<vect[i]<<" ";
	  sort(vect.begin(),vect.end(),greater<int>());
	cout << "\nVector after sorting in Descending order is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
   
   
    // Reversing the Vector (descending to ascending , ascending to descending)
    reverse(vect.begin(), vect.end());
 
    cout << "\nVector after reversing is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
 
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
 
    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);
 
    return 0;
	  
	  
	
}
