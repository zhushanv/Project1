#pragma once
#ifndef HUFFMAN_H
#include<iostream>
#include<queue>
using namespace std;

//统计字符出现次数并将其放入堆中
void putInqueue(priority_queue<int, vector<int>, greater<int>>q, string s);

void buildHuffmantree(priority_queue<int, vector<int>, greater<int>>q);

#endif // !HUFFMAN_H
