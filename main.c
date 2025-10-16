#include <stdio.h>
#include <stdlib.h>

static int all_files;       //여기에 static 붙이면 undefined reference to 'all_files'라고 뜬다. 원래 all_files가 여기서 가져가는 거였는데 static 붙이는 순간  
                            // all_files는 이 파일에서만 쓸 수 있는 변수가 돼버리므로  
                           
                           
                           
extern void sub();   //외부의 sub함수를 쓰겠다는 뜻, sub 함수 호출.  

int main(int argc, char *argv[])
{
    
    sub();                 //sub 함수 실행한다는 뜻이고, extern으로 연결되어 있다.  다른 파일에 있는 함수를 extern으로 연결시킨 것.  
    printf("%d\n", all_files);
   
        
    system("PAUSE");	
    return 0;
}





 
