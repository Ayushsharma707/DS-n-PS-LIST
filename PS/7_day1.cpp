#include <iostream>
using namespace std;

int main()
{
     int tmp;

    cout<<"Input days temperature:";
    cin>>tmp;
   if(tmp<0)
           cout<<"Freezing weather."<<endl;
   else if(tmp<10)
            printf("Very cold weather.\n");
            else if(tmp<20)
                        printf("Cold weather.\n");
                    else if(tmp<30)
                               printf("Normal in temp.\n");
                            else if(tmp<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");

}
