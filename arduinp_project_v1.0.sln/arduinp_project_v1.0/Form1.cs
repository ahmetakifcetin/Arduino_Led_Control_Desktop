using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace arduinp_project_v1._0
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            serialPort1.PortName = "COM7";
            serialPort1.BaudRate = 9600;
            serialPort1.Open();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("1");
            label2.Text = "Mavi";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("3");
            label2.Text = "Yeşil";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Write("2");
            label2.Text = "Kırmızı";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            serialPort1.Write("0");
            label2.Text = "Burası Çok Karanlık";
        }
    }
}
