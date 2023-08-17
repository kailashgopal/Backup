int is_prime(int n){
    int flag = 0;
    rep(i, 2, sqrt(n)+1){
        if (n%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        return 1;
    }
    return 0;
}

#define ip_to_vi(var, n) rep(i, 0, n){int a; cin >> a; var.push_back(a);}

