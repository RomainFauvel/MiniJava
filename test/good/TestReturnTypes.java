class TestReturnTypes {
    public static void main(String[] args) {
        {
            System.out.println(new LaClassADallas().float_fun());
            System.out.println(new LaClassADallas().int_fun());

        }
    }
}

class LaClassADallas{
    public float float_fun() {
        return -3.5e+5f;
    }

    public int int_fun() {
        return 1;
    }

}