// Ping Program

import java.io.*;
import java.util.*;

/**
 * ping
 */
public class ping {

    static void pingWebsite(List<String> list) {
        try {
            ProcessBuilder builder = new ProcessBuilder(list);
            Process process = builder.start();

            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));
            BufferedReader errorReader = new BufferedReader(new InputStreamReader(process.getErrorStream()));

            String line = "";
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }

            while ((line = errorReader.readLine()) != null) {
                System.out.println(line);
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        List<String> list = new ArrayList<String>();
        list.add("ping");
        list.add("www.google.com");
        pingWebsite(list);
    }
}