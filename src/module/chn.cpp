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