#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char tone[10];

	printf("당신의 톤은? 웜/쿨 : ");
	scanf("%s", &tone);

	int tone_;

	if (strcmp(tone, "웜")==0)
		tone_ = 0;
	else
		tone_ = 1;
	
	switch (tone_)
	{
	case 0: {
		printf("댱신은 웜 인 거 같아요! 이제 계절을 진단해볼까요?\n");
		printf("마찬가지로 나오는 질문들에 답해주세요.");

		int Q1;
		printf("\n\n1. 자연 모발 색이 밝은 갈색이다.\n");
		printf("or\n2. 자연 모발 색이 어두운 갈색 또는 검은색이다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q1);

		int Q2;
		printf("\n\n1. 눈동자 색이 밝은 갈색 또는 검은색이다.\n");
		printf("or\n2. 눈동자 색이 어두운 갈색 또는 검은색이다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q2);

		int Q3;
		printf("\n\n1. 피부색이 밝은 편이다.\n");
		printf("or\n2. 피부색이 아주 밝지 않고 햇볕에 잘 그을리는 편이다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q3);

		int Q4;
		printf("\n\n1.통통 튀고 화사한 이미지에 가깝다.\n");
		printf("or\n2. 차분하고 성숙한 이미지에 가깝다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q4);

		/*int Q5;
		printf("\n\n1. 골드색보다 아이보리, 피치, 주황색이 잘 어울린다.\n");
		printf("or\n2. 아이보리, 피치, 주황색보다 골드색이 잘 어울린다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q5);*/
		//질문을 홀수개로 맞추기 위해서 문항 하나를 예외시켰습니다.

		int Q6;
		printf("\n\n1. ﻿짙은 빨간색보다 중간 톤의 베이지가 잘 어울린다.\n");
		printf("or\n2. ﻿중간 톤의 베이지보다 짙은 빨간색이 잘 어울린다.\n");
		printf("둘 중 해당하는 문항의 번호를 입력해주세요.");
		scanf("%d", &Q6);

		if 
	}
	}

	return 0;
}