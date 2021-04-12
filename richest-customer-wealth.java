class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for (int[] row:accounts) {
            int sum = 0;
            for (int j:row) {
                sum += j;
            }
            max = Math.max(max, sum);
        }
        return max;
    }
}
