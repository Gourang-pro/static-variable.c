#include<stdio.h>
#include<conio.h>

void fun()
{
    int a=10;
    static int b=20;  // static variable store value in memory.
    
    printf(" %d %d\n",a ,b);

    a++;
    b++;
}
void main()
{
    fun();   //function is called three times.
    fun();
    fun();

}