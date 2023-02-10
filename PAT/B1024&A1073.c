#include<stdio.h> 
#include<string.h> 
int main() {
    char str[10010];  // 定义字符串数组
    gets(str);
    int len = strlen(str);
    if(str[0] == '-') printf("-");  // 若为负数，输出负号
    
    int pos = 0;  // pos 存放字符串中 E 的位置
    while(str[pos] != 'E') pos++; // while 循环找到 E 的位置
    
    int exp = 0;  // exp 存放指数
    for(int i = pos+2; i < len; i++) {
        exp = exp*10 + (str[i]-'0');
    }
    if(exp == 0) {
        for(int i = 1; i < pos; i++) {
            printf("%c", str[i]);
        }
    }
    
    if(str[pos+1] == '-') {  // 指数为负
        printf("0.");
        for(int i = 0; i < exp-1; i++) printf("0");  // 输出（exp-1）个0
        printf("%c", str[1]);  // 输出除小数点以外的数字
        for(int i = 3; i < pos; i++) printf("%c", str[i]);
    } else {  // 指数为正
        for(int i = 1; i < pos; i++) {    //输出小数点移动之后的数
            if(str[i] == '.') continue;   // 略过小数点
            printf("%c", str[i]);
            
            // 小数点加在位置（exp+2）
            if(i == exp+2 && pos-3 != exp) printf(".");
        } // for
        
        // 若指数较大，输出多余的0
        for(int i = 0; i < exp-(pos-3); i++) printf("0");
    } // if
    return 0;
}
