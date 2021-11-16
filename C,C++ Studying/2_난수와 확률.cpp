// 7화 내용 : 난수와 확률 
#include <iostream>
#include <time.h>



using namespace std;

int main(int argc, char* argv[]) 
{
    //난수 발생
    srand((unsigned int)time(0));
    
    cout << rand()%100 <<endl;
    cout << rand()%100 << endl;
    cout << rand()%101 + 100 << endl;
    
    //뽑기 확률은 다 실수다. 99.95 88.43 등 어떻게 하면 실수가 나오게 할 수 있을까?
    cout << (rand()%10000 /100.f) << endl; 
    
    //강화 확률 구하기 및 강화 확률 대로 업그레이드 하는 코드 짜기
    int iUpgrade = 0;
    cout << "Upgrade 기본 수치를 입력하세요 : ";
    cin >> iUpgrade;
    
    //강화확률 구하기.
    float fPercent = rand() % 10000/ 100.f;
    
    //강화 확률 : 업그레이드가 0~3 : 100%성공, 4~6 : 40%, 7~9 : 10%
    //10 ~13 : 1%, 14 ~15 : 0.01%
    
    cout << "Upgrade : " << iUpgrade << endl;
    cout << "Percent : " << fPercent << endl;
    
    if(iUpgrade <=3 )
        cout<< "강화 성공" <<endl;
    else if (4<= iUpgrade && iUpgrade<=6)
    {
        if (fPercent < 40.f)
            cout << "강화 성공" << endl;
        else 
            cout << "강화 실패" << endl;
    }
    else if (7<= iUpgrade && iUpgrade<=9)
    {
        if (fPercent < 10.f)
            cout << "강화 성공" << endl;
        else 
            cout << "강화 실패" << endl;
    }
    else if (10<= iUpgrade && iUpgrade<=13)
    {
        if (fPercent < 1.f)
            cout << "강화 성공" << endl;
        else 
            cout << "강화 실패" << endl;
    }
    else if (14<= iUpgrade && iUpgrade<=15)
    {
        if (fPercent < 0.01f)
            cout << "강화 성공" << endl;
        else 
            cout << "강화 실패" << endl;
    }
    
    
//srand는 실무에서는 많이 사용안함. 난수발생 알고리즘을 만들어서 활용
    
    return 0;
}
