package com.dsa.linkedlist;

import java.io.*;

public class FileIOManager {

    public void serialize(LinkedList list, String filename) {
        try {
            FileOutputStream fout = new FileOutputStream(filename);
            ObjectOutputStream ostream = new ObjectOutputStream(fout);
            ostream.writeObject(list);
            ostream.close();
            fout.close();
            System.out.println("List save to file");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public LinkedList deserialize(String filename) {
        LinkedList list=new LinkedList();
        try {
            FileInputStream fout = new FileInputStream(filename);
            ObjectInputStream ostream = new ObjectInputStream(fout);
            list = (LinkedList) ostream.readObject();
            ostream.close();
            fout.close();
            System.out.println("List read from file");
        } catch (Exception e) {
            System.out.println(e);
        }
        return list;

    }
}
