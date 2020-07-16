#include <iostream>

int main() {
    char str_a[100] = {0}, str_b[100] = {0}, str[100] = {0};
    int a = 0,b = 0;
    scanf("%s%[^\n]", str_a, str_b);

    sscanf(str_a,"%d%s", &a, str);
    if(a <= 1000 && a >= 1 && str[0] == '\0')
        printf("%d + ", a);
    else{
        printf("? + ");
        a = 0;
        str[0] = '\0';
    }
    
    sscanf(str_b,"%d%s", &b, str);
    if(b <= 1000 && b >= 1 && str[0] == '\0') {
        if (a)
            printf("%d = %d", b, a + b);
        else
            printf("%d = ?", b);
    }
    else
        printf("? = ?");
    return 0;
}
