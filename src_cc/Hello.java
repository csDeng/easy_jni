public class Hello {
    static {
        System.loadLibrary("hello");
    }

    public native void sayHello();

    public static void main(String[] args) {
        new Hello().sayHello();
    }
}