#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(int argc, char *argv[])
{
    
    
   
        int i=10;
        printf("함수 호출전 i = %d\n", i);
        i=inc(i);
        
        printf("함수 호출후 i = %d\n", i);
        
        system("PAUSE");	
        return 0;
}

  

 int inc(int counter)
        {
            counter++;
            return counter;
            
            }

