/*
  Module: consolidate2 module
  要求：输入获取负载数据，获取流量数据，获取PM时延矩阵
  输出：负载均衡结果，一组迁移序列
  Created by chenjianhai.
  Created date: 2013/05/20
*/

#include "alg_consolidate2.h"

/*
@函数功能：负载均衡算法类初始化
参数说明：THIS，指向类的指针
*/

void init_consolidate2(cls_consolidate2Ptr THIS){
	
	_c2this=THIS;
	
	THIS->consolidate2=consolidate2;
}

/*
@函数功能：负载均衡算法实现负载均衡决策
参数说明：
*/
void consolidate2()
{
	
	return;
}




