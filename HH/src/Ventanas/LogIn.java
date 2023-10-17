package Ventanas;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.FlowLayout;
import java.awt.Color;
import java.awt.Window.Type;
import java.awt.Dialog.ModalExclusionType;
import java.awt.Font;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;
import java.awt.GridBagLayout;
import java.awt.GridBagConstraints;
import java.awt.Insets;
import javax.swing.BoxLayout;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import javax.swing.ImageIcon;

public class LogIn extends JFrame {

	private static final long serialVersionUID = 1L;
	private JPanel PanelPrincipal;
	private JTextField Nombre;
	private JPasswordField Contraseña;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LogIn frame = new LogIn();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public LogIn() {
		setResizable(false);
		setTitle("Horse House: Log In");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 597, 337);
		PanelPrincipal = new JPanel();
		PanelPrincipal.setBackground(new Color(128, 128, 128));
		PanelPrincipal.setBorder(new EmptyBorder(5, 5, 5, 5));

		setContentPane(PanelPrincipal);
		PanelPrincipal.setLayout(null);
		
		JLabel Usulu = new JLabel("Usuario");
		Usulu.setHorizontalAlignment(SwingConstants.CENTER);
		Usulu.setBounds(10, 22, 345, 34);
		Usulu.setVerticalAlignment(SwingConstants.BOTTOM);
		Usulu.setBackground(Color.WHITE);
		Usulu.setForeground(Color.WHITE);
		Usulu.setFont(new Font("MS Reference Sans Serif", Font.PLAIN, 27));
		PanelPrincipal.add(Usulu);
		
		Nombre = new JTextField();
		Nombre.setForeground(Color.BLACK);
		Nombre.setFont(new Font("Tahoma", Font.PLAIN, 19));
		Nombre.setText("Ingrese usuario...");
		Nombre.setBounds(40, 66, 305, 44);
		PanelPrincipal.add(Nombre);
		Nombre.setColumns(10);
		
		JLabel Contra = new JLabel("Contrase\u00F1a");
		Contra.setVerticalAlignment(SwingConstants.BOTTOM);
		Contra.setHorizontalAlignment(SwingConstants.CENTER);
		Contra.setForeground(Color.WHITE);
		Contra.setFont(new Font("MS Reference Sans Serif", Font.PLAIN, 27));
		Contra.setBackground(Color.WHITE);
		Contra.setBounds(10, 135, 345, 34);
		PanelPrincipal.add(Contra);
		
		Contraseña = new JPasswordField("Ingrese Contraseña");
		Contraseña.setEchoChar('*');
		Contraseña.setBounds(40, 179, 305, 41);
		PanelPrincipal.add(Contraseña);
		
		JButton btnNewButton = new JButton("Log In");
		btnNewButton.setSelectedIcon(new ImageIcon("C:\\Users\\Administrator\\eclipse-workspace\\HH\\rscr\\ButtonLogSele.png"));
		btnNewButton.setIcon(new ImageIcon("C:\\Users\\Administrator\\eclipse-workspace\\HH\\rscr\\ButtonLog.png"));
		btnNewButton.setBounds(108, 243, 123, 34);
		PanelPrincipal.add(btnNewButton);
	}
}
