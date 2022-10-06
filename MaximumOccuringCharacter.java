public class MaximumOccuringCharacter {
    public static void main(String[] args) {
        String str = "worcestershire";
        int[] frequency = new int[str.length()];
        char maxCharacter = str.charAt(0);
        int i, j, max;
        char string[] = str.toCharArray();
        for (i = 0; i < string.length; i++) {
            frequency[i] = 1;
            for (j = i + 1; j < string.length; j++) {
                if (string[i] == string[j] && string[i] != ' ' && string[i] != '0') {
                    frequency[i]++;
                    string[j] = '0';
                }
            }
        }
        max = frequency[0];
        for (i = 0; i < frequency.length; i++) {
            if (max < frequency[i]) {
                max = frequency[i];
                maxCharacter = string[i];
            }
        }
        System.out.println("Maximum Occurring Character: " + maxCharacter);
    }
}
