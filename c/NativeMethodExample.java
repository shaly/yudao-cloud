public class NativeMethodExample {
    // 声明本地方法
    public native void sayHello();

    static {
        // 加载本地库
        System.loadLibrary("nativeLib");
    }

    public static void main(String[] args) {
        NativeMethodExample example = new NativeMethodExample();
        example.sayHello();  // 调用本地方法
    }
}
