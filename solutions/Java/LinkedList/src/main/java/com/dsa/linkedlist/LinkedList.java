package com.dsa.linkedlist;

import java.io.Serializable;

public class LinkedList implements Serializable{
    
    Node head;
    Node previousNode;
    Node toDelete;

    public LinkedList(){
       head=null;
    }

    public void insert(int data){

        Node theNode=new Node(data);
        if(head==null){
            head=theNode;
        }
        else{
            Node current=head;
            while(current.next !=null){
                current=current.next;  
            }
            current.next=theNode; 
        }
    }

    public void remove(int data){
        
        if (head.data==data) {
           head=head.next;
        }
        else{
                Node current=toDelete;
                    if(search(data)){
                        previousNode.next=current.next;
                        current=null;
                }
        }
           
    }

    public boolean search(int data){

        boolean status=false;
        Node current=head;
        while(current.next!=null){
            previousNode=current;
            current=current.next;
            if(current.data==data){
                toDelete=current;
                status=true;
                System.out.println(status);
                return status;
            }
        }
        System.out.println(status);
        return status;
    }


    public void display(){

        System.out.println("**********************************************************");
        Node current=head;
        while(current !=null){
            System.out.println(current.data);
            current=current.next;
        }
        System.out.println("**********************************************************");
    }
    
}
