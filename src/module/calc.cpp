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
