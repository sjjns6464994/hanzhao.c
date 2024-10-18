#include<stdio.h>

// 定义一个结构体来存储每箱糖果的价值和重量，以及单位重量的价值
struct tang
{
	int v;  // 糖果的价值
	int w;  // 糖果的重量
	double value;  // 单位重量的价值
};

int main()
{
	int i,j,k,h,n,w,index,flag;
	double sum=0;  // 用于累加圣诞老人能带走的糖果总价值
	struct tang a[100],temp;  // 定义一个数组来存储糖果信息，temp用于排序时的临时变量
	
	scanf("%d %d",&n,&w);  // 读取糖果箱数n和驯鹿能承受的最大重量w
	
	// 读取每箱糖果的价值和重量，并计算每箱糖果的单位重量价值
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i].v,&a[i].w);
		a[i].value=a[i].v*1.0/a[i].w;  // 计算单位重量价值
	}
	
	// 对糖果箱按单位重量价值进行降序排序
	for(i=0;i<n-1;i++)
	{
		index=i;  // 假设当前索引的糖果箱是价值最高的
		for(j=i+1;j<n;j++)
		{
			if(a[j].value>a[index].value)  // 如果找到更高价值的糖果箱
			  index=j;  // 更新索引
		}
		// 交换位置，将当前最高价值的糖果箱放到前面
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
	
	// 按顺序选择糖果箱，直到驯鹿无法承受更多重量
	for(i=0;i<n;i++)
	{
		if(w>a[i].w)  // 如果当前剩余的重量可以带走整箱糖果
		{
			w=w-a[i].w;  // 减少剩余重量
			sum=sum+a[i].w*a[i].value;  // 累加这箱糖果的价值
		}
		else if(w<a[i].w)  // 如果当前剩余的重量不足以带走整箱糖果
		{
			sum=sum+a[i].value*w;  // 累加能带走的这部分糖果的价值
			w=0;  // 剩余重量用完
		}
		if(w==0)  // 如果驯鹿的承重已经达到上限
		  break;  // 结束循环
	}
	
	// 输出圣诞老人能带走的最大总价值
	printf("最大带走价值为：%.1f\n",sum);
	return 0;
}
