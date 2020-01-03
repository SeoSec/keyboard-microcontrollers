/**
 * Arduino Digispark como um teclado em PT-BR
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
#include "DigiKeyboard.h"

void setup() {

}

void loop() {
// Para nao gerar bug inicializa com DigiKeyboard.sendKeyStroke(0); 
DigiKeyboard.sendKeyStroke(0);
  delay(3000);
  DigiKeyboard.println("\'1234567890-=");
  delay(10);
  DigiKeyboard.println("qwertyuiop´[");
  delay(10);
  DigiKeyboard.println("asdfghjklç~]");
  delay(10);
  // \ usado como escape da outra 
  DigiKeyboard.println("\\zxcvbnm,.;/");
  delay(10);
  DigiKeyboard.println("\"!@#$%¨&*()_+");
  delay(10);
  DigiKeyboard.println("QWERTYUIOP`{");
  delay(10);
  DigiKeyboard.println("ASDFGHJKLÇ^}");
  delay(10);
  DigiKeyboard.println("|ZXCVBNM<>:?");
  
  //As teclas abaixo sao de nivel 3
  //° Grau
  //º Ordinal masculino
  DigiKeyboard.println("¹²³£¢¬/?°ªº°");
  delay(10);
  //Se a tecla nao estiver listada acima, 
  //ela pode gerar problemas ao usar com o DigiKeyboard.print
  //Para gerar qualquer tecla que nao 
  //esta listado acima basta pressionar a tecla primaria com alt
  //O exemplo abaixo demonstra uma tecla de nivel 3 gerada com alt
  //ss /§ Section sign 
  DigiKeyboard.sendKeyStroke(IGUAL, MOD_ALT_RIGHT);
  //Para gerar uma letra com acentro precisamos usar  normalizando com NFKD   DigiKeyboard.println("´a") 
  //O modelo NFKC (DigiKeyboard.println("á") nao funciona, porque as teclas com acentos nao foram mapeadas
  //Se quiser imprimir somente o acento basta adicionar um espaço DigiKeyboard.println("´ ");
  DigiKeyboard.println("´a");

  DigiKeyboard.delay(5000);
}
