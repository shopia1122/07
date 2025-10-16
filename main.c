#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    
    for(i=0;i<5;i++)          //이 안의 것이 5번 반복될 것. 결국 printf가 5번 반복되는 것. temp = , temp = , ... 5번. 
    {
        static int temp=1;
        printf("temp = %d\n", temp);
        temp++;
                    }
  system("PAUSE");	
  return 0;
}

//내 생각: 결국 결과는 printf로 나오니까, temp값에 따라 변하는데... 이거 헷갈림.  
//temp가 생존기간이 길지 않기 때문임. 계속 소멸되므로. 계속 생기고 소멸되므로, 더하기가 누적되지 않아 초기값만 나오는 것. 
