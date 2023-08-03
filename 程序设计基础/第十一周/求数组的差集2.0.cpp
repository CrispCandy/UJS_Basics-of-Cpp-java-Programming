#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,m,k,z,o;
	k=o=0;
	cin>>n;
	int a[n];
	int c[n];
	for(int i=0; i<n; i++) 
     {
         cin >> a[i];
     }
    cin>>m;
    int b[m];
 	for(int i=0; i<m; i++) 
     {
         cin >> b[i];
     }
	 
	    
     for(int i=0; i<n; i++) {
     	for(int j=0; j<m; j++){
     		if(a[i]==b[j]){
			    i++;
			    c[o]=a[i];
			 }
			else{
				c[o]=a[i];
			} 
		 }
		 o++;
     }
         
     
     for(int i=0; i<n; i++) {
     	for(int j=0; j<m; j++){
		 if(a[i]==b[j]){
		 
		 k++;//计算重复的个数 
		 
		 }
		 }
		 }
		 
	    for(int i = 0; i < o; i++)
    {
        for(int j = i+1; j < o; j++)
        {
            if(c[i]>c[j])    
            {
                int p;        
                p = c[i];
                c[i] = c[j]; 
                c[j] = p;   
            }
        }
    }
    
    z=n-k;
	for(int i=0; i<z; i++) 
     {
         cout<< c[i]<<" ";
     }          
}
