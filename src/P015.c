#include "P015.h"

// Easy but no efficent
int Lattice_paths(int m,int n){
    if(n==0||m==0){
        return 1;
    }
    return Lattice_paths(m - 1,n) + Lattice_paths(m,n-1);
}

//这是高中的经典排列问题，难处在于使用c语言实现大数阶乘

//阶乘函数
//计算num!的结果
void factorial(int num){
    
}

void Lattice_paths1(){
    int res[200];   //定义存储结果的数组，最大为100位
    int len;        //表示阶乘结果的位数

    int num = 20;
    int i,j,carry;

    memset(res,0,sizeof(res));
    res[0] = 1;

    for(i=1;i<=num;i++){
        carry = 0;
        for(j=0;j<len;j++){
            res[j] = res[j]*i + carry;
            if(res[j]>=10){
                carry = res[j]/10;
                res[j] %= 10;
            }else{
                carry = 0;
            }
        }
        while(carry > 0){
            res[len] = carry%10;
            carry /= 10;
            len++;
        }
    }

    for(i=len-1;i>=0;i++){
        printf("%d",res[i]);
    }

}