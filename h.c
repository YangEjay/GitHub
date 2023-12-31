﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
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
        printf("\n %s 님은 웜 인 거 같아요! 이제 계절을 진단해볼까요?\n", name);
        printf("마찬가지로 나오는 질문들에 답해주세요.");

        printf("\n\n1. 자연 모발 색이 밝은 갈색이다.\n");
        printf("or\n2. 자연 모발 색이 어두운 갈색 또는 검은색이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q1);
        } while (Q1 != 1 && Q1 != 2);


        printf("\n\n1. 눈동자 색이 밝은 갈색 또는 검은색이다.\n");
        printf("or\n2. 눈동자 색이 어두운 갈색 또는 검은색이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q2);
        } while (Q2 != 1 && Q2 != 2);



        printf("\n\n1. 피부색이 밝은 편이다.\n");
        printf("or\n2. 피부색이 아주 밝지 않고 햇볕에 잘 그을리는 편이다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q3);
        } while (Q3 != 1 && Q3 != 2);



        printf("\n\n1. 통통 튀고 화사한 이미지에 가깝다.\n");
        printf("or\n2. 차분하고 성숙한 이미지에 가깝다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q4);
        } while (Q4 != 1 && Q4 != 2);


        printf("\n\n1. 짙은 빨간색보다 중간 톤의 베이지가 잘 어울린다.\n");
        printf("or\n2. 중간 톤의 베이지보다 짙은 빨간색이 잘 어울린다.\n");

        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요. : ");
            scanf("%d", &Q5);
        } while (Q5 != 1 && Q5 != 2);

        Q_total = Q1 + Q2 + Q3 + Q4 + Q5;

        if (Q_total <= 7) {
            printf("\n당신의 계절은 '봄'입니다.");
        }
        else {
            printf("\n당신의 계절은 '가을'입니다.");
        }

        break;
    }

    case 2:
    {
        printf("\n당신은 쿨 인 거 같아요! 이제 계절을 진단해볼까요?\n");
        printf("마찬가지로 나오는 질문들에 답해주세요.");


        printf("\n\n1. 눈동자 색이 부드러운 색이다.\n");
        printf("or\n2. 눈동자 색이 또렷한 검은색이다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_1);
        } while (q_1 != 1 && q_1 != 2);


        printf("\n\n1. 검은색 옷을 입으면 얼굴이 칙칙해 보인다.\n");
        printf("or\n2. 검은색 옷을 입으면 이목구비가 또렷하게 보인다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_2);
        } while (q_2 != 1 && q_2 != 2);


        printf("\n\n1.회색 옷을 입으면 피부톤이 균일해 보인다.\n");
        printf("or\n2. 회색 옷을 입으면 얼굴이 칙칙해 보인다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_3);
        } while (q_3 != 1 && q_3 != 2);



        printf("\n\n1.크고 화려한 액세서리가 어울리지 않는다.\n");
        printf("or\n2. 크고 화려한 액세서리가 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_4);
        } while (q_4 != 1 && q_4 != 2);


        printf("\n\n1. 원색보다 파스텔 계열의 색이 잘 어울린다.\n");
        printf("or\n2. 파스텔 계열의 색보다 원색이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_5);
        } while (q_5 != 1 && q_5 != 2);


        printf("\n\n1. 부드럽고 밝은 이미지에 가깝다.\n");
        printf("or\n2. 강렬한 이미지에 가깝다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_6);

        } while (q_6 != 1 && q_6 != 2);


        printf("\n\n1. 연한 아이메이크업이 잘 어울린다.\n");
        printf("or\n2. 스모키한 아이메이크업이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_7);
        } while (q_7 != 1 && q_7 != 2);

        printf("\n\n1. 그라데이션 립이 잘 어울린다.\n");
        printf("or\n2. 풀 립이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_8);
        } while (q_8 != 1 && q_8 != 2);


        printf("\n\n1. 푸시아핑크 컬러의 립이 잘 어울린다.\n");
        printf("or\n2. 버건디 컬러의 립이 잘 어울린다.");


        do {
            printf("\n둘 중 해당하는 문항의 번호를 입력해주세요 : ");
            scanf("%d", &q_9);
        } while (q_9 != 1 && q_9 != 2);

        q_total_ = q_1 + q_2 + q_3 + q_4 + q_5 + q_6 + q_7 + q_8 + q_9;

        if (q_total_ <= 13)
        {
            printf("\n당신의 계절은 '여름'입니다.");
        }
        else {
            printf("\n당신의 계절은 '겨울'입니다.");
        }


    }

    }

    return 0;
}
