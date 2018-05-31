package io.yushan;

/**
 * @author yushan.ldq
 * @date 2018/05/30
 */
public class Main {
    private static final String LIB_NAME = "jni-demo";
    static {
        try {
            System.load(
                "/Users/Archer/Alibaba/Code/jni-helloworld/jni-helloworld/build/libs/jni-demo/shared/libjni-demo.dylib");
        } catch (Throwable e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        int i = 0;
        for (;;) {
            byte[] types = new HelloWorld().readBytes("test");
            System.out.println(i++);
        }

    }
}
