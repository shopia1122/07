#include <stdio.h>
#include <stdlib.h>

static int all_files;       //���⿡ static ���̸� undefined reference to 'all_files'��� ���. ���� all_files�� ���⼭ �������� �ſ��µ� static ���̴� ����  
                            // all_files�� �� ���Ͽ����� �� �� �ִ� ������ �Ź����Ƿ�  
                           
                           
                           
extern void sub();   //�ܺ��� sub�Լ��� ���ڴٴ� ��, sub �Լ� ȣ��.  

int main(int argc, char *argv[])
{
    
    sub();                 //sub �Լ� �����Ѵٴ� ���̰�, extern���� ����Ǿ� �ִ�.  �ٸ� ���Ͽ� �ִ� �Լ��� extern���� �����Ų ��.  
    printf("%d\n", all_files);
   
        
    system("PAUSE");	
    return 0;
}





 
