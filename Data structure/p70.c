#include <stdio.h>
#include <string.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
}; Movie;

void init_movie(Movie* p2Movie) {
	strcpy(p2Movie->title, "");
	p2Movie->release = 0;
	p2Movie->viewers = 0;
}

int main() {
	Movie m = { "��", 2014, 1761 };
	Movie* p2m = &m;
	init_movie(p2m); //init_movie(&m);
	printf("m �ʱ�ȭ ��: ����=%s, ��������=%d, ������=%d\n", m.title, m.release, m.viewers);
}