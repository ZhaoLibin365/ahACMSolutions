#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=1;
    while(t--)
    {
        int n;
        double m; 
        cin>>n>>m;
        double  sum=0;
        for(int i=0;i<n;i++)
        {
            double  v;
            int c;
            cin>>v>>c;
            sum+=v*100*c;
        }
        //  cout<<sum;
        int Sum=(int)sum;
        int s=Sum%10;
        if(s>0){
          Sum=Sum/10+1;
          Sum*=10;
        }
        long long m1=m*100;
        cout<<"Case "<<c++<<": ";
          
        if(Sum>m1)
        cout<<"-1"<<endl;
        else
        printf("%.2lf\n",(m1-Sum)/100.0);
        //cout<<<<endl; 
    }
    return 0;
}
