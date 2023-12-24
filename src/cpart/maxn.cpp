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