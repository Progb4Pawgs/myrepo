# include<iostream>
using namespace std;

int main(){
    cout <<"Jai Shree Ram"<<endl;
    int n;
    cout<<"enter a numeric value: ";
    cin>>n;
    
    int row =1;
    while (row<=n) 
    {
        
        int star = n - row +1;
        while (star)
        {
            cout<<"*";
            star = star-1;
        }
        
    
    
    cout<<endl;
    row=row+1;
    }
    
}