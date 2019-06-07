using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
         

        private void button1_Click_1(object sender, EventArgs e)
        {
            int result;
            if (Int32.TryParse(textBox1.Text, out result))
            {
                result *= result;
                textBox2.Text = System.Convert.ToString(result);
            }
        }
    }
}
