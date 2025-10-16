#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int flag = 1;
     int y;
    
    while(flag != 0)
    {
        
         y =3;
         flag = 0;
                    //컴파일 했을 때 뜨는 에러는 해당 줄 혹은 그 위의 문제임. 그리고 항상 맞지는 않음. 기존 코드도 y가 선언되지 않은 게 아닌ㄷ 선언 안 되어있다고 
                    // 되어있음.  
               }
         y = 4;     //기존 코드는 변수의 범위가 while문 안에만 있어서 while 문 바깥의 y는 값을 가질 수 없었음. 변수가 정의되지 않은 상태니까. 
                    // 그래서 int y를 바깥으로 빼줌.  
  system("PAUSE");	
  return 0;
}
