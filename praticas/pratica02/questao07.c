  #include<stdio.h>

  int main(){  
 float valor_hora_trabalhada = 150.0f;
 int total_horas_trabalhadas = 200;
  
   const float IR = 0.25f;
   const float INSS = 0.11f;

   float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;
   float vlor_ir = salario_bruto * IR;
   float vlor_inss = salario_bruto * INSS;
   float salario_liquido = salario_bruto - vlor_ir + vlor_inss;


   printf("\x1b[32m------------------------------\n");
   printf("        CONTRA CHEQUE         \n");
   printf("------------------------------\x1b[0m\n");
   printf("  Salario bruto........: %8.2f\n", salario_bruto);
   printf("  Valor IR.............: \x1b[31m%8.2f\x1b[0mf\n", vlor_ir);
   printf("  Valor INSS...........: \x1b[31m%8.2f\x1b[0m\n", vlor_inss);
   printf("  Salario liquido......: %8.2f\n", salario_liquido);
  
   return 0;
  }