#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int a,b;
    // str nums[100]="one";"two";
    
    scanf("%d %d",&a,&b);
    // if(a<10)
    // {
    for(int i=a;i<=b;i=i+1)
    {
        if(i==1)
        {
            std::cout << ("one\n");
        }
    
        if(i==2)
        {
            std::cout << ("two\n");
        }
        
        if(i==3)
        {
            std::cout << ("thee\n");
        }
        
        if(i==4)
        {
            std::cout << ("four\n");
        }
        
        if(i==5)
        {
            std::cout << ("fine\n");
        }
        
        if(i==6)
        {
            std::cout << ("six\n");
        }
        
        if(i==7)
        {
            std::cout << ("seven\n");
        }
        
        if(i==8)
        {
            std::cout << ("eight\n");
        }
        
        if(i==9)
        {
            std::cout << ("nine\n");
        }
        if(i>=10)      
        {
            if(i%2==0)
            {
                std::cout << ("even");
                if(i==b)
                {
                    break;
                }
            std::cout << ("\n");
            }
            else 
            {
                std::cout << ("odd");
                if(i==b)
                {
                    break;
                }
            std::cout << ("\n");       
            }
        }
    }
    // Complete the code.
    return 0;
}