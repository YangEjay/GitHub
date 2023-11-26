#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    //김민송님 파트

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
    case 1:
        printf("이해되셨군요! 그럼 %s 님의 퍼스널컬러를 진단 시작하겠습니다! \n", name);
        break;
    default:
        printf("1을 눌러주셔야 프로그램이 실행됩니다. 다시 한 번 눌러주세요! \n");

        int wq00 = 0;
        scanf("%d", &wq00);
        switch (wq00)
        {
        case 1:
            printf("이해되셨군요! 그럼 %s 님의 퍼스널컬러 진단 시작하겠습니다! \n", name);
            break;
        default:
            printf("두 번의 시도에도 1을 눌러주시지 않으셨지만... 진단 진행하겠습니다!"); //제가 적었지만 멘트가 좀 별로인 것 같아요.. 멘트 수정 필요해 보입니다!

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

    printf("\n");
    printf("\n");

    //양은지님 파트

    char tone[10] = { "" };

    while (strcmp(tone, "웜") != 0 && strcmp(tone, "쿨") != 0)
    {
        printf("%s 님의 톤을 입력해주세요! (웜/쿨) : ", name);
        scanf("%9s", &tone);
    }

    int tone_ = 0, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, Q5 = 0, q_1 = 0, q_2 = 0, q_3 = 0, q_4 = 0, q_5 = 0, q_6 = 0, q_7 = 0, q_8 = 0, q_9 = 0;
    int Q_total = Q1 + Q2 + Q3 + Q4 + Q5;
    int q_total_ = q_1 + q_2 + q_3 + q_4 + q_5 + q_6 + q_7 + q_8 + q_9;

    if (strcmp(tone, "웜") == 0)
        tone_ = 1;
    else
        tone_ = 2;

    switch (tone_) {
    case 1:
    {
        printf("\n\n1. 자연 모발 색이 밝은 갈색이다.\n\n");
        printf("or\n\n2. 자연 모발 색이 어두운 갈색 또는 검은색이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);

        printf("\n\n1. 눈동자 색이 밝은 갈색 또는 검은색이다.\n\n");
        printf("or\n\n2. 눈동자 색이 어두운 갈색 또는 검은색이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);

        printf("\n\n1. 피부색이 밝은 편이다.\n\n");
        printf("or\n\n2. 피부색이 아주 밝지 않고 햇볕에 잘 그을리는 편이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);


        printf("\n\n1. 통통 튀고 화사한 이미지에 가깝다.\n\n");
        printf("or\n\n2. 차분하고 성숙한 이미지에 가깝다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);


        printf("\n\n1. 짙은 빨간색보다 중간 톤의 베이지가 잘 어울린다.\n\n");
        printf("or\n\n2. 중간 톤의 베이지보다 짙은 빨간색이 잘 어울린다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5;

        if (Q_total <= 7) {
            printf("\n %s 님의 계절은 '봄'입니다.", name);
        }
        else {
            printf("\n %s 님의 계절은 '가을'입니다.", name);
        }

        break;
    }

    case 2:
    {

        printf("\n\n1. 눈동자 색이 부드러운 색이다.\n\n");
        printf("or\n\n2. 눈동자 색이 또렷한 검은색이다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_1);
        } while (q_1 != 1 && q_1 != 2);


        printf("\n\n1. 검은색 옷을 입으면 얼굴이 칙칙해 보인다.\n\n");
        printf("or\n\n2. 검은색 옷을 입으면 이목구비가 또렷하게 보인다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_2);
        } while (q_2 != 1 && q_2 != 2);


        printf("\n\n1.회색 옷을 입으면 피부톤이 균일해 보인다.\n\n");
        printf("or\n\n2. 회색 옷을 입으면 얼굴이 칙칙해 보인다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_3);
        } while (q_3 != 1 && q_3 != 2);



        printf("\n\n1.크고 화려한 액세서리가 어울리지 않는다.\n\n");
        printf("or\n\n2. 크고 화려한 액세서리가 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_4);
        } while (q_4 != 1 && q_4 != 2);


        printf("\n\n1. 원색보다 파스텔 계열의 색이 잘 어울린다.\n\n");
        printf("or\n\n2. 파스텔 계열의 색보다 원색이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_5);
        } while (q_5 != 1 && q_5 != 2);


        printf("\n\n1. 부드럽고 밝은 이미지에 가깝다.\n\n");
        printf("or\n\n2. 강렬한 이미지에 가깝다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_6);

        } while (q_6 != 1 && q_6 != 2);


        printf("\n\n1. 연한 아이메이크업이 잘 어울린다.\n\n");
        printf("or\n\n2. 스모키한 아이메이크업이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_7);
        } while (q_7 != 1 && q_7 != 2);

        printf("\n\n1. 그라데이션 립이 잘 어울린다.\n\n");
        printf("or\n\n2. 풀 립이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_8);
        } while (q_8 != 1 && q_8 != 2);


        printf("\n\n1. 핑크 컬러의 립이 잘 어울린다.\n\n");
        //푸시아핑크라 하면 진단 받는 입장에서 무슨 색이지 싶어 그냥 핑크로 변경했는데.. 문제 생길려나요?
        printf("or\n\n2. 버건디 컬러의 립이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_9);
        } while (q_9 != 1 && q_9 != 2);

        q_total_ = q_1 + q_2 + q_3 + q_4 + q_5 + q_6 + q_7 + q_8 + q_9;

        if (q_total_ <= 13)
        {
            printf("\n %s 님의 계절은 '여름'입니다.", name);
        }
        else {
            printf("\n %s 님의 계절은 '겨울'입니다.", name);
        }


    }

    }

    //김유나 님 부분 - 세부톤

    int Q6 = 0, Q7 = 0;
    //위에 Q1~5 까지 정의되어 (초기화되어) 있어서 오류가 떠서 6과 7에 대한 것만 남기고 지우는 방향으로 수정하였습니다!

    while (_stricmp(tone, "봄") != 0 && _stricmp(tone, "가을") != 0)
    {
        printf("%s 님의 계절 결과가 어떻게 나왔나요? (봄/가을) : ", name);
        scanf("%9s", tone);
    }

    int tonesa = (_stricmp(tone, "봄") == 0) ? 1 : 2; //tone_ 이 부분이 위에 은지 님 것과 중복되어 제가 spring autumn 앞글자로 수정하였습니다!

    switch (tonesa)
    {
    case 1:
    {
        printf("\n계절은 봄 이시군요! 이제 마지막 단계인 세부톤을 나누어 볼게요. \n");
        printf("나오는 질문들에 답해주세요.");

        printf("\n\n1. 인상이 부드러운 편이다.\n");
        printf("or\n2. 이목구비가 또렷한 편이다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);

        printf("\n\n1. 채도 높은 색보다 파스텔계열의 색이 잘 어울린다.\n");
        printf("or\n2. 파스텔계열의 색보다 채도 높은 색이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);

        printf("\n\n1. 연하고 맑은 메이크업이 잘 어울린다.\n");
        printf("or\n2. 이목구비를 강조해주는 메이크업이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);

        printf("\n\n1. 따뜻한 이미지에 가깝다.\n");
        printf("or\n2. 또렷하고 생기 있는 이미지에 가깝다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);

        printf("\n\n1. 톤 다운된 코랄 계열 립이 잘 어울린다.\n");
        printf("or\n2. 오렌지와 핑크가 믹스된 컬러, 자몽 컬러의 립이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5;

        if (Q_total <= 7)
        {
            printf("\n %s 님의 세부톤은 '라이트'입니다. \n", name);
        }
        else
        {
            printf("\n %s 님의 세부톤은 '브라이트'입니다.\n", name);
        }

        break;
    }
    case 2:
    {
        printf("\n계절은 가을 이시군요! 이제 마지막 단계인 세부톤을 나누어 볼게요. \n");
        printf("나오는 질문들에 답해주세요.");

        printf("\n\n1. 피부색이 밝거나 중간 톤이다.\n");
        printf("or\n2. 피부색이 어두운 톤이다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);

        printf("\n\n1. 검은색 옷을 입으면 얼굴이 칙칙해보인다.\n");
        printf("or\n2. 검은색 옷을 입으면 이목구비가 또렷하게 보인다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);

        printf("\n\n1. 진한 아이 메이크업이 잘 어울리지 않는다.\n");
        printf("or\n2. 진한 아이 메이크업이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);

        printf("\n\n1. 화려한 쥬얼리가 어울리지 않는다.\n");
        printf("or\n2. 화려한 쥬얼리가 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);

        printf("\n\n1. 온화하고 차분한 이미지에 가깝다.\n");
        printf("or\n2. 고급스럽고 화려한 이미지에 가깝다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        printf("\n\n1. 장식이 없는 단순한 의상이 잘 어울린다.\n");
        printf("or\n2. 벨벳, 실크, 스팽글 등 광택 있는 소재나 모피가 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q6);
        } while (Q6 != 1 && Q6 != 2);

        printf("\n\n1. 앰버, 머스크향과 같이 따뜻하고 부드러운 느낌의 향이 잘 어울린다.\n");
        printf("or\n2. 오리엔탈계열 우드향과 같이 무게감 있는 향이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q7);
        } while (Q7 != 1 && Q7 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5 + Q6 + Q7;

        if (Q_total <= 7)
        {
            printf("\n %s 님의 세부톤은 '뮤트'입니다. \n", name);
        }
        else
        {
            printf("\n %s 님의 세부톤은 '딥'입니다.\n", name);
        }

        break;
    }
    }
    // 김유나님 세부톤 - 여름겨울 -> 수정 필요합니다..!

    while (_stricmp(tone, "여름") != 0 && _stricmp(tone, "겨울") != 0) {
        printf("당신의 계절은? 여름/겨울 : ");
        scanf("%9s", tone);
    }

    int tonesw = (_stricmp(tone, "여름") == 0) ? 1 : 2; //tone_ 이 부분이 위에 은지 님 것과 중복되어 제가 summer winter 앞글자로 수정하였습니다!

    switch (tonesw) {
    case 1: {
        printf("\n계절은 여름 이시군요! 이제 마지막 단계인 세부톤을 나누어 볼게요.\n");
        printf("나오는 질문들에 답해주세요.");

        printf("\n\n1. 피부가 밝고 홍조 등 붉은 기가 많이 돈다.\n");
        printf("or\n2. 피부가 중간톤이고 붉은 기가 많이 돌지 않는다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);

        printf("\n\n1. 크림색보다 흰색이 잘 어울린다.\n");
        printf("or\n2. 흰색보다 크림색이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);

        printf("\n\n1. 생기 있는 이미지에 가깝다.\n");
        printf("or\n2. 차분하고 부드러운 이미지에 가깝다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);

        printf("\n\n1. 내추럴하고 피부 본연의 광채를 살린 베이스 메이크업이 어울린다.\n");
        printf("or\n2. 매트한 베이스 메이크업이 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);

        printf("\n\n1. 화이트톤의 의상이 어울린다.\n");
        printf("or\n2. 톤 다운된 데님 의상이 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        printf("\n\n1. 실버 악세서리가 잘 어울린다.\n");
        printf("or\n2. 로즈골드 악세서리가 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q6);
        } while (Q6 != 1 && Q6 != 2);

        printf("\n\n1. 브라운 아이라이너가 잘 어울린다.\n");
        printf("or\n2. 블랙 아이라이너가 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q7);
        } while (Q7 != 1 && Q7 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5 + Q6 + Q7;

        if (Q_total <= 7) {
            printf("\n %s 님의 세부톤은 '라이트'입니다. \n", name);
        }
        else {
            printf("\n %s 님의 세부톤은 '뮤트'입니다.\n", name);
        }

        break;
    }
    case 2: {
        printf("\n계절은 겨울 이시군요! 이제 마지막 단계인 세부톤을 나누어 볼게요.\n");
        printf("나오는 질문들에 답해주세요.");

        printf("\n\n1. 피부색이 밝은 편이다.\n");
        printf("or\n2. 피부색이 어둡거나 중간 톤이다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);

        printf("\n\n1. 마젠타, 보라색 계열 립이 잘 어울린다.\n");
        printf("or\n2. 벽돌색, 어두운 고추장 색상 립이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);

        printf("\n\n1. 고채도의 색이 잘 어울린다.\n");
        printf("or\n2. 저채도의 색이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);

        printf("\n\n1. 화려한 이미지에 가깝다.\n");
        printf("or\n2. 성숙하고 카리스마 있는 이미지에 가깝다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);

        printf("\n\n1. 빳빳하고 무늬와 질감이 없는 소재, 패딩 소재, 스트라이프 디자인의 옷이 잘 어울린다.\n");
        printf("or\n2. 볼드한 느낌을 주는 빳빳한 시스루, 에나멜, 실크, 스팽글, 벨벳 소재의 옷이 잘 어울린다.\n");
        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5;

        if (Q_total <= 7) {
            printf("\n %s 님의 세부톤은 '브라이트'입니다. \n", name);
        }
        else {
            printf("\n %s 님의 세부톤은 '딥'입니다.\n", name);
        }

        break;
    }
    }
   //신나영님 마지막 결과 부분
    printf("마지막까지 너무 수고 많으셨습니다!\n");
    printf("이제 %s 님을 위한 최종 진단 결과를 알려드릴게요. \n\n");

    int resultfinal = 0;

    printf("검사 결과에 맞는 번호를 입력해주세요! \n");
    printf("1. 봄 웜 라이트 \n");
    printf("2. 봄 웜 브라이트 \n");
    printf("3. 여름 쿨 라이트 \n");
    printf("4. 여름 쿨 뮤트 \n");
    printf("5. 가을 웜 뮤트 \n");
    printf("6. 가을 웜 딥 \n");
    printf("7. 겨울 쿨 브라이트\n");
    printf("8. 겨울 쿨 딥\n");
    scanf("%d", &resultfinal);

    switch (resultfinal) {
    case 1:
        printf("봄 웜 라이트 톤이 나오셨군요! \n");
        printf("봄 웜 라이트 톤은 페일톤과 라이트 톤으로 가볍고 순한 느낌을 주는 톤이에요! \n\n");
        printf("먼저 %s 님께 어울리는 색상을 알려드릴게요. \n");
        printf("아이보리, 라이트 웜 베이지, 라이트 클리어 네이비, 라이트 클리어 골드, 살구색, 코랄 핑크 등의 색이 있어요. \n\n");
        printf("\n");
        printf("%s 님께 어울리는 코디는 다음과 같아요. \n");
        printf("옷의 소재는 쉬폰처럼 가볍고 흐르는 듯한 소재가 잘 어울리고 새틴과 깔끔한 무지 원단도 괜찮아요. \n");
        printf("몽글몽글한 양털느낌의 플리스 소재도 좋지만 매트한 질감이 답답하게 느껴질 수 있어요. \n");
        printf("탁한 컬러나 매트한 질감은 화이트와 함께 연출해주세요. \n");
        printf("벨벳이나 스웨이드, 레더는 무겁고 텁텁하게 느껴져 소화하기 어렵습니다. \n");
        printf("\n");
        printf("%s 님께 어울리는 메이크업 스타일은 다음과 같아요. \n");
        printf("1. 눈 화장 \n");
        printf("살구나 피치 컬러 섀도우를 연하게 발라주세요. 갈색 아이라이너를 사용하되, 라인보다는 잘 컬링된 속눈썹을 강조하는 것이 좋습니다. 또한 갈색 마스카라는 자연스러운 느낌을 줍니다.\n");
        printf("2. 치크 화장 \n");
        printf("형광빛의 코랄 또는 흰빛이 도는 핑크 컬러를 선택하세요. 혈색만 주는 정도로 사용하는 것이 좋습니다. \n");
        printf("3. 입술 화장 \n");
        printf("매트보다는 글로시한 제형의 코랄 컬러, 또는 옐로 베이스의 연한 핑크 컬러가 잘 어울릴거예요!\n");
        printf("4. 헤어 \n");
        printf("짙은 브라운 계열로 염색하면 성숙한 이미지를 연출할 수 있어요. \n");
        break;
    case 2:
        printf("봄 웜 브라이트 톤이 나오셨군요! \n");
        break;
    }


    return 0;
}