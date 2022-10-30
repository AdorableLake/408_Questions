# Catalog | 目录
## [Data Structure](https://github.com/AdorableLake/408_Questions/blob/main/Second_Cycle_Review/Data_Structure.md#data-structure-1)
### [Chapter 1: Linear Table](https://github.com/AdorableLake/408_Questions/blob/main/Second_Cycle_Review/Data_Structure.md#ds1-linear-table)
### [Chapter 2: Stack, Queue, Number Sets](url)
### [Chapter 3: Tree](url)
### [Chapter 4: Graph](url)
### [Chapter 5: Find](url)
### [Chapter 6: Sort](url)

## [Computer Organization](url)
### [Chapter 1: ](url)
### [Chapter 2: ](url)
### [Chapter 3: ](url)
### [Chapter 4: ](url)
### [Chapter 5: ](url)
### [Chapter 6: ](url)

# Data Structure
## DS.1 Linear Table
### 单项选择题
✅02. 将两个有 n 个元素的有序表归并成一个有序表，其最少的比较次数为（ ）

```
A. n
B. 2n-1
C. 2n
D. n-1
```

```
本质考察归并排序算法。

最少的比较次数为表 1 的所有元素都比表 2 第一个元素小，因此只需比较 n 次。
```

✅06. 给定有 n 个元素的一位数组，建立一个有序单链表的最少时间复杂度是（ ）

```
A. O(1)
B. O(n)
C. O(n^2)
D. O(nlog2n)
```

```
建立链表实质是排序算法。

分成两种情况：
1. 先建立链表，然后依次插入元素。
该种算法使用插入排序，每插入一个元素就需要遍历链表一边去寻找插入位置，时间复杂度为 O(n^2).

2. 先排好序，然后建立链表。
数组排序的最少时间复杂度为 O(nlog2n)；（即快排算法）
建立链表则需要遍历一遍链表，因此时间复杂度为 O(n)；
采用加法原理，因此总体的时间复杂度为 O(nlog2n).
```

✅07. 在一个以 h 为头结点的单循环链表中，p 指针指向链尾的条件是（ ）

```
A. p->next->next=h
B. p->next=h
C. p->next=h->next
D. p->next=NULL
```

```
易错选为 A
注意题中是 “p 指针” 而非 p 结点，因此 p 指针若指向链尾，即说明 p 指针是链尾节点的指针域
```

✅10. 下列程序段的时间复杂度是（ ）

```C
void fun(int n) {
    int i = 0;
    int s = 0;
    while(s<n) {
        ++i;
        s = s+i; 
    }
}
```

```
A. O(n)
B. O(log2n)
C. O(nlog2n)
D. O(n^(1/2))
```

```
基本运算为 '++i' 和 's=s+i'。
每循环一次，i 增 1. 故 s=0+1+2+3+···+i=(i+1)*i/2。
故循环次数 k 满足 (1+k)*k/2 < n，因此时间复杂度为 O(n^(1/2))
```

### 综合应用题
01. 设有两个集合 A、B，设计生成集合 C = A N B 的算法。集合 A、B、C 均使用数组存储。
    1. 给出算法的基本设计思想
    2. 根据设计思想，采用 C 或 C++ 语言描述算法，关键之处给予注释
    3. 说明所设计算法的时间复杂度

```

```

02. 给定一个由 n（n>1）个不同整数组成的升序序列，同时包含负数和正数。设计一个在时间和空间两方面都尽可能高效的算法，求序列中绝对值最小的树，如序列 {-8, -3, -1, 4, 5} 中绝对值最小的数为 -1。
    1.  给出算法的基本设计思想
    2.  根据设计思想，采用 C 语言或 C++ 语言描述算法，关键之处给出解释
    3.  说明你所设计算法的时间复杂度和空间复杂度

```

```

03. 设有两个带头结点的有序单链表，一个为升序，另一个为降序。试编写程序，将这两个链表合并为一个有序链表。

```

```

04. 已知长度为 n（n>1）的单链表，表头指标为 L，结点结构由 data 和 next 两个域构成，其中 data 域为字符型。试设计一个在时间和空间两方面都尽可能高效的算法，判断该单链表是否中心对称（例如 xyx、xxyyxx 都是中心对称的），要求：
    1.  给出算法的基本设计思想
    2.  根据设计思想，采用 C 或 C++ 语言描述算法，关键之处给出注释
    3.  说明你所设计算法的时间复杂度和空间复杂度

```

```

05. 已知两个序列 A={a1, a2, a3, ..., an} 和 B={b1, b2, b3, ..., bn} 存放在两个单链表中，试设计一个算法，判断序列 B 是否为序列 A 的子序列。要求：
    1.  给出算法的基本设计思想
    2.  根据设计思想，采用 C 或 C++ 语言描述算法，关键之处给出注释
    3.  说明你所设计算法的时间复杂度

```

```

06. 设带头结点的双向循环链表的定义为
   
```
typedef int ElemType;
typedef struct DNode {              // 双向循环链表结点的结构定义
    ElemType data;                  // 结点数据
    struct DNode * lLink, *rLink;   // 结点前驱和后继指针
} DblNode;
typedef DblNode * DblList;          // 双向循环链表
```

试设计一个算法，改造一个带头结点的双向循环链表，所有结点的原有次序保存在各结点的右链域 rLink 中，并利用左链域 `lLink` 把所有结点按从小到大的顺序连接起来。
