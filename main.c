#include <stdio.h>
#include <stdlib.h>

int all_files;

extern void sub();   //�ܺ��� sub�Լ��� ���ڴٴ� ��, sub �Լ� ȣ��.  

int main(int argc, char *argv[])
{
    
    sub();                 //sub �Լ� �����Ѵٴ� ���̰�, extern���� ����Ǿ� �ִ�.  �ٸ� ���Ͽ� �ִ� �Լ��� extern���� �����Ų ��.  
    printf("%d\n", all_files);
   
        
    system("PAUSE");	
    return 0;
}





 
