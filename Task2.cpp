//Task 2
//Student Grading System
#include <iostream>
using namespace std;

struct stu
{
    string stuname;
    float grade;
};

int main()
{
    string name;
    float grad,m,max,min;
    struct stu s[100];
    int n,i,j,k=0;
    cout<<"Enter the Number of student records:"<<endl;
    // The number of records is inputted by the user
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the name of student:"<<endl;
        //The name of the student is asked from the user
        cin>>name;
        cout<<"Enter the grade of student:"<<endl;
        //The grade of the student is entered by the user
        cin>>grad;
        s[i].stuname=name;
        s[i].grade=grad;    
    }
    for(i=1;i<=n;i++)
    {
        k=k+s[i].grade;
    }
    m=float(k/n);
    cout<<"The average of the grade of students is"<<m<<endl;
    //Average of all the grades is calculated
    max=s[1].grade;
    for(i=1;i<=n;i++)
    {
        if(max<s[i].grade)
        {
            max=s[i].grade;

        }
    }
    cout<<"Highest grade among the given grades="<<max<<endl;
    //Highest grade among the entered grades is shown
    min=s[1].grade;
    for(j=1;j<=n;j++)
    {
        if(min>s[j].grade)
        {
            min=s[j].grade;
            
        }
    }
    cout<<"Lowest grade among the given grades="<<min<<endl;
    //Lowest grade among all the grades is shown
    return 0;
    

}
