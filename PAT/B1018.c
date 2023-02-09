
#include<stdio.h>
int change(char c) {
    if(c == 'B') return 0;
    if(c == 'C') return 1;
    if(c == 'J') return 2;
}

int main() {
    char mp[3] = {'B', 'C', 'J'};           // mp[0] = 'B', mp[1] = 'C', mp[2] = 'J'
    int n;
    scanf("%d", &n);
    int times_A[3] = {0}, times_B[3] = {0}; // 分别记录甲、乙的胜平负次数
    
    // 按 BCJ 顺序分别记录甲乙 3 中手势的获胜次数
    int hand_A[3] = {0}, hand_B[3] ={0};
    char c1, c2;
    int k1, k2;
    
    for(int i = 0; i < n; i++) {
        getchar();
        scanf("%c %c", &c1, &c2);
        k1 = change(c1);
        k2 = change(c2);
        if((k1+1)%3 == k2) {  // 若甲赢
            times_A[0]++;     // 甲赢+1
            times_B[2]++;     // 乙输+1
            hand_A[k1]++; 
        } else if(k1 == k2) { // 若平局
            times_A[1]++;
            times_B[1]++;
        } else {              // 若乙赢
            times_A[2]++;
            times_B[0]++;
            hand_B[k2]++;
        }
    }   // for
      
    printf("%d %d %d\n", times_A[0], times_A[1], times_A[2]);
    printf("%d %d %d\n", times_B[0], times_B[1], times_B[2]);
    
    int id1 = 0, id2 = 0;
    for(int i = 0; i < 3; i++) {
        if(hand_A[i] > hand_A[id1]) id1 = i;
        if(hand_B[i] > hand_B[id2]) id2 = i;
    }   // for
    
    printf("%c %c\n", mp[id1], mp[id2]);
    return 0;
}

/*
#include<stdio.h>
char Max_CJB(int c, int j, int b);
int main() {
    int N;
    char jia,yi;
    int cntjia=0,cntyi=0,ping=0;
    int jiaC=0,jiaJ=0,jiaB=0;
    int yiC=0,yiJ=0,yiB=0;
    scanf("%d\n",&N);
    for(int i=1;i<=N;i++) {
        scanf("%c %c\n",&jia,&yi);
        if(jia=='C') {
            if(yi=='C') {
              ping++;
            } else if(yi=='J') {
                cntjia++;
                jiaC++;
            } else {
                cntyi++;
                yiB++;
            }
        } else if(jia=='J') {
            if(yi=='C') {
                cntyi++;
                yiC++;
            } else if(yi=='J') {
                ping++;
            } else {
                cntjia++;
                jiaB++;
            }
        } else {
            if(yi=='C') {
                cntjia++;
                jiaB++;
            } else if(yi=='J') {
                cntyi++;
                yiJ++;
            } else {
                ping++;
            }
    }
    printf("%d %d %d\n",cntjia,ping,cntyi);
    printf("%d %d %d\n",cntyi,ping,cntjia);
    printf("%c %c\n",Max_CJB(jiaC,jiaJ,jiaB),Max_CJB(yiC,yiJ,yiB));
}

char Max_CJB(int c, int j, int b) {
    int max=c;
    if(c>j) {
        if(c>b);
        else max=b;
    } else if(c==j) {
        if(j>b);
        else max=b;
    } else {
        if(j<=b) max=b;
        else max=j;
    }
    
    if(max==c) return 'C';
    else if(max==j) return 'J';
    else if(max==b) return 'B';
}


#include<stdio.h>

int change(char c)
{
    if(c=='B') return 0;
    if(c=='C') return 1;
    if(c=='J') return 2;
}

int main()
{
    char mp[3]={'B','C','J'};
    int n;
    scanf("%d\n",&n);
    int times_A[3]={0},times_B[3]={0};
    int hand_A[3]={0},hand_B[3]={0};
    char c1,c2;
    int k1,k2;
    for(int i=0;i<n;i++)
    {
        getchar();
        scanf("%c %c",&c1,&c2);
        k1=change(c1);
        k2=change(c2);
        if((k1+1)%3==k2)
        {
            times_A[0]++;
            times_B[2]++;
            hand_A[k1]++;
        }
        else if(k1==k2)
        {
            times_A[1]++;
            times_B[1]++;
        }
        else
        {
            times_A[2]++;
            times_B[0]++;
            hand_B[k2]++;
        }
    }
    printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
    printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);
    int id1=0,id2=0;
    for(int i=0;i<3;i++)
    {
        if(hand_A[i]>hand_A[id1]) id1=i;
        if(hand_B[i]>hand_B[id2]) id2=i;
    }
    printf("%c %c\n",mp[id1],mp[id2]);
    return 0;
}
*/
