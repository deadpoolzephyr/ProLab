#include <iostream>
using namespace std;
class Gauss
{
    float a[50][50];
    int n;
public:
    void accept()
    {
        cout<<"Enter no. of variables: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(j==n)
                    cout<<"Constant no."<<i+1<<" = ";
                else
                    cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\n";
            for(int j=0;j<n+1;j++)
            {
                if(j==n)
                    cout<<" ";
                cout<<a[i][j]<<"\t";
            }
        }
    }

    void gauss()//converting augmented matrix to row echelon form
    {
        float temp;//Line 1
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=a[j][i]/a[i][i];//Line 2
                for(int k=i;k<n+1;k++)
                {
                      a[j][k]-=temp*a[i][k];//Line 3
                    //a[j][k]-=a[j][i]*a[i][k]/a[i][i];//Line 4
                }
            }
        }
    }

    void EnterJordan()//converting to reduced row echelon form
    {
        float temp;
        for(int i=n-1;i>=0;i--)
        {

            for(int j=i-1;j>=0;j--)
            {
                temp=a[j][i]/a[i][i];
                for(int k=n;k>=i;k--)
                {
                    a[j][k]-=temp*a[i][k];
                }
            }
        }

        float x[n];
        for(int i=0;i<n;i++)//making leading coefficients zero
            x[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(x[i]==0&&j!=n)
                    x[i]=a[i][j];
                if(x[i]!=0)
                    a[i][j]/=x[i];
            }
        }
    }
    void credits()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"\nx"<<i+1<<" = "<<a[i][n]<<endl;
        }
    }

};

int main()
{
    Gauss obj;
    obj.accept();
    cout<<"\n\nAugmented matrix: \n\n\n";
    obj.display();
    obj.gauss();
    cout<<"\n\nRow Echelon form: \n\n\n";
    obj.display();
    obj.EnterJordan();
    cout<<"\n\nReduced row echelon form:\n\n\n";
    obj.display();
    cout<<"\n\nSolution: \n\n\n";
    obj.credits();
    return 0;
}