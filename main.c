#include <stdio.h>
#include <stdlib.h>

int all_files;

extern void sub();   //외부의 sub함수를 쓰겠다는 뜻, sub 함수 호출.  

int main(int argc, char *argv[])
{
    
    sub();                 //sub 함수 실행한다는 뜻이고, extern으로 연결되어 있다.  다른 파일에 있는 함수를 extern으로 연결시킨 것.  
    printf("%d\n", all_files);
   
        
    system("PAUSE");	
    return 0;
}





 
