#pragma once
#ifndef HUFFMAN_H
#include<iostream>
#include<queue>
using namespace std;

//ͳ���ַ����ִ���������������
void putInqueue(priority_queue<int, vector<int>, greater<int>>q, string s);

void buildHuffmantree(priority_queue<int, vector<int>, greater<int>>q);

#endif // !HUFFMAN_H
