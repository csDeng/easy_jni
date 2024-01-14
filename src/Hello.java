public class Hello {
    static {
        System.loadLibrary("hello");
    }

    public native void sayHello();

    public static void main(String[] args) {
        System.out.println(System.currentTimeMillis());
        new Hello().sayHello();
    }
}