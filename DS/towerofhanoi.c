#include<stdio.h>
void tower_of_hanoi(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==1)
    {
        printf("\nmove disk 1 form_rod  %c to_rod %c",from_rod,to_rod);
        return;
    }
    tower_of_hanoi(n-1,from_rod,aux_rod,to_rod);
    printf("\nmove disk  %d from rod %c to rod",n,from_rod,to_rod);
    tower_of_hanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n=3;
 tower_of_hanoi(n,'A','B','C');
 return 0;
}