package com.dsa.linkedlist;

import java.io.Serializable;

public class Node implements Serializable{
    
    int data;
    Node next;
    

    public Node(){
        data=0;
        next=null;
        
    }

    public Node(int data){
        this.data=data;
        next=null; 
    }

    public void display(){
        System.out.println(this.data);
    }
}