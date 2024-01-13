/*
/*
//calc函数,计算器
void calc(){
    clear();
    char o;
    double num1,num2,num3;
    hy("计算器");
    print("\033[1;37;43m[NOTE]\033[0m：现仅只支持两个数之间的运算！","no",true);
    while (true){
        line("-",20,"yellow",true);
        print("请输入计算式(+ - * / ^),输入'0c0'退出","white",true);
        print("如: 1+1","white",true);
        cin >> num1 >> o >> num2;
        if (o == '+')
            printf("%f+%f=%f\n",num1,num2,num1+num2);
        //减
        if (o == '-')
            printf("%f-%f=%f\n",num1,num2,num1-num2);
        //乘
        if (o == '*')
            printf("%f*%f=%f\n",num1,num2,num1*num2);
        //除
        if (o == '/'){
            if (num2 != 0)
                printf("%f/%f=%f\n",num1,num2,num1/num2);
            else
                error();
        }
        //乘方
        /*
if (o == '^') {
int n=num2;
if(num1 != 0 && num2 != 0){
num3 = 1;
while(n > 0) {
int(num1)*int(num3)=num3;
n--;
}
}
else
error();
printf("%f^%f=%f\n",num1,num2,num3);
}
*/
/*
        //退出
    if(o == 'c' && num1 == 0 && num2 ==0){
        clear();
        break;
    }
    //报错
    else
        error();
    }
}
*/
int calc(int fn, int bn, char o){
    if (o=='+')
        return fn+bn;
    if (o=='-')
        return fn-bn;
    if (o=='*')
        return fn*bn;
    if (o=='/'){
        if (fn==0)
            error();
        else
            return fn/bn;
    }
    if (o=='^'){
        if (fn==bn==0)
            error();
        int value=fn;
        for (size_t i = 0; i <= bn; i++)
        {
            value=fn*value;
        }
        return value;
    }
    else{
        error();
        return 0;
    }
}