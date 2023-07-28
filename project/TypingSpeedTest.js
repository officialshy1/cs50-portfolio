import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.time.Duration;
import java.time.Instant;

public class TypingSpeedTest {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Welcome to the Typing Speed Test!");
        System.out.println("Type the following sentence as fast as you can:");

        String sentence = "The quick brown fox jumps over the lazy dog.";
        System.out.println(sentence);

        System.out.println("Press Enter when you are ready to start.");
        reader.readLine();

        Instant start = Instant.now();

        System.out.print("Type the sentence here: ");
        String userTypedSentence = reader.readLine();

        Instant end = Instant.now();

        long timeElapsedMillis = Duration.between(start, end).toMillis();

        int wordsTyped = userTypedSentence.trim().split("\\s+").length;
        int charactersTyped = userTypedSentence.length();

        double wordsPerMinute = (wordsTyped / (timeElapsedMillis / 1000.0)) * 60;
        int accuracy = calculateAccuracy(sentence, userTypedSentence);

        System.out.println("Time taken: " + timeElapsedMillis + " milliseconds");
        System.out.println("Words per minute: " + wordsPerMinute);
        System.out.println("Accuracy: " + accuracy + "%");
    }

    private static int calculateAccuracy(String original, String typed) {
        int correctCharacters = 0;

        for (int i = 0; i < Math.min(original.length(), typed.length()); i++) {
            if (original.charAt(i) == typed.charAt(i)) {
                correctCharacters++;
            }
        }

        return (int) ((correctCharacters / (double) original.length()) * 100);
    }
}
