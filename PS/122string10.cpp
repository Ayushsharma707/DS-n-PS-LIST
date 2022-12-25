#include<iostream>
#include<string.h>
using namespace std;
// int main()
// {
//     char s[100];
    // int i,j,count=0;
    // cout<<"Enter the string"<<endl;
    // gets(s);
    // for(i=0;i<strlen(s);i++)
    // {
//         count =0;
//         for(j=0;j<strlen(s);j++)
//         {
//             if((j<i) && (s[j]==s[i]))
//             {
//                 break;
//             }
//             if(s[i]==s[j])
//               count++;
//         }
//         if(count!=0)
//           cout<<s[i]<<" used no. of time"<<count<<endl;
//     }
    
// }  


// ANOTHER METHOD//
int main()
{
    char s[100],c;
   int i,j,count=0;
    cout<<"Enter the string"<<endl;
    gets(s);
    for(c='a';c<='z';c++)
    {
        count =0;
        for(i=0;s[i]!='\0';i++)
        {
            if(c==s[i])
              count++;
             
        }
        if(count!=0)
          cout<<c<<" found times"<<count<<endl;
        
    }
}            
