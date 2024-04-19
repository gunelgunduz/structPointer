#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct books{
    char* bookname;
    char* writer;
    int page;
    int year;
};

void printMe(struct books*);

int main()
{
    struct books x;
    struct books* y;
    y=&x;
    (*y).bookname="Bu Olke";
    (*y).writer="Cemil Meric";
    (*y).page="256";
    (*y).year="1960";
    printMe(y);
    return 0;
}

void printMe(struct books* ptr)
{
    printf("Books Name:%s\n", (*ptr).bookname);
    printf("Writer:%s\n", (*ptr).writer);
    printf("Page:%d\n", (*ptr).page);
    printf("Year:%d\n", (*ptr).year);
}