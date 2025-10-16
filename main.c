#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main(int argc, char *argv[])
{
    
    int i;
    for(i=0;i<3;i++)
      sub();      //밑의 서브 함수가 3번 실행된다.  
   
        
    system("PAUSE");	
    return 0;
}

void sub(void)
{
     int auto_count = 0;                   //자동할당, 0으로 초기화. 자동할당이니까 한 번 끝나면 소멸하고, 다시 만들고 다시 초기화됨. 그래서 계속 1을 출력.  
     static int static_count = 0;         //정적할당, 변수가 소멸되지 않고 그대로 유지됨. static이 붙어있으므로.  
      
     
     auto_count++;
     static_count++;
     
     printf("auto_count=%d\n", auto_count);
     printf("static_count=%d\n", static_count);
     
     }




 
