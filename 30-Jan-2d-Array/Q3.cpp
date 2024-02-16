#include<iostream>
using namespace std;

void teacher(float Temp[5][10])
{
    for(int i=0;i<5;i++)
    {
        cout<<" Subject "<<i+1;
        int Not_Pass=0;
        int Pass=0;
        int max=0;

        for(int j=0;j<10;j++)
        {
            if (Temp[i][max]<=Temp[i][j])
            {
        
                max=j;
            }
            if (Temp[i][j]<40)
            {
                
                Not_Pass++;
            }
            else
            {
                
                Pass++;
            }
        }
        cout<<"\nfailed percentage "<<Not_Pass*100/10<<"%";
        cout<<"\npassing percentage "<<Pass*100/10<<"%\n";
        cout<<"\nSUBJECT TOPPER IS student "<<max+1<<" got : "<<Temp[i][max]<<" marks \n";
    }
}

void student(float Study[5][10])
{
    for(int i=0;i<10;i++)
    {
        cout<<"\n";
        int top=0;
        float sum=0.0;
        for(int j=0;j<5;j++)
        {
            cout<<"Marks in subject "<<j+1<<" : "<<Study[j][i]<<" \n";
            sum+=Study[j][i];
            if (Study[top][i]<=Study[j][i]){
                top=j;
            }
        }
        cout<<"\nTotal Marks obtained = "<<sum<<" out of "<<5*100<<" ";
        cout<<"\nPercentage Marks = "<<sum*100/500<<"% \n";
        cout<<"Top performed in subject "<<top<<" Top marks is "<<Study[top][i];
    }
}

int main() {
    float result[5][10];

    for (int i=0;i<5;i++)
    {
        cout<<"\nSubject : "<<i+1;
        for (int j=0;j<10;j++)
        {
            cout<<"\nEnter the Mark of Student : "<<j+1<<" in Subject : "<<i+1<<" : ";
            cin>>result[i][j];
        }
    }

    while (true){
    again:
    char choice;
    cout<<"TEACHER (t) / STUDENT (s) ";
    cin>>choice;
    if (toupper(choice) =='T')
    {
        teacher(result);
    }
    else if (toupper(choice)=='S')
    {
        student(result);
    }
    else{
        cout<<"\nINVALID INPUT!!...";
        goto again;
    }
    }

    return 0;
}