package proje2.pkg03;

//@author arda_talu

import java.sql.*;
import javax.swing.*;
import javax.swing.JOptionPane;
import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.JFrame;


public class Proje203 extends JFrame {
    
    public static void main(String[] args) {
        
        Giris g = new Giris();
        g.setVisible(true);
        
}
    
    public static Connection getConnection(){
        Connection conn = null;
        
        try{
            conn = DriverManager.getConnection("jdbc:sqlite:Netflix.db");
            
            System.out.println("Veritabanına bağlandınız!\n");
            String sql = "select * from program";
            try(
            Statement st = conn. createStatement();
            ResultSet rs = st.executeQuery(sql)){
//            while(rs.next()){
//                System.out.println(rs.getString("programadi")+"  "+rs.getString("programtipi")+"   "+ rs.getString("programturu"));
//            } 
            }catch(Exception e){
                System.out.println(e.getMessage());
            } 
        }catch(SQLException ex){
            System.out.println(ex.getMessage());
        }
        return conn;
    }
    
}
