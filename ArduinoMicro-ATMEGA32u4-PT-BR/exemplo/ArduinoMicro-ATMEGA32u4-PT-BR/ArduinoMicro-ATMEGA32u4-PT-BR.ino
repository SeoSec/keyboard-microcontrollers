/**
 * Arduino Atmega32u4 como um teclado em PT-BR
 * 
 * Com cedilha e interrogacao ( ? )
 * 
 * Criado por Samuel Pereira de Godoy, 2020
 * 
 *Fonte:
 * http://www.farah.cl/Keyboardery/A-Visual-Comparison-of-Different-National-Layouts/KBD275.pdf
 * https://www.utf8-chartable.de/
 * https://www.ibm.com/support/knowledgecenter/ssw_aix_71/navigation/kybdtech.pdf
 * https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf
 */
#include "Keyboard-PT-BR.h"

void setup() {
  
}

void loop() {
// Para nao gerar bug inicializa com Keyboard.releaseAll();
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.println("\'1234567890-=");
  delay(100);
  Keyboard.println("qwertyuiop´[");
  delay(100);
  Keyboard.println("asdfghjklç~]");
  delay(100);
  // \ usado como escape da outra 
  Keyboard.println("\\zxcvbnm,.;/");
  delay(100);
  Keyboard.println("\"!@#$%¨&*()_+");
  delay(100);
  Keyboard.println("QWERTYUIOP`{");
  delay(100);
  Keyboard.println("ASDFGHJKLÇ^}");
  delay(100);
  Keyboard.println("|ZXCVBNM<>:?");
  
  //As teclas abaixo sao de nivel 3
  //° Grau
  //º Ordinal masculino
  Keyboard.println("¹²³£¢¬/?°ªº°");
  delay(100);
  //Se a tecla nao estiver listada acima, 
  //ela pode gerar problemas ao usar com o Keyboard.print
  //Para gerar qualquer tecla que nao 
  //esta listado acima basta pressionar a tecla primaria com alt right
  //O exemplo abaixo demonstra uma tecla de nivel 3 gerada com alt right
  //ss /§ Section sign 
  /*
#define KEY_LEFT_SHIFT    0x81
#define KEY_LEFT_ALT    0x82
#define KEY_LEFT_GUI    0x83
#define KEY_RIGHT_CTRL    0x84
#define KEY_RIGHT_SHIFT   0x85
#define KEY_RIGHT_ALT   0x86
#define KEY_RIGHT_GUI   0x87
   */
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.print("=");
  Keyboard.release(KEY_RIGHT_ALT);
  //Para gerar uma letra com acentro precisamos usar  normalizando com NFKD   Keyboard.println("´a") 
  //O modelo NFKC (Keyboard.println("á") nao funciona, porque as teclas com acentos nao foram mapeadas
  //Se quiser imprimir somente o acento basta adicionar um espaço Keyboard.println("´ ");
  Keyboard.println("´a");

delay(5000);

}
