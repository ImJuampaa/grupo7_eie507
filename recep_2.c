#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

#define MAX_BUFFER_SIZE 32000 // Tamaño máximo del búfer para almacenar datos
#define FILENAME "datos_serial.txt"

int main() {
    int fd;
    struct termios serial;

    // Abrir el puerto serial
    fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);
    if (fd == -1) {
        perror("Error al abrir el puerto serial");
        return 1;
    }

    // Configurar la estructura de opciones del puerto serial
    tcgetattr(fd, &serial);
    cfsetispeed(&serial, B115200); // Velocidad de baudios de 9600 (ajusta según tu configuración)
    cfsetospeed(&serial, B115200);
    serial.c_cflag &= ~PARENB;   // Sin paridad
    serial.c_cflag &= ~CSTOPB;   // 1 bit de parada
    serial.c_cflag &= ~CSIZE;    // Limpiar bits de tamaño de caracteres
    serial.c_cflag |= CS8;       // 8 bits de datos
    tcsetattr(fd, TCSANOW, &serial);
    
    // Variable para almacenar los datos
    char data_buffer[MAX_BUFFER_SIZE];
    int data_count = 0;

    // Leer datos desde el puerto serial y mostrarlos en el terminal
    while (data_count < MAX_BUFFER_SIZE) {
        ssize_t bytes_read = read(fd, data_buffer + data_count, MAX_BUFFER_SIZE - data_count);
        if (bytes_read > 0) {
            // Mostrar los datos en el terminal
            data_buffer[data_count + bytes_read] = '\0';
            //printf("Datos recibidos: %s", data_buffer + data_count);

            data_count += bytes_read;
        }
    }

    // Cerrar el puerto serial
    close(fd);

    // Escribir los datos en un archivo .txt
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error al abrir el archivo de salida");
        return 1;
    }

    fwrite(data_buffer, sizeof(char), data_count, file);

    fclose(file);

    printf("Datos almacenados en %s\n", FILENAME);

    return 0;
}
