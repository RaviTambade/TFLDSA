package com.dsa.linkedlist;

import java.util.Scanner;

public class UIManager{

    public void showMenu(){
        System.out.println("1) Insert the data");
        System.out.println("2) Remove an element");
        System.out.println("3) Search an Element");
        System.out.println("4) Display the data");
        System.out.println("5) Save the data");
        System.out.println("6) Exit");
        System.out.println("***********************************");
    }

    public int getChoice(){
        Scanner input=new Scanner(System.in);
        int choice;
        System.out.println("Enter your choice : ");
        choice=input.nextInt();
        return choice;
    }
    
}