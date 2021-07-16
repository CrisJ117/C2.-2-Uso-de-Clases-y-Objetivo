class persona{
    int main() 
    {
    int nacimiento;
    int actual;
    int edad;

    printf("Ingrese su año de nacimiento: ");
    scanf("%d", &nacimiento);

    printf("Ingrese el año actual: ");
    scanf("%d", &actual);

    edad = actual - nacimiento;
    printf("Usted tiene %d annos de edad\n", edad);

    return 0;
}
};
