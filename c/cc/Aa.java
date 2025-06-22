public class Aa {
    // 声明本地方法
    public native void sayHello();

    static {
        // 加载本地库
        System.loadLibrary("nativeLib");
    }

    public static void main(String[] args) {
        Aa example = new Aa();
        example.sayHello();  // 调用本地方法
    }
}
