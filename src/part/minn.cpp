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
