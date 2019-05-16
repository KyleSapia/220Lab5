/*
 * hashNode.cpp
 *
 *  Created on: May 9, 2019
 *      Author: kylesapia
 */

#include "hashNode.hpp"
#include <time.h>
hashNode::hashNode(){
    valuesSize=0;
    currSize=0;
    values=NULL;
    keyword="";
    srand(time(0));
}
hashNode::hashNode(string s){
    keyword=s;
    valuesSize=100;
    currSize=0;
    values=new string[valuesSize];
    srand(time(0));
}
hashNode::hashNode(string s, string v){
    keyword=s;
    valuesSize=100;
    currSize=1;
    values=new string[valuesSize];
    values[0]=v;
}
void hashNode:: addValue(string v){
    int counter=0;
    while(values[counter]!= ""){
        counter++;
    }
    values[counter]=v;
    double loadFactor=currSize/(double)valuesSize; //this makes sure it becomes a double
    if (loadFactor>=0.7){ //load factor goes above 70%
        dblArray(); //function which doulbes the array
    }
}
void hashNode::dblArray(){
    string *doubleValues=new string[2*valuesSize];
    for (int i=0;i<valuesSize;i++){
        values[i]=doubleValues[i];
    }
    valuesSize*=2;
    values=doubleValues;
    delete doubleValues;
}
string hashNode:: getRandValue(){
    srand(time(NULL));
    int random= rand() % valuesSize;
    if (values[random]== ""){
        return"";
    }
    return values[random];
}
