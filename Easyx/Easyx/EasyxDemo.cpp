#include <easyx.h>
#include <stdio.h>

//int main()
//{
//    initgraph(800, 600);//建立一个页面
//    setaspectratio(1, -1);//坐标翻转
//    setorigin(400, 300);//修改坐标原点，坐标原点默认左上角
//    circle(0, 0, 20);//画圆形的函数
//    putpixel(0, 0, WHITE);//画点加颜色
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
	//for (int i = 0;i < 1000; i++)//随机画点
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