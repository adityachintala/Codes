// a) write a program to create interface A, in this interface we have 2 methods, method1 and method2. 
// implements this interface in another class named myclass.

import java.util.*;

interface A
{
    void method1();
    void method2();
}

class myclass implements A {
    public void method1() {
        System.out.println("method1");
    }
    public void method2() {
        System.out.println("method2");
    }

    public static void main(String args[]) {
        myclass obj = new myclass();
        obj.method1();
        obj.method2();
    }
}