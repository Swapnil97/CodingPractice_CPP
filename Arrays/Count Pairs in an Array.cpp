#include <iostream>
using namespace std;
void CountPairs(int arr[],int  n)
{
    int count =0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((i*arr[i])>(j*arr[j]))
            {
            count++;
            }
                
            }
    }

    cout<<count;
}
int main() {
	int n,element;
	
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	     cin>>element;
	     arr[i]=element;
	     
	 }
	CountPairs(arr,n);
	return 0;
}
