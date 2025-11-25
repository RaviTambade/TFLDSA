package com.dsa.linkedlist;

import java.util.Scanner;

/**
 * Hello world!
 *
 */
public class App {
    public static void main(String[] args) {

        FileIOManager fileMgr = new FileIOManager();

        LinkedList list = fileMgr.deserialize("list.txt");

        UIManager mgr = new UIManager();

        int choice;
        int data;
        Scanner input = new Scanner(System.in);

        do {
            mgr.showMenu();
            choice = mgr.getChoice();

            switch (choice) {

                case 1: {
                    System.out.println("Enter the data  : ");
                    data = input.nextInt();
                    list.insert(data);
                }
                    break;

                case 2: {
                    System.out.println("Enter the data  : ");
                    data = input.nextInt();
                    list.remove(data);
                }
                    break;

                case 3: {
                    System.out.println("Enter the data  : ");
                    data = input.nextInt();
                    boolean status = list.search(data);
                    System.out.println(status);
                }
                    break;

                case 4:
                    list.display();
                    break;

                case 5:
                    fileMgr.serialize(list, "list.txt");
                    break;

                default:
                    System.out.println("You choose to exit");
                    break;
            }
        } while (choice != 6);

    }

}
