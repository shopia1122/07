#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    
    for(i=0;i<5;i++)          //�� ���� ���� 5�� �ݺ��� ��. �ᱹ printf�� 5�� �ݺ��Ǵ� ��. temp = , temp = , ... 5��. 
    {
        static int temp=1;
        printf("temp = %d\n", temp);
        temp++;
                    }
  system("PAUSE");	
  return 0;
}

//�� ����: �ᱹ ����� printf�� �����ϱ�, temp���� ���� ���ϴµ�... �̰� �򰥸�.  
//temp�� �����Ⱓ�� ���� �ʱ� ������. ��� �Ҹ�ǹǷ�. ��� ����� �Ҹ�ǹǷ�, ���ϱⰡ �������� �ʾ� �ʱⰪ�� ������ ��. 
