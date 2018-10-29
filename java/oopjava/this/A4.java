class B {
    A4 obj = new A4(5);

    B(A4 obj) {
        this.obj = obj;
    }

    void display() {
        System.out.println(obj.data);// using data member of A4 class
    }
}

class A4 {
    int data;

    A4() {
        B b = new B(this);
        b.display();
    }

    A4(int x){
        data = x;
    }
    public static void main(String args[]) {
        A4 a = new A4();
    }
}