//
// Created by zhaohongyan on 2020/9/24.
//
#include <bits/stdc++.h>

using namespace std;

class UnionFind {
public:
    vector<int> id;

    explicit UnionFind(int size) {
        for (int i = 0; i < size; ++i) {
            id[i] = i;
        }
    }

    bool isConnect(int p, int q) {
        return find(p) == find(q);
    }

    void merge(int p, int q) {
        auto pID = find(p);
        auto qID = find(q);
        if (pID == qID) {
            return;
        }
        for (int &i : id) {
            if (i == pID) {
                i = qID;
            }
        }
    }

private:
    int find(int p) {
        return id[p];
    }
};

class UnionFind2{
    vector<int> id;
public:
    explicit UnionFind2(int size){
        for (int i = 0; i < size; ++i) {
            id[i] = i;

        }
    }
    int find(int p){
        while (p!=id[p]){
            p = id[p];
        }
        return p;
    }
    void merge(int p,int q){
        id[find(p)] == find(q);
    }
};
