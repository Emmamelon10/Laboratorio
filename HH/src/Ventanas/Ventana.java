package Ventanas;

import java.awt.Color;

import javax.swing.*;

public class Ventana extends JFrame{
	private JPanel panel;
	Ventana(){
		this.setSize(965,513);
		this.setLocationRelativeTo(null);
		this.setResizable(false);
		this.setLayout(null);
		Panelito();
	}
	
	private void Panelito(){
		panel = new JPanel();
		panel.setBounds(0, 0, 965, 513);
		panel.setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		panel.setBackground(Color.decode("#7F7F7F"));
		this.getContentPane().add(panel);
	}
}
