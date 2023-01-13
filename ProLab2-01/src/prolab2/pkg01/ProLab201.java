package prolab2.pkg01;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.KeyEvent;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JFrame;
import javax.swing.SwingUtilities;

public class ProLab201 {

    private char [][] maze = null;
    private BufferedReader br = null;
    private File f;
    private int height = 0;
    private int width = 0;

    public static void main(String[] args) {

        ProLab201 ms = new ProLab201();
        String fileName = "Harita.txt";
        ms.buildMap(fileName);
        ms.formatMaze();
    }   

    private void buildMap(String file) {

        char temp;
        String line = null;
        int count = 1;
        int heightCounter = 0;
        try {
            f = new File(file);
            if(!f.exists() || f.isDirectory()) {
                throw new FileNotFoundException();
            }

            //Read each file line to populate necessary variables and maze coordinates
            br = new BufferedReader(new FileReader(file));
            while((line = br.readLine()) != null) {
                switch (count) {
                case (1):
                    width = Integer.parseInt(line.substring(0, line.indexOf(' ')));
                    height = Integer.parseInt((line.substring(line.indexOf(' ')+1)));
                    maze = new char[height][width];
                    break;
                default:
                    int counter = 0;
                    for (int i = 0; i < line.length(); i++){
                        if(line.charAt(i) != ' '){
                            maze[heightCounter][counter] = line.charAt(i);
                            counter++;
                        }
                    }
                    heightCounter++;
                    break;
                }
                count++;
            }
        }
        catch(FileNotFoundException fnfe) {
            System.out.println("The file : " + f.getName() + " does not exist" );
            fnfe.printStackTrace();         
        }
        catch(IOException ioe) {
            ioe.printStackTrace();
        }
        catch(ArrayIndexOutOfBoundsException aioob){
            aioob.printStackTrace();
        }
    }


    /**
     * Formats the maze
     * Replaces 1s with '#' and 0s with ' '
     * Also sets start and end values 'S' and 'E'
     */
    private void formatMaze() {

        for (int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {

                if(maze[i][j] == '1') {
                    maze[i][j] = '#';
                }

                if(maze[i][j] == '0') {
                    maze[i][j] = ' ';
                }
            }  
        }       
    }


    /**
     * Finds the path to the exit by marking each visited point and
     * recursively calling the method with new coordinates until the exit
     * is reached
     * @param i     - x coordinate
     * @param j     - y coordinate
     * @return      - true when maze is solved
     */
    private boolean solve(int i, int j) { 

        if (maze[i][j] == '0') {
            return false;
        }

        if (maze[i][j] == maze[13][9]) {
            return true;
        }

        //South
        if ((solve(i + 1, j)) == true) {
            return true;
        }
        //West
        if ((solve(i, j - 1)) == true) {
            return true;
        }
        //East
        if ((solve(i , j + 1)) == true) {
            return true;
        }
        //North
        if ((solve(i - 1 , j)) == true) {
            return true;
        }       

        maze[i][j] = ' ';
        return false;
    }


    /**
     Prints the solved maze path
     
    private void printMaze() {

        maze[startX][startY] = 'S';
        for (int i = 0; i < maze.length; i++) {
            System.out.println(maze[i]);
        }
    }
    */
}