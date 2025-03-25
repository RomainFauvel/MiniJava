class TestDoWhile {
    public static void main(String[] args) {
        {
           System.out.println(new LaClassADallas().run());
        }
    }
}
class LaClassADallas{
    public int run(){
        int i;
        i = 0;
        do {
                System.out.println(i);
                i = i + 1;
            }
            while(i < 10);
        return 0;
    }

}