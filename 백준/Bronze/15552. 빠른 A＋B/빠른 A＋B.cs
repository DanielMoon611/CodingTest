using System;
using System.Text;
using System.IO;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            using (StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput())))
            using (StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput())))
            {
                StringBuilder sb = new StringBuilder();
                int T = int.Parse(sr.ReadLine());
                
                for (int i = 0; i < T; ++i) {
                    string[] str = sr.ReadLine().Split();
                    int A = int.Parse(str[0]);
                    int B = int.Parse(str[1]);
                    sb.Append(A + B).Append('\n');
                }

                sw.Write(sb.ToString());
                sw.Flush();
            }
        }
    }
}