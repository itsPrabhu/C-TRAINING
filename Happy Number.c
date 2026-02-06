bool isHappy(int n) {
    int slow = n;
    int fast = n;

    while (1) {
        int s = 0;
        int temp = slow;
        while (temp > 0) {
            int d = temp % 10;
            s += d * d;
            temp /= 10;
        }
        slow = s;

        int f = 0;
        temp = fast;
        while (temp > 0) {
            int d = temp % 10;
            f += d * d;
            temp /= 10;
        }

        int f2 = 0;
        temp = f;
        while (temp > 0) {
            int d = temp % 10;
            f2 += d * d;
            temp /= 10;
        }
        fast = f2;

        if (fast == 1) return true;
        if (slow == fast) return false;
    }
}
