# Catalogue/目录
## [Chapter 2](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-2-1)

[2.2.3](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#223-liner-list线性表)
  
[2.3.7](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#237-link-list单链表)

## [Chapter 3](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-3-1)

[3.1.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#314-stack栈)

[3.2.5](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#325-queue队列)

[3.3.6](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#336-queue队列)

[3.4.5](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#345-martix--number-array--矩阵和数组)

## [Chapter 4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-4-1)

[4.2.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#424-string串)

## [Chapter 5](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-5-1)

[5.1.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#514-tree--binary-tree--树与二叉树)

[5.2.3](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#523-binary-tree--二叉树)

[5.3.3](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#533-traversal-of-bt--threaded-bt--二叉树的遍历--线索二叉树)

[5.4.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#544-tree-forest--树森林)

[5.5.3](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#553-huffman-tree-unionfind-sets--哈夫曼树以及并查集)

## [Chapter 6](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-6-1)

[6.1.2](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#612--concept-of-graph--图的概念)

[6.2.6](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#626-storage-structure-and-operation-of-graph--图的存储结构和基本操作)

[6.3.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#634-traversal-of-graph--图的遍历)

[6.4.6](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#646-application-of-graph--图的应用)

# [Chapter 7](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#chapter-7-1)

[7.2.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#724-liner-search--binary-search--blocked-search--顺序查找折半查找分块查找)

[7.3.4](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#734-search-tree--树型查找)

[7.4.3](url)

[7.5.5](url)

# Chapter 2 
Liner List|线性表

## 2.2.3 Liner List|线性表
04. 若线性表最常用的操作是存取第i个元素及其前驱和后继元素的值，为了提高效率，应采用（ ）的存储方式。
```
A. 单链表  B. 双向链表 C. 单循环链表  D. 顺序表
```
05. 一个线性表最常用的操作是存取任一指定序号的元素并在最后进行插入、删除操作，则利用（ ）存储方式可以节省时间。
```
A. 顺序表  B. 双链表 C. 带头节点的双循环链表  D. 单循环链表
```
06. 在n个元素的线性表的数组表示中，时间复杂度为 O(1) 的操作是
```
I.  访问第i个（1<=i<=n）结点和求第i个（2<=i<=n）结点的直接前驱
II. 在最后一个节点后插入一个新结点
III.删除第1个结点    
IV. 在第i个（1<=i<=n）结点后插入一个结点

A. 顺序表  B. 双链表 C. 带头节点的双循环链表  D. 单循环链表
```
07. 设线性表有n个元素，严格说来，以下操作中，（ ）在顺序表上实现要比在链表上实现的效率高。
```
I.  输出第i个（1<=i<=n）元素值
II. 交换第3、4个元素的值
III.顺序输出这n个元素的值

A. 顺序表  
B. 双链表 
C. 带头节点的双循环链表  
D. 单循环链表
```
09. 对于顺序表，访问第i个位置的元素和在第i个位置插入一个元素的时间复杂度为（ ）
```
A. O(n), O(n)   
B. O(n), O(1)   
C. O(1), O(n)   
D. O(1), O(1)
```
10. 若长度为n的非空线性表采用顺序存储结构，在表的第i个位置插入一个数据元素，则i的合法值应该是（ ）
```
A. 1<=i<=n  
B. 1<=i<=n+1    
C. 0<=i<=n-1    
D. 0<=i<=n
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 2.3.7 Link List|单链表
05. 设线性表中有 2n 个元素，（ ）在单链表上实现要比顺序表上实现效率更高

```
A. 删除所有值为 x 的元素
B. 在最后一个元素的后面插入一个新元素
C. 顺序输出前 k 个元素
D. 交换第 i 个元素和第 2n-i-1 个元素的值（i=0，···，n-1）
```
07. 给定有 n 个元素的一维数组，建立一个有序单链表的最低时间复杂度是（ ）

```
A. O(1) 
B. O(n) 
C. O(n^2)   
D. O(nlog2n)
```
08. 将长度为 n 的单链表链接在长度为 m 的单链表后面，其算法的时间复杂度采用大 O 形式表示应该是（ ）

```
A. O(1)	
B. O(n)	
C. O(m)	
D. O(n+m)
```

10. 在一个长度为 n 的带头结点的单链表 h 上，设有尾指针 r，则执行（ ）操作与链表的表长有关。

```
A. 删除单链表中的第一个元素
B. 删除单链表中的最后一个元素
C. 在单链表第一个元素前插入一个新元素
D. 在单链表最后一个元素后插入一个新元素
```

11. 对于一个头指针为 head 的带头结点的单链表，判定该表为空表的条件是（ ）；对于不带头结点的单链表，判定为空表的条件为（ ）。

```
A. head==NULL
B. head->next==NULL
C. head->next==head
D. head!=NULL
```
13. 在双链表中向 p 所指的结点之前插入一个结点 q 的操作为（ ）

```C
A. 
p->prior=q;
q->next=p; 
p->prior->next=q; 
q->prior=p->prior;

B. 
q->prior=p->prior;
p->prior->next=q;
q->next=p;
p->prior=q->next;

C.
q->next->next=q;
q->next=p;
q->prior->next=q;
q->next=p;

D.
p->prior->next=q;
q->next=p;
q->prior=p->prior;
p->prior=q;
```

14. 在双项链表存储结构中，删除 p 所指的结点时必须修改指针（ ）

```C
A.
p->llink->rlink=p->rlink;
p->rlink->llink=p->llink;

B.
p->llink=p->llink->llink;
p->llink->rlink=p;

C.
p->rlink->llink=p;
p->rlink=p->rlink->rlink=p;

D.
p->rlink=p->llink->llink;
p->llink=p->rlink->rlink;
```

15. 在长度为 n 的有序单链表中插入一个新结点，并仍然保持有序的时间复杂度是（ ）

```
A. O(1) 
B. O(n) 
C. O(n^2)   
D. O(nlog2n)
```

18. 一个链表最常用的操作是在末尾插入结点和删除结点，则选用（ ）最节省时间

```
A. 带头结点的双循环链表
B. 单循环链表
C. 带尾指针的单循环链表
D. 单链表
```

19. 设对 n （n>1）个元素的线性表的运算只有4种：删除第一个元素；删除最后一个元素；在第一个元素之前插入新元素；在最后一个元素之后插入新元素，则最好使用（ ）

```
A. 只有尾结点指针没有头结点指针的循环单链表
B. 只有尾结点指针没有头结点指针的非循环双链表
C. 只有头结点指针没有尾结点指针的循环双链表
D. 既有尾结点指针又有头结点指针的循环单链表
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

# Chapter 3 
Stack/Sequeue/Number Array|栈、队列和数组

## 3.1.4 Stack|栈
01. 栈和队列具有相同的（ ）

```
A. 抽象数据类型 
B. 逻辑结构 
C. 存储结构 
D. 运算
```

07. 设链表不带头结点且所有操作均在表头进行，则下列最不适合作为链栈的是（ ）

```
A. 只有表头结点指针，没有表尾指针的双向循环链表
B. 只有表尾结点指针，没有表头指针的双向循环链表
C. 只有表头结点指针，没有表尾指针的单向循环链表
D. 只有表尾结点指针，没有表头指针的单向循环链表
```

09. 链栈（不带头结点）执行 Pop 操作，并将出栈的元素存在 x 中，则执行（ ）

```
A. 
x=top;
top=top->next;

B.
x=top->data;

C. 
top=top->next;
x=top->data;

D.
x=top->data;
top=top->next;
```

10. 经过以下栈的操作后，变量 x 的值为（ ）

```C
InitStack(st);
Push(st, a);
Push(st, b);
Pop(st, x);
Top(st, x);

A. a    
B. b    
C. NULL 
D. FALSE
```

20. 采用共享栈的好处是（ ）

```
A. 减少存取时间，降低发生上溢的可能
B. 节省存储空间，降低发生上溢的可能
C. 减少存取时间，降低发生下溢的可能
D. 节省存储空间，降低发生下溢的可能
```

25. 「2013真题」 一个栈的入栈序列为1，2，3，···，n，出栈序列是P1，P2，P3，···，Pn。若P2=3，则P3可能取值的个数是（ ）

```
A. n-3
B. n-2
C. n-1
D. 无法确定
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 3.2.5 Queue|队列
02. 队列的“先进先出”特性是指（ ）

```
I.  最后插入队列中的元素总是最后被删除
II. 当同时进行插入、删除操作时，总是插入操作优先
III.每当有删除操作时，总要先做一次插入操作
IV. 每次从队列中删除的总是最早插入的元素

A. I
B. I, IV
C. II, III
D. IV
```

06. 已知循环队列的存储空间为数组 A[21]，front 指向队头元素的前一个位置，rear 指向队尾元素，假设当前 front 和 rear 的值分别为 8 和 3，则该队列的长度为（ ）

```
A. 5
B. 6
C. 16
D. 17
```

08. 假设一个循环队列 Q[MaxSize] 的队列头指针为 front，队尾指针为 rear，队列的最大容量为 MaxSize，此外，该队列再没有其他数据成员，则判断该对的列满条件为（ ）

```C
A. Q.front==Q.rear;
B. Q.front+Q.rear>=MaxSize;
C. Q.front==(Q.rear+1)%MaxSize;
D. Q.rear=(Q.front+1)%MaxSize
```

09. 最适合用作链队的链表是（ ）

```
A. 带队首指针和队尾指针的循环单链表
B. 带队首指针和队尾指针的非循环单链表
C. 只带队首指针的非循环单链表
D. 只带队首指针的循环单链表
```

12. 用链式存储方式的队列进行删除操作时需要（ ）

```
A. 仅修改头指针
B. 仅修改尾指针
C. 头尾指针都要修改
D. 头尾指针可能都要修改
```

13. 在一个链队列中，假设队头指针为 front，队尾指针 rear，x 所指向的元素需要入队，则需要执行的操作为（ ）

```
A. front=x, front=front->next
B. x->next=front->next, front=x
C. rear->next=x, rear=x
D. rear->next=x, x->next=null, rear=x
```

15. 若以1，2，3，4作为双端队列的输入序列，则既不能由输入受限的双端队列得到，又不能由输出受限的双端队列得到的输出序列是（ ）

```
A. 1,2,3,4
B. 4,1,3,2
C. 4,2,3,1
D. 4,2,1,3
```

19. 「2016真题」设有如下图所示的火车车轨，入口到出口之间有 n 条轨道，列车的行进方向均为从左至右，列车可驶入任意一条轨道。现有编号为1～9的9列列车，驶入的次序依次是8，4，2，5，3，9，1，6，7.若期望驶出的次序依次为1～9，则 n 至少是（ ）

```
A. 2
B. 3
C. 4
D. 5
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 3.3.6 Queue|队列
04. 利用栈求表达式的值时，设立运算数栈 OPEN。假设 OPEN 只有两个存储单元，则在下列表达式中，不会发生溢出的是（ ）

```
A. A-B*(C-D)
B. (A-B)*C-D
C. (A-B*C)-D
D. (A-B)*(C-D)
```

08. 执行（ ）操作时，需要使用队列作为辅助存储空间

```
A. 查找散列（哈希）表
B. 广度优先搜索图
C. 前序（根）遍历二叉树
D. 深度优先搜索图
```

09. 下列说法中，正确的是（ ）

```
A. 消除递归不一定需要使用栈
B. 对同一输入序列进行两组不同的合法入栈和出栈组合操作，所得的输出序列也一定相同
C. 通常使用队列来处理函数或过程调用
D. 队列和栈都是运算受限的线性表，只允许在表的两端进行运算
```

11. 「2012真题」已知操作符包括 `+、-、*、/、（、）`。将中缀表达式 `a+b-a*((c+d)/e-f)+g` 转换为等价的后缀表达式 `ab+acd+e/f-*-g+` 时，用栈来存放暂时还不能确定运算次序的操作符，栈初始时为空时，转换过程中同时保存在栈中的操作符的最大个数是（ ）

```
A. 5
B. 7
C. 8
D. 11
```

12. 「2014真题」假设栈初始为空，将中缀表达式 `a/b+(c*d-e*f)/g` 转换为等价的后缀表达式的过程中，当扫描到 f 时，栈中的元素依次是（ ）

```
A. +(*-
B. +(-*
C. /+(*-*
D. /+-*
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 3.4.5 Martix & Number Array | 矩阵和数组
06. 若将 n 阶上三角矩阵 A 按列优先级压缩存放在一维数组 `B[1...n(n+1)/2+1]` 中，则存放到 `B[k]` 中的非零元素 `ai,j (1=<i,j=<n)` 的下标 i、j 与 k 的对应关系是（ ）

```
A. i(i+1)/2+j
B. i(i-1)/2+j-1
C. j(j-1)/2+i
D. j(j-1)/2+i-1
```

07. 若将 n 阶下三角矩阵 A 按列优先顺序压缩存放在一维数组 `B[1...n(n+1)/2+1]` 中，则存放到 `B[k]` 中的非零元素 `ai,j (1=<i,j=<n)` 的下标 i、j 与 k 的对应关系是（ ）

```
A. (j-1)*(2n-j+1)/2+i-j
B. (j-1)*(2n-j+2)/2+i-j+1
C. (j-1)*(2n-j+2)/2+i-j
D. (j-1)*(2n-j+1)/2+i-j-1
```

08. 「2016真题」有一个 100 阶的三对角矩阵 M，其元素 `mi,j (1=<i,j=<100)` 按行优先依次压缩存入下标从 0 开始的一维数组 N 中。元素 `m30,30` 在 N 中的下标是（ ）

```
// 计算错误
// 2*1+28*3+2-1=87

A. 86
B. 87
C. 88
D. 89
```

10. 「2018真题」设有一个 12*12 的对称矩阵 M，将其上三角部分的元素 `mi,j (1 =< i =< j =< 12)` 按行优先顺序存入 C 语言的一维数组 N 中，元素 `m6,6` 在 N 中的下标是（ ）

```
A. 50
B. 51
C. 55
D. 66
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

# Chapter 4

## 4.2.4 String｜串
06. 串 'ababaaababaa' 的 next 数组为（ ）

```
A. -1,0,1,2,3,4,5,6,7,8,8,8
B. -1,0,1,0,1,0,0,0,0,1,0,1
C. -1,0,0,1,2,3,1,1,2,3,4,5
D. -1,0,1,2,-1,0,1,2,1,1,2,3
```

07. 串 'ababaaababaa' 的 nextvar 数组为（ ）

```
A. 0,1,0,1,1,2,0,1,0,1,0,2
B. 0,1,0,1,1,4,1,1,0,1,0,2
C. 0,1,0,1,0,4,2,1,0,1,0,4
D. 0,1,1,1,0,2,1,1,0,1,0,4
```

08. 「2015真题」已知字符串 S 为 'abaabaabacacaabaabcc'，模式串 t 为 'abaabc' 。采用 KMP 算法进行匹配，第一次出现“失配”（`s[i]!=t[j]`）时，i=j=5，则下次开始匹配时，i、j分别是（ ）

```
A. i=1, j=0
B. i=5, j=0
C. i=5, j=2
D. i=6, j=2
```

09. 「2019真题」设主串 T='abaabaabcabaabc'，模式串 S='abaabc'，采用 KMP 算法进行模式匹配，到匹配成功为止，在匹配过程中进行的单个字符间的比较次数是（ ）

```
A. 9
B. 10
C. 12
D. 15
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

# Chapter 5

## 5.1.4 Tree & Binary Tree | 树与二叉树
### 选择题
02. 一颗有 n 个结点的树的所有结点的度数之和为（ ）

```
A. n-1
B. n
C. n+1
D. 2n
```

04. 对于一棵具有 n 个结点、度为4的树来说，（ ）

```
A. 树的高度至多是 n-3
B. 树的高度至多是 n-4
C. 第 i 层上至多有 4*(i-1)
D. 至少在某一层上正好有 4 个结点
```

06. 假定一棵度为3的树中，结点数为50，则其最小高度为（ ）

```
A. 3
B. 4
C. 5
D. 6
```

### 综合题
01. 含有 n 个结点的三叉树的最小高度是？

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 5.2.3 Binary Tree | 二叉树
02. 以下说法中，正确的是（ ）

```
A. 在完全二叉树中，叶子结点的双亲的左兄弟（若存在）一定不是叶子结点 
B. 任何一棵二叉树，叶子结点个数为度为 2 的结点数减 1，即 n0=n2-1
C. 完全二叉树不适合顺序存储结构，只有满二叉树适合顺序存储结构
D. 结点按完全二叉树层序编号的二叉树中，第 i 个结点的左孩子的编号为 2i
```

06. 设二叉树有 2n 个结点，且 `m<n` ，则不可能存在（ ）的结点 

```
// 粗心
A. n 个度为 0
B. 2m 个度为 0
C. 2m 个度为 1
D. 2m 个度为 2
```

08. 设二叉树只有度为 0、2 的结点，其结点个数为 15，则该二叉树的最大深度为（ ）

```
// 粗心，注意看题，「最大深度」
A. 4
B. 5
C. 8
D. 9
```

10. 已知一棵完全二叉树的第 6 层（设根为第1层）有 8 个叶结点，则完全二叉树的结点个数最少是（ ）

```
// 对比 20 题
// 考察完全二叉树的叶结点只可能出现在层序最大的两层
// 最少结点个树出现在6层完全二叉树
A. 39
B. 52
C. 111
D. 119
```

13. 若一棵二叉树有 126 个结点，在第7层（根结点在第 1 层）至多有（ ）个结点

```
// 粗心
A. 32
B. 64
C. 63
D. 不存在第 7 层
```

18. 已知一棵有 2011 个结点的树，其叶结点个数是 116，该树对应的二叉树中无有孩子的结点个数是（ ）

```
// 特殊值法
A. 115
B. 116
C. 1895
D. 1896
```

20. 「2009真题」已知一棵完全二叉树的第 6 层（设根为第1层）有 8 个叶结点，则完全二叉树的结点个数最多是（ ）

```
// 对比 10 题
// 考察完全二叉树的叶结点只可能出现在层序最大的两层
// 最多结点个树出现在7层完全二叉树
A. 39
B. 52
C. 111
D. 119
```

23. 「2020真题」对于任意一棵高度为 5 且有 10 个结点的二叉树，若采用顺序存储结构进行保存，每个结点占 1 个存储单元（仅存放结点的数据信息），则存放该二叉树需要的存储单元数量至少是（ ）

```
// 所以二叉树的顺序存储结构使用满二叉树能够满足任意性？
A. 31
B. 16
C. 15
D. 10
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 5.3.3 Traversal of BT & Threaded BT | 二叉树的遍历 & 线索二叉树
选择题
01. 在下列关于二叉树遍历的说法中，正确的是（ ）

```
A. 若有一个结点是二叉树中某个子树的中序遍历结果序列的最后一个结点，则它一定是该子树的前序遍历结果序列的最后一个结点
B. 若有一个结点是二叉树中某个子树的前序遍历结果序列的最后一个结点，则它一定是该子树的中序遍历结果序列的最后一个结点
C. 若有一个叶子结点是二叉树中某个子树的中序遍历结果序列的最后一个结点，则它一定是该子树的前序遍历结果序列的最后一个结点
D. 若有一个叶子结点是二叉树中某个子树的前序遍历结果序列的最后一个结点，则它一定是该子树的中序遍历结果序列的最后一个结点
```

03. 设 n，m 为一棵二叉树的两个结点，在中序遍历时，n 在 m 前的条件是（ ）

```
// 已解决
// 中序遍历：LNR，因此无论是 L 还是 N 都在 R 的左边

A. n 在 m 右方
B. n 是 m 祖先
C. n 在 m 左方
D. n 是 m 子孙
```

05. 在二叉树中有两个结点 m 和 n，若 m 是 n 的祖先，则使用（ ）可以找到从 m 到 n 的路径

```
A. 先序遍历
B. 中序遍历
C. 后序遍历
D. 层次遍历
```

09. 一棵非空的二叉树的先序遍历序列与后序遍历序列正好相反，则改二叉树一定满足（ ）

```
// 错选为A

A. 所有的结点均无左孩子
B. 所有的结点均无右孩子
C. 只有一个叶结点
D. 是任意一棵二叉树
```

12. 一棵二叉树的前序遍历序列为 1234567，它的中序遍历序列可能是（ ）

```
A. 3124567
B. 1234567
C. 4135627
D. 1463572
```

18. 线索二叉树是一种（ ）结构

```
A. 逻辑
B. 逻辑和存储
C. 无力
D. 线性
```

20. 判断线索二叉树中 *p 结点有右孩子结点的条件是（ ）

```
// p->lchild==0 ==> 左孩子；p->ltag==1 ==> 前驱线索；

A. p!=NULL
B. p->rchild!=NULL
C. p->rtag==0
D. p->rtag==1 
```

21. 一棵左子树为空的二叉树在先序线索化后，其中空的链域个数是（ ）

```
// 不理解

A. 不确定
B. 0个
C. 1个
D. 2个
```

24. 若 X 是二叉中序线索树中一个有左孩子的结点，且 X 不为根，则 X 的前驱为（ ）

```
A. X 的双亲
B. X 的右子树中最左的结点
C. X 的左子树中最右的结点
D. X 的左子树中最右的结点
```

25. （ ）的遍历仍需要栈的支持

```
A. 前序线索树
B. 中序线索树
C. 后序线索树
D. 所有线索树
```

26. 某二叉树的先序序列和后序序列正好相反，则该二叉树一定是（ ）

```
A. 空或只有一个结点
B. 高度等于其结点数
C. 任意结点无左孩子
D. 任意结点无右孩子
```

30. 「2012真题」若一棵二叉树的前序遍历序列为 a,e,b,d,c，后序遍历序列为 b,c,d,e,a，则跟结点的孩子结点是（ ）

```
A. e
B. e,b
C. e,c
D. 无法确定
```

33. 「2015真题」先序序列为 a,b,c,d 的不同二叉树个数是（ ）

```
A. 13
B. 14
C. 15
D. 16
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 5.4.4 Tree, Forest | 树，森林
02. 利用二叉链表存储森林时，根结点的右指针是（ ）

```
A. 指向最左兄弟
B. 指向最右兄弟
C. 一定为空
D. 不一定为空
```

06. 设 F 是一个森林，B 是由 F 变换而来的二叉树。若 F 中有 n 个非终端结点，则 B 中右指针域为空的结点有（ ）个

```
A. n-1
B. n
C. n+1
D. n+2
```

09. 设 X 是树 T 中的一个非根结点，B 是 T 所对应的二叉树。在 B 中，X 是其双亲结点的右孩子，下列结论中正确的是（ ）

```
A. 在树 T 中，X 是其双亲结点的第一个孩子
B. 在树 T 中，X 一定无右边兄弟
C. 在树 T 中，X 一定是叶子结点
D. 在树 T 中，X 一定有左边兄弟
```

11. 「2009真题」将森林转换为对应的二叉树，若在二叉树中，结点 u 是结点 v 的父结点的父结点，则在原来的森林中， u 和 v 可能具有的关系是（ ）

```
I.  父子关系
II. 兄弟关系
III. u 的父结点与 v 的父结点是兄弟关系

A. 只有 II  
B. I 和 II
C. I 和 III
D. I、II 和 III
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 5.5.3 Huffman Tree, Union&Find Sets | 哈夫曼树以及并查集
04. 设哈夫曼编码的长度不超过 4，若已对两个字符编码为 1 和 01，则还最多可对（ ）个字符编码
```
A. 2
B. 3
C. 4
D. 5
```

07. 若度为 m 的哈夫曼树中，叶子结点的个数为 n，则非叶子结点的个数为（ ）

```
A. n-1
B. [n/m]-1
C. [(n-1)/(m-1)]
D. [n/(m-1)]-1
```

09. 并查集中最核心的两个操作是：1. 查找，查找两个元素是否属于同一个集合；2. 合并，如果两个元素不属于同一个集合，且所在的两个集合互不相交，则合并这两个集合。假设初始长度为10（0～9）的并查集，按 1-2、3-4、5-6、7-8、8-9、1-8、0-5、1-9 的顺序进行查找和合并操作，最终并查集共有（ ）个集合

```
A. 1
B. 2
C. 3
D. 4
```

10. 下列关于并查集的叙述中，（ ）是错误的

```
// 看完了图，能理解概念就行

A. 并查集使用双亲表示法存储的树
B. 并查集可用于实现克鲁斯卡尔算法
C. 并查集可用于判断无向图的连通行
D. 在长度为 n 的并查集中进行进行查找操作的时间复杂度 O(log2n)
```

11. 「2010真题」n(n>=2) 个权值均不相同的字符构成哈夫曼树，关于该树的叙述中，错误的是（ ）

```
A. 该树一定是一棵完全二叉树
B. 树中一定没有度为 1 的结点
C. 树中两个权值最小的结点一定是兄弟结点
D. 树中任意非叶结点的权值一定不小于下一层任意结点的权值
```

13. 「2015真题」下列选项给出的是从根分别达到两个叶结点路径上的权值序列，属于同一棵哈夫曼树的是（ ）

```
A. 24，10，5 和 24，10，7
B. 24，10，5 和 24，12，7
C. 24，10，10 和 24，14，11
D. 24，10，5 和 24，14，6
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

# Chapter 6

## 6.1.2  Concept of Graph | 图的概念
01. 图中有关路径的定义是（ ）

```
A. 由顶点和相邻顶点序列构成的边所形成的序列
B. 由不同顶点所形成的序列
C. 由不同边所形成的的序列
D. 上述定义都不是
```

03. 若从无向图的任意顶点出发进行一次深度优先搜索即可访问所有顶点，则该图一定是（ ）

```
A. 强连通图
B. 连通图
C. 有回路
D. 一棵树
```

12. 若具有 n 个顶点的图是一个环，则它有（ ）棵生成树
```
A. n^2
B. n
C. n-1
D. 1
```

13. 若一个具有 n 个顶点、e 条边的无向图是一个森林，则该森林中必有（ ）棵树
```
A. n
B. e
C. n-e
D. 1
```

17. 「2013真题」设图的邻接矩阵 A 如下所示，各顶点的度依次是（ ）
```
     ｜ 0 1 0 1 |
A == ｜ 0 0 1 1 |
     ｜ 0 1 0 0 |
     ｜ 1 0 0 0 |

A. 1,2,1,2
B. 2,2,1,1
C. 3,4,2,3
D. 4,4,2,2
```

18. 「2017真题」已知无向图 G 含有 16 条边，其中度为 4 的顶点个数为 3，度为 3 的顶点个数为 4，其他顶点的度均小于 3。图 G 所含的顶点个数至少是（ ）

```
A. 10
B. 11
C. 13
D. 15
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 6.2.6 Storage Structure and Operation of Graph | 图的存储结构和基本操作
11. 在有向图的邻接表存储结构中，顶点 v 在边表中出现的次数是（ ）

```
A. 顶点 v 的度
B. 顶点 v 的出度
C. 顶点 v 的入度
D. 依附于顶点 v 的边数
```

12. n 个顶点的无向图的邻接表最多有（ ）个边表结点。

```
A. n^2
B. n*(n-1)
C. n*(n+1)
D. n*(n-1)/2
```

13. 假设有 n 个顶点、e 条边的有向图用邻接表表示，则删除与某个顶点 v 相关的所有边的时间复杂度（ ）

```
A. O(n)
B. O(e)
C. O(n+e)
D. O(n*e)
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 6.3.4 Traversal of Graph | 图的遍历
05. 无向图 G = (V, E)，其中 V = {a,b,c,d,e,f}, E = {(a, b), (a, e), (a, c), (b, e), (c, f), (f, d), (e, d)}，对该图从 a 开始进行深度优先遍历，得到的顶点序列正确的是（ ）

```
// 对比09

A. a,b,e,c,d,f
B. a,c,f,e,b,d
C. a,e,b,c,f,d
D. a,e,d,f,c,b
```

06. 如下图所示，在下面的5个序列中，符合深度优先遍历的序列个数是（ ）

```
    a
 /  |  \
b - e   c
   /  \
  d    f

1. aebfdc 2. acfdeb 3. adefcb 4. aefdbc 5. aecfdb

A. 5
B. 4
C. 3
D. 2
```


09.   无向图 G = (V, E)，其中 V = {a,b,c,d,e,f}, E = {(a, b), (a, e), (a, c), (b, e), (c, f), (f, d), (e, d)}，对该图从 a 开始进行深度优先遍历，不能得到的序列的是（ ）

```
// 对比05

A. acfdeb
B. aebdfc
C. aedfcb
D. abecdf
```

11. 使用 DFS 算法递归遍历一个无环有向图，并在退出递归时输出相应顶点，这样得到的顶点序列是（ ）

```
A. 逆拓扑排序
B. 拓扑排序
C. 无序的
D. 都不是
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 6.4.6 Application of Graph | 图的应用
03. 以下叙述中，正确的是（ ）

```
A. 只要无向连通图中没有权值相同的边，则其最小生成树唯一 
B. 只要无向图中有权值相同的边，则其最小生成树一定不唯一
C. 从 n 个顶点的连通图中选取 n-1 条权值最小的边，即可构成最小生成树
D. 设连通图 G 含有 n 个顶点，则含有 n 个顶点、n-1 条边的子图一定是 G 的生成树
```

04. 以下叙述中，正确的是（ ）

```
A. 最短路径一定是简单路径
B. Dijkstra 算法不适合求有回路的带权图的最短路径
C. Dijkstra 算法不适合求任意两个顶点的最短路径
D. Floyd 算法求两个顶点的最短路径时，path(k-1) 一定是 path(k) 的子集
```

06. 下面的（ ）方法可以判断出一个有向图是否有环（回路）

```
I.  深度优先遍历 
II. 拓扑排序
III.求最短路径
IV. 求关键路径

A. I,II,IV
B. I,III,IV
C. I,II,III
D. 全部可以
```

09. 以下关于拓扑排序的说法中，错误的是（ ）

```
I.  若某有向图存在环路，则该有向图一定不存在拓扑排序
II. 在拓扑排序算法中为暂存入度为零的顶点，可以使用栈，也可以使用队列
III.若有向图的拓扑有序序列唯一，则图中每个顶点的入度和出度最多为 1 

A. I,III
B. II,III
C. II
D. III
```

10. 若一个有向图的顶点不能排成一个拓扑序列，则判定该有向图（ ）

```
A. 含有多个出度为 0 的顶点
B. 是个强连通图
C. 含有多个入度为 0 的顶点
D. 含有顶点数大于 1 的强连通分量
```

11. 下图所示有向图的所有拓扑序列共有（ ）

```
  A
  |
  B
 / \
D   C
| \ / \
| E   F
|/   /
G ---

A. 4 
B. 6
C. 5
D. 7
```

13. 下列关于图的说法中，正确的是（ ）

```
I.  有向图中顶点 V 的度等于其邻接矩阵中第 V 行中 1 的个数
II. 无向图的邻接矩阵一定是对称矩阵，有向图的邻接矩阵一定是非对称矩阵
III.在图 G 的最小生成树 G1 中，某条边的权值可能会超过未选边的权值
IV. 若有向无环图的拓扑序列唯一，则可以唯一确定该图

A. I,II,III
B. III,IV
C. III
D. IV
```

15. 下面关于求关键路径的说法中，不正确的是（ ）

```
A. 求关键路径是以拓扑排序为基础的
B. 一个事件的最早发生事件与以该事件为始的弧的活动的最早开始时间相同
C. 一个事件的最迟发生时间是以该事件为尾的弧的活动的最迟开始时间与该活动的持续时间的差
D. 关键活动一定位于关键路径上
```

22. 「2012真题」若用邻接矩阵存储有向图，矩阵中主对角线以下的元素均为零，则关于该图拓扑序列的结论是（ ）

```
A. 存在，且唯一
B. 存在，且不唯一
C. 存在，可能不唯一
D. 无法确定是否存在
```

24. 「2015真题」求下面的带权图的最小生成树时，可能是 Kruskal 算法第 2 次选中但不是 Prim 算法（从 V4 开始）第 2 次选中的边是（ ）

```
V1--10--V2
| 5  8  |
8  \/  11  
| /  \  |
V3--8--V4

(V1, V2)10, (V1, V3)8, (V1, V4)5
(V2, V3)8, (V2, V4)11
(V3, V4)8

A. (V1, V3)
B. (V1, V4)
C. (V2, V3)
D. (V3, V4)
```

29. 「2019真题」用有向无环图描述表达式(x+y)*((x+y)/x)，需要的顶点个数至少是

```
A. 5
B. 6
C. 8
D. 9
```

30. 「2020真题」已知无向图 G 如下所示，使用克鲁斯卡尔（Kruskal）算法求图 G 的最小生成树，加到最小生成树中的边依次是（ ）

```
a---20----b
| \9  11/ | \5
|  \   /  |  \
12   e    6   f   
|  /10 \14|  /
| /     \ | /7
c---18----d

(a, b)20, (a, c)12, (a, e)9, 
(b, d)6, (b, e)11, (b, f)5
(c, d)18, (c, e)10
(d, e)14, (d, f)7

A. (b,f), (b,d), (a,e), (c,e), (b,e)
B. (b,f), (b,d), (b,e), (a,e), (c,e)
C. (a,e), (b,e), (c,e), (b,d), (b,f)
D. (a,e), (c,e), (b,e), (b,f), (b,d)
```

34. 「2021真题」使用 Dijkstra 算法求下图中从顶点 1 到其余各顶点的最短路径，将当前找到的从顶点 1 到顶点 2，3，4，5 的最短路径长度保存在数组 dist 中，求出第二条最短路径后，dist 中的内容更新为（ ）

```
<1, 2>26, <1, 3>3, <1, 5>6, 
<3, 2>22, 
<4, 2>1, <4, 3>6, 
<5, 2>15, <5, 3>6, <5, 4>8

A. 26,3,14,6
B. 25,3,14,6
C. 21,3,14,6
D. 15,3,14,6
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

# Chapter 7

## 7.2.4 Liner Search & Binary Search & Blocked Search ｜ 顺序查找&折半查找&分块查找
13. 具有 12 个关键字的有序表中，对每个关键字的查找概率相同，折半查找算法查找成功的平均查找长度为（ ），折半查找查找失败的平均查找长度为（ ）

```
A. 37/12
B. 35/12
C. 39/13
D. 49/13
```

19. 「2015真题」下列选项中，不能构成折半查找中关键字比较序列的是（ ）

```
A. 500, 200, 450, 180
B. 500, 450, 200, 180
C. 180, 500, 200, 450
D. 180, 200, 500, 450
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 7.3.4 Search Tree | 树型查找
11. 含有 20 个结点的平衡二叉树的最大深度为（ ）

```
A. 4
B. 5
C. 6
D. 7
```

12. 具有 5 层结点的 AVL 至少有（ ）个结点

```
A. 10
B. 12
C. 15
D. 17
```

14. 下列关于红黑树和 AVL 的描述中，不正确的是（ ）

```
A. 两者都属于自平衡二叉树
B. 两者查找、插入、删除的时间复杂度都相同
C. 红黑树插入和删除过程至多有 2 次旋转操作
D. 红黑树的任意结点的左右子树高度只差不超过2倍
```

16. 将关键字 1,2,3,4,5,6,7 依次插入初始为空的红黑树 T，则 T 中红结点的个数为（ ）

```
A. 1
B. 2
C. 3
D. 4
```

17. 将关键字 5,4,3,2,1 依次插入初始为空的红黑树 T，则 T 的最终形态是（ ）

```
A.
       3(Black)
       /      \
  2(Black)    5(Black)
    /          /
1(Red)       4(Red)

B.
       3(Black)
       /      \
  2(Black)   4(Black)
    /           \
1(Red)         5(Red)

C.
     2(Black)
    /        \
1(Black)    4(Black)
            /      \
        3(Red)    5(Red)

D.
        4(Black)
        /      \
    2(Black)   5(Black)
    /     \
1(Red)   3(Red)
```

19. 「2010真题」在下图所示的平衡二叉树中插入关键字 48 后得到一颗新平衡二叉树，在新平衡二叉树中，关键字 37 所在结点的左、右子结点保存的关键字分别是（ ）

```
   24
 /    \
13    53
     /  \
    37  90

A. 13,48
B. 24,48
C. 24,53
D. 24,90
```

21. 「2012真题」若平衡二叉树的高度为 6，且所有非叶子结点的平衡因子均为 1，则该平衡二叉树的结点总数为（ ）

```
A. 12
B. 20
C. 32
D. 33
```

26. 「2019真题」在任意一棵非空平衡二叉树 T1 中，删除某结点 v 之后形成平衡二叉树 T2，再将 v 插入 T2 形成平衡二叉树 T3。下列关于 T1 与 T3 的叙述中，正确的是（ ）

```
I.  若 v 是 T1 的叶结点，则 T1 与 T3 可能不相同
II. 若 v 不是 T1 的叶结点，则 T1 与 T3 一定不相同
III.若 v 不是 T1 的叶结点，则 T1 与 T3 一定相同

A. I
B. II
C. I,II
D. I,III
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)

## 7.4.3 Multi-balanced Search Tree/B-Tree | 多路平衡查找树/B树
04. 在一棵 m 阶 B 树中做插入操作前，若一个结点中的关键字个数等于（ ），则必须分裂成两个结点；向一棵 m 阶 B 树做删除操作前，若一个结点中的关键字个数等于（ ），则可能需要同它的左兄弟或右兄弟结合并一个结点

```
A. m, [m/2]-2（向上取整）
B. m-1, [m/2]-1（向上取整）
C. m+1, [m/2]（向上取整）
D. m/2, [m/2]+1（向上取整）
```

05. 具有 n 个关键字的 m 阶 B 树，应有（ ）个叶结点

```
A. n+1
B. n-1
C. m*n
D. (n*m)/2
```

06. 高度为 5 的 3 阶 B 树至少有（ ）个结点，至多有（ ）个结点

```
A. 32
B. 31
C. 120
D. 121
```

08.  已知一棵 5 阶 B 树中共有 53 个关键字，则树的最大高度为（ ），最小高度为（ ）

```
A. 2
B. 3
C. 4
D. 5
```

10. 下列关于 B 树和 B+ 树的叙述中，不正确的是（ ）

```
A. B 树和 B+ 树都能有效地支持顺序查找
B. B 树和 B+ 树都能有效地支持随机查找
C. B 树和 B+ 树都是平衡的多叉树
D. B 树和 B+ 树都可以用于文件索引结构
```

14. 「2014真题」在一棵有 15 个关键字的 4 阶 B 树中，含关键字的结点个数最多是（ ）

```
A. 5
B. 6
C. 10
D. 15
```

15. 「2016真题」B+ 树不同于 B 树的特点之一是（ ）

```
A.
B.
C.
D.
```

17. 「2018真题」高度为 5 的 3 阶 B 树含有的关键字个数至少是（ ）

```
A. 15
B. 31
C. 62
D. 242
```

18. 「2020真题」依次将关键字 5,6,9,13,8,2,12,15 插入初始为空的 4 阶 B 树后，根结点中包含的关键字是（ ）

```
A. 8
B. 6,9
C. 8,13
D. 9,12
```

19. 「2021真题」在一棵高度为 3 的 3 阶 B 树中，根为第 1 层，若第 2 层中有 4 个关键字，则该树的结点数最多是（ ）

```
A. 11
B. 10
C. 9
D. 8
```

[返回目录行](https://github.com/AdorableLake/408_Questions/blob/main/Data_Structure/DS_Wangdao_Correct.md#catalogue目录)
