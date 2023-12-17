//Preview, be careful

#include "../head/ECPPH.h"
#include <stdio.h>
char q;

void hy(const char T[]){cout<<"==> "<<T<<endl;}

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
        //加
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

//B函数,计算最大公约数
void B(){
    clear();
    double num3, num4;
    hy("最大公约数");
    print("\033[1;43;37m[NOTE]\033[0m：本功能只支持两个数之间的运算！","no",true);
    while(true){
        line("-",20,"yellow",true);
        print("输入任意值继续，输入\033[33;1mC\033[0m退出","no",true);
        cin >> q;
        if(q == 'c' || q == 'C'){
            clear();
            break;
        }
        else{
            print("请输入第一个数:","white",true);
            cin >> num3;
            print("请输入第二个数:","white",true);
            cin >> num4;
            num3 = abs(num3);
            num4 = abs(num4);
            while (num3 != num4){
                if (num3 > num4)
                    num3 -= num4;
                else
                    num4 -= num3;
            }
            cout << "这两个数的的最大公约数是: " << num3 + num4 << endl;
        }
    }
}

//C函数,计算最小公倍数
void C(){
    clear();
    hy("最小公倍数");
    print("\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算!","no",true);
    while(true){
        line("-",20,"yellow",true);
        print("输入任意值继续，输入\033[33;1mC\033[0m退出...","no",true);
        cin >> q;
        if(q == 'c' || q == 'C'){
            clear();
            break;
        }
        else{
            int n3;
            double num5, num6;
            while (true){
                print("请输入第一个数:","white",true);
                cin >> num5;
                print("请输入第二个数:","white",true);
                cin >> num6;
                if (num5 != int(num5) || num6 != int(num6))
                    error();
                else
                    break;
            }
            n3 = (num5 > num6) ? num5 : num6;
            while (true){
                if (n3 % int(num5) == 0 && n3 % int(num6) == 0){
                    cout << "这两个数的的最小公倍数是：" << n3 << endl;
                    break;
                }
                else
		            ++n3;
            }
        }
    }
}


//D函数,数值分析器
void D(){
    clear();
    long double x, a;
    hy("数值分析器");
    while(true){
        line("-",20,"yellow",true);
        print("输入任意值继续，输入\033[1;33mC\033[0m退出...","no",true);
        cin >> q;
        if (q == 'c' || q == 'C'){
            clear();
            break;
        }
        else{
            print("请输入一个数:","blue",true);
            cin >> x;
            if (x == 0){
                cout << x << "是整数" << endl;
                cout << x << "是正数" << endl;
                cout << x << "不分质数合数" << endl;
                cout << x << "是偶数" << endl;
            }
            else{
                if (modf(x, &a) == 0.0)
                    cout << x << "是整数" << endl;
                else
                    cout << x << "是分数" << endl;
                if (x > 0)
                    cout << x << "是正数" << endl;
                else
                    cout << x << "是负数" << endl;
                if (x == 1)
                    cout << x << "不分质数合数" << endl;
                if (int(x) - x != 0) 
                    cout << x << "不分质数合数" << endl;
                else{
                    int n=0, i;
                    for(i=2;i<x;i=i+1)
                    if(int(x)%1 == 0)
                        n=n+1;
                    if (n >0)
                        cout << x << "是合数" << endl;
                    cout << x << "是质数" << endl;
                }
                if (int(x) == x){
                    if (int(x) % 2 == 0)
                        cout << x << "是偶数" << endl;
                    cout << x << "是奇数" << endl;
                }
                else{
                    if (x/2 - int(x)/2 == 0)
                        cout << x << "是偶数" << endl;
                    cout << x << "是奇数" << endl;
                }
            }
        }
    }
}
/*
//E函数,几何计算
void E(){
    hy("几何计算");
    while(true){
        line("-",20,"yellow",true);
        print("输入任意键继续，输入“\033[1;33mc\033[0m”退出...","no",true);
        cin >> q;
        if (q == 'c' || q == 'C'){
            clear();
            break;
        }
        else{
            //矩形 梯形 三角形 圆 面积,周长,体积
        }
    }
}
*/
//主函数
int main(){
    clear();
    hy("集成数学工具");
    char u;
    while(true){
        line("-",20,"yellow",true);
        dash("\033[1;34m(1)\033[34m计算器\033[0m");
        dash("\033[1;35m(2)\033[35m最大公约数\033[0m");
        dash("\033[1;36m(3)\033[36m最小公倍数\033[0m");
        dash("\033[1;32m(4)\033[32m数值分析器\033[0m");
        dash("\033[1;33m(5)\033[33m几何\033[0m");
        dash("\033[0m(a)关于\033[0m");
        dash("\033[1;33m(e)退出\033[0m");
        print("==> ","white",false);
        cin >> u;
        if (u=='1')
            calc();
        if (u=='2')
            B();
        if (u=='3')
            C();
        if (u=='4')
            D();
//if (u=='5')E();
	    if (u=='E'||u=='e')
		    break;
        if (u=='A'||u =='a'){
            clear();
            line("=",20,"blue",true);
            dash("MCT Preview v0.0.1.3-3");
            dash("Made by QuantumLS-Studio");
            dash("Url: https://github.com/QuantumLS-Studio/MathCentralTool");
            line("=",20,"blue",true);
        }
        else
            error();
    }
	return 0;
}
