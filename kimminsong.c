#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int wq1, wq2, wq3, wq4, wq5, wqsum;
    char name[20];

    printf("안녕하세요! 퍼스널컬러진단프로그램 '마이 컬러'입니다. \n"); //인사말
    printf("\n");
    printf("퍼스널 컬러란 개인의 피부톤과 가장 어울리는 색상을 말합니다.\n"); //퍼스널 컬러 소개
    printf("주로 자신의 피부톤과 옷 색깔, 머리색 등을 매칭할 때 사용됩니다.\n");
    printf("'마이 컬러'는 자신에게 해당하는 퍼스널 컬러를 찾아주고 이에 맞는 화장품 및 코디 방법을 추천해주는 프로그램입니다. \n"); //프로그램 소개

    printf("\n");
    printf("\n");

    printf("시작 전 성함을 입력해주세요! \n"); //당신은 ~~ 보다 이름으로 하는 것 같아 추가
    scanf("%s", name);
    printf("\n");

    printf("안녕하세요 %s 님! \n", name);
    printf("더욱 자세한 톤을 정하기 전에 웜톤인지 쿨톤인지를 먼저 진단해드릴게요! \n");
    printf("만약 질문에 대한 답이 yes면 숫자 1을, no면 숫자 0을 창에 입력해주시면 됩니다. \n");
    printf("\n");

    //바로 진단에 들어가는 것보다 이해여부를 묻는 질문을 추가

    int wq0 = 0; //숫자를 입력받을 변수 inputu 선언&초기화
    printf("이해되셨나요? \n");
    scanf("%d", &wq0);

    switch (wq0)
    {
    case 1 :
        printf("이해되셨군요! 그럼 %s 님의 퍼스널컬러를 진단 시작하겠습니다! \n", name);
        break;
    default: 
        printf("1을 눌러주셔야 프로그램이 실행됩니다. 다시 한 번 눌러주세요! \n");

        int wq00 = 0;
        scanf("%d", &wq00);
        switch(wq00)
        {
        case 1 :
            printf("이해되셨군요! 그럼 %s 님의 퍼스널컬러 진단 시작하겠습니다! \n", name);
            break;
        default :
            printf("두 번의 시도에도 1을 눌러주시지 않으셨지만... 진단 진행하겠습니다!"); //제가 적었지만 멘트가 좀 별로인 것 같아요..
            
        }

    }
   
    printf("\n");
    printf("\n");
    printf("나는 오렌지에서 피부가 더 화사해 보인다. \n");
    scanf("%d", &wq1);
    printf("\n");
    printf("\n");

    printf("자연광이나 밝은 조명 아래 손목 안쪽 혈관 색이 녹색 계열로 보인다.  \n");
    scanf("%d", &wq2);
    printf("\n");
    printf("\n");

    printf("얼굴에 A4용지를 댔을 때 피부 톤이 노란빛을 띤다. \n");
    scanf("%d", &wq3);
    printf("\n");
    printf("\n");

    printf("햇빛에 노출되었을 때 피부색이 그을린다.  \n");
    scanf("%d", &wq4);
    printf("\n");
    printf("\n");

    printf("골드 컬러 악세사리가 잘 어울린다.  \n");
    scanf("%d", &wq5);
    printf("\n");
    printf("\n");

    wqsum = wq1 + wq2 + wq3 + wq4 + wq5;

    if (wqsum >= 3) {
        printf("%s 님은 웜톤인 것 같아요! 이제 세세한 계절을 진단해볼까요? \n", name);
        printf("마찬가지로 나오는 질문들에 답해주세요.\n");
    }
    else {
        printf("%s 님은 쿨톤인 것 같아요! 이제 세세한 계절을 진단해볼까요? \n", name);
        printf("마찬가지로 나오는 질문들에 답해주세요.\n");
    }

    return 0;
}
