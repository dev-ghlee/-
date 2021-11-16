// 8화 switch문과 열거체 
#include <iostream>

using namespace std;
/*
열거체 : 연속된 숫자에 이름을 부여할 수 있는 기능이다. 
(switch와 영혼의 듀오, 잘쓰면 정말 편함)
enum 열거체명 {} 의 형태로 구성된다.
열거체명을 이용해서 열거체 타입의 변수를 선언도 가능하다.
즉, 열거체 자체가 사용자 정의 변수 타입이 될 수 있다.
*/
enum NUM // 실제로 win32 api, directx 등의 api에는 실제로 열거체로 flag를 만들놓고 의미를 부여한 특별한 값으로 많이 사용함.
{
    NUM_0, // 아무것도 부여하지 않을 경우 0부터 1씩 차례로 값이 부여된다./
    NUM_1, 
    NUM_2, 
    NUM_3 
};

#define NUM_4 4 // 상수

int main(int argc, char* argv[]) 
{
    /*
     분기문 : if , switch 문
     if문 : 조건을 체크하는 분기문
     switch 문 :  값이 뭔지를 체크하는 분기문
     
     형태 : switch(변수) {} 의 형태로 구성된다. 
     코드블럭안에는 case break 구문이 들어가게 된다. 
     case 상수: 의 형태로 처리가 되고 변수 값이 무엇인지에 따라서 
     case 뒤에 오는 상수를 비교하게 된다.
    */
    
    int iNumber ;
    cout << "숫자를 입력하세요 : ";
    cin >> iNumber;
    
    switch (iNumber)
    {
        case NUM_0: 
            cout << "입력한 숫자는 0입니다" << endl;
            break;
        case NUM_1:
            cout << "입력한 숫자는 1입니다" << endl;
            break;
        case NUM_2:
            cout << "입력한 숫자는 2입니다" << endl;
            break;
        case NUM_3:
            cout << "입력한 숫자는 3입니다" << endl;
            break;
        default:
            cout << "입력하신 숫자는 3 보다 큰 숫자입니다" <<endl;
            break;
    }
    
    // 열거체 타입의 변수를 선언, 열거체 타입 변수는 무조건 4byte 차지
    NUM eNum;
    cout << sizeof(NUM) << endl; // 4byte인지 확인 
    
    //typeid(타입 or 변수).name() 을 하게 되면 typeid 안에 들어간
    // 타입 혹은 변수의 타입을 문자열로 반환.
    cout << typeid(eNum).name();
    
    return 0;
}
