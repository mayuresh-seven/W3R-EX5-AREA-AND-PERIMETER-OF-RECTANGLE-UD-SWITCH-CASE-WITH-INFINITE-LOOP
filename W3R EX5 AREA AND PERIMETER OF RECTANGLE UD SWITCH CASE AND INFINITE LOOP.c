#include<stdio.h>
#include<string.h>
int main()
{
    double l,w,a,p;
    char u;
    char un[5];
    printf("Enter Length of Rectangle:");
    scanf("%lf",&l);
    printf("Enter Width of Rectangle:");
    scanf("%lf",&w);
    printf("Expected Unit:  mm    :  a\n                cm    :  b\n                m     :  c\n                inch  :  d");
    printf("\nEnter Unit Letter:");
    scanf(" %c",&u);
    while (u!='a' && u!='b' && u!='c' && u!='d')
        {
             printf("Invalid Unit");
             printf("\nExpected Unit:  mm    :  a\n                cm    :  b\n                m     :  c\n                inch  :  d\n");
             printf("\nEnter Valid Unit Letter:");
             scanf(" %c",&u);
        }
        if      (u=='a')
                strcpy(un,"mm");
        else if (u=='b')
                strcpy(un,"cm");
        else if (u=='c')
                strcpy(un,"m");
        else if (u=='d')
                strcpy(un,"inch");
        else    strcpy(un,"n");
    switch (u){
        case 'a':
            printf("Unit Valid");
            break;
        case 'b':
            printf("Unit Valid");
            break;
        case 'c':
            printf("Unit Valid");
            break;
        case 'd':
            printf("Unit Valid");
            break;
        default:
            printf("\nInvalid Unit");
            return 0;
    }
    a=l*w;
    p=2*(l+w);
    printf("\nArea Of Rectangle:%lf %s square",a,un);
    printf("\nPerimeter of Rectangle:%lf%s",p,un);
    return 0;
    }