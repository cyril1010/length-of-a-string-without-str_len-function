//PROGRAM TO FIND THE LENGTH OF A STRING WITHOUT USING str_len() FUNCTION


#include <iostream>

using namespace std;

int main()

{

    char name[50];

    int count=0;

    cout<<"\n ENTER A STRING = ";

    cin>>name;

    while(name[count]!='\0')

    {

        count++;

    }

    cout<<"\n THE LENGTH OF THE STRING IS "<<count;

return 0;

}
