#include <stdio.h>

int main() {

	//����ü ���ǿ� ���� ���� 1
	struct Movie {
		char title[50];
		int release;
		int viewers;
	} m1, m2;
	//�̰��� ��� �� ����
	/*
	strcpy(m1.title, "��");

	m1.release = 2014;
	m1.viewers = 1761;
	*/

	//����ü ���ǿ� ���� ���� 2
	struct Movie {
		char title[50];
		int release;
		int viewers;
	};
	//�̰��� ��� �� ����
	/*
	Movie m1 = {"��", 2014, 0};
	Movie m2 = {"��", 2014};
	Movie m3 = {.release=2014, .title="��"};

	||

	Movie m1 = {"��", 2014, 1761};
	Movie m2 = m1;

	if (!strcmp(m1.title, m2.title) && m1.release==m2.release && m1.viewers==m2.viewers)
		printf("���� ��ȭ�Դϴ�."};
	*/

	//����ü ���ǿ� ���� ���� 3
	typedef struct Movie {
		char title[50];
		int release;
		int viewers;
	};
	//�̰��� ��� �� ����
	/*
	typedef struct NesteMovie {
		char title[50];
		Movie release;
		int viewers;
	} NestedMovies;
	*/
	return 0;
}