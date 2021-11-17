// 9화 간단한 가위바위보 게임
#include <iostream>

using namespace std;

enum NUM 
{
    NUM_0, // 아무것도 부여하지 않을 경우 0부터 1씩 차례로 값이 부여된다./
    NUM_1, 
    NUM_2, 
    NUM_3 
};

#define NUM_4 4 // 상수

enum SRP
{
    SRP_S = 1,
    SRP_R,
    SRP_P,
    SRP_END
};

int main(int argc, char* argv[]) 
{
    
    // system("cls"); 화면을 지움, 도스 명령어.콘솔기반이라 사용가능.
    
    //난수테이블 생성
    srand((unsigned int)time(0));
    int iPlayer,iCom;
    
    while(true)
    {
        cout << "1.가위" << endl;
        cout << "2.바위" << endl;
        cout << "3.보" << endl;
        cout << "4.종료"<< endl;
        cout << "메뉴를 선택하세요 : " << endl;
        cin >> iPlayer;
        
        if(iPlayer < SRP_S || iPlayer > SRP_END)
        {
            cout << "잘못된 값을 입력하였습니다" << endl;
            //system("pause"); 일시정지
            continue; // 반복문의 시작점으로 이동
            
        }
        else if(iPlayer == SRP_END)
        {
            cout<<"종료합니다"<<endl;
            break;
        }
        
        //봇이 선택한다.
        iCom = rand()% 3+SRP_S; 
        
        switch(iCom)
        {
            case SRP_S:
                cout<<"COM : 가위"<<endl;
                break;
            case SRP_R:
                cout<<"COM : 바위"<<endl;
                break;
            case SRP_P:
                cout<<"COM : 보"<<endl;
                break;
        }
        
        //승부 결과
        int iWin = iPlayer - iCom;
        if(iWin == 1 || iWin == -2 )
            cout << "Player 승리" <<endl;
        else if (iWin == -1 || iWin ==2)
            cout << "Com 승리" <<endl;
        else
            cout << "비김" << endl;
    }
    
    return 0;
    
}
