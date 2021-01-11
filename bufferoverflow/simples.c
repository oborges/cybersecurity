/* 
    exemplo do aleph1, adaptado para o offset da minha maquina debian
    compilar com -m32 -fno-stack-protector -z execstack -D_FORTIFY_SOURCE=0

    desabilitar kernel.randomize_va_space(ASLR)

*/

void function(int a, int b, int c)
{
    char buffer1[8];
    int *ret;
    ret = buffer1 + 16;
    (*ret) += 10;
}

void main()
{
    int x;
    x = 0;
    function(1,2,3);
    x=1;
    printf("%d\n",x);
}
