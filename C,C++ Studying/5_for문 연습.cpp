// 10 ~ 11 화 : for문 연습 - 별찍기, 구구단 
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
    // for(;;) // 무한루프, 초기값 조건문 전부 생략.
    
    
    /*
    첫번째 구현
    *
    **
    ***
    ****
    *****
    */
    
    for(int i =0; i<5; i++)
    {
        for(int j = 0; j<i+1; j++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
    
    cout<<endl;
    
   /*
    두번째 구현
    *****
    ****
    ***
    **
    *
    */
    
    for(int i =5; i>0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
    
    cout<<endl;
    
    
    /*
    
    세번째 구현
       *
      ***
     *****
    *******
    
    */
    
    for(int i =0; i<4; i++)
    {
        for(int j = 0; j<3-i; j++)
        {
            cout<<" ";
        }
        
        for(int j = 0; j<(2*i+1); j++)
        {
            cout<<"*";
        }
        cout<< endl;
    }
    
    cout<<endl;
    
    //4번째 구현 : 마름모 만들기
    //    *
    //   ***
    //  *****
    // *******      
    //  *****
    //   ***
    //    *
    
    int iLine = 7;
    int iCount = 0;

    for(int i = 0; i < iLine; ++i)
    {
        iCount = i;
        
        if(i > iLine/2)
        {
            iCount = iLine - 1 - i;
;       }
        
        for(int j=0; j<3-iCount; ++j)
        {
            cout<<" ";
        }
        
        for(int k = 0; k < (2*iCount+1); ++k )
        {
            cout<<"*";
        }
        
        for(int j=0; j<3-iCount; ++j)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    ///구구단 만들기
    
    for (int A = 1; A<10; A++)
    {
        for(int B = 1; B<10; B++)
        {
            cout<< A << " x " << B <<" = " << A*B <<endl;
        }
    }
    
    
    
    return 0;
    
}
