struct dsu {
    int mx;
    vector < int > per , rank , group_size;
    explicit dsu(int n){ 
        per.resize(n + 1);
        rank.resize(n + 1);
        mx = 1;
        group_size.resize(n + 1 , 1);
        iota(all(per) , 0);
    }

    int get(int x){
        return (x == per[x] ? x : per[x] = get(per[x]));
    }

    bool is_same_set(int u , int v){
        return get(u) == get(v);
    }
    void join(int u , int v){
        u = get(u) , v = get(v);
        if(u == v) return;
        if(rank[u] > rank[v]) swap(u , v);
        per[u] = v;
        if(rank[u] == rank[v]) rank[v]++;
    }
};
