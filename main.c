#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main(int argc, char *argv[])
{
    
    int i;
    for(i=0;i<3;i++)
      sub();      //���� ���� �Լ��� 3�� ����ȴ�.  
   
        
    system("PAUSE");	
    return 0;
}

void sub(void)
{
     int auto_count = 0;                   //�ڵ��Ҵ�, 0���� �ʱ�ȭ. �ڵ��Ҵ��̴ϱ� �� �� ������ �Ҹ��ϰ�, �ٽ� ����� �ٽ� �ʱ�ȭ��. �׷��� ��� 1�� ���.  
     static int static_count = 0;         //�����Ҵ�, ������ �Ҹ���� �ʰ� �״�� ������. static�� �پ������Ƿ�.  
      
     
     auto_count++;
     static_count++;
     
     printf("auto_count=%d\n", auto_count);
     printf("static_count=%d\n", static_count);
     
     }




 
