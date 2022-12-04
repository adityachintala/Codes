// b)write a program to create
// interface Test,in this
// interface the
// member function
// in square.implement this

// interface in a arithmetic class. create a new class called TwoTestInt, in this class use the object of arithmetic class.
class arithmetic {
    interface Test {
        void square(int a);
    }
}

public class TwoTestInt extends arithmetic {
    void square(int a) {
        System.out.println(a * a);
    }

    public static void main(String[] args) {
        TwoTestInt obj = new TwoTestInt();
        obj.square(5);
    }
}
