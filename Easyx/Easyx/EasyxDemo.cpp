#include <easyx.h>
#include <stdio.h>

//int main()
//{
//    initgraph(800, 600);//����һ��ҳ��
//    setaspectratio(1, -1);//���귭ת
//    setorigin(400, 300);//�޸�����ԭ�㣬����ԭ��Ĭ�����Ͻ�
//    circle(0, 0, 20);//��Բ�εĺ���
//    putpixel(0, 0, WHITE);//�������ɫ
//    getchar();
//
//    closegraph();
//    return 0;
//}

int main()
{
	initgraph(800, 600);
	setorigin(400, 300);
	setaspectratio(1, -1);
	//int x, y;
	//for (int i = 0;i < 1000; i++)//�������
	//{
	//	x = rand() % (800 + 1) - 400;
	//	y = rand() % (600 + 1) - 300;
	//	putpixel(x, y, WHITE);
	//}
	//line(100, 100, -100, -100);
	//line(100, -100, -100, 100);
	/*for (int i = 0; i < 300; i += 1)
	{
		circle(0, 0, i);
	}*/
	/*rectangle(0, 0, 4, 4);*/
	getchar();
	closegraph();
	return 0;
}