#include <stdio.h>

int main() {

	//구조체 정의와 변수 선언 1
	struct Movie {
		char title[50];
		int release;
		int viewers;
	} m1, m2;
	//이것을 사용 할 때는
	/*
	strcpy(m1.title, "명량");

	m1.release = 2014;
	m1.viewers = 1761;
	*/

	//구조체 정의와 변수 선언 2
	struct Movie {
		char title[50];
		int release;
		int viewers;
	};
	//이것을 사용 할 때는
	/*
	Movie m1 = {"명량", 2014, 0};
	Movie m2 = {"명량", 2014};
	Movie m3 = {.release=2014, .title="명량"};

	||

	Movie m1 = {"명량", 2014, 1761};
	Movie m2 = m1;

	if (!strcmp(m1.title, m2.title) && m1.release==m2.release && m1.viewers==m2.viewers)
		printf("같은 영화입니다."};
	*/

	//구조체 정의와 변수 선언 3
	typedef struct Movie {
		char title[50];
		int release;
		int viewers;
	};
	//이것을 사용 할 때는
	/*
	typedef struct NesteMovie {
		char title[50];
		Movie release;
		int viewers;
	} NestedMovies;
	*/
	return 0;
}