# 🔁 Intermitencia Alterna con Botón

Este proyecto consiste en un circuito donde **dos LEDs parpadean alternadamente** al presionar un botón. El propósito es demostrar el uso de entradas digitales (el botón) y salidas digitales (los LEDs) con Arduino, así como el uso de la función `delay()` para temporizar eventos.

## ⚙️ Componentes

- Arduino Uno
- 2 LEDs
- 3 resistencias
- 1 botón (push button)
- Protoboard y cables

## 🧩 Esquema del circuito

![Esquema del circuito en Fritzing](led%20parpadeante%20con%20boton.jpg)

### Descripción de conexiones:

- **LED 1 (LED_BUILTIN)**: conectado internamente al pin 13.
- **LED 2**: ánodo conectado al pin digital 12 mediante una resistencia de 220Ω, cátodo a GND.
- **Botón**: un extremo a 5V, el otro a pin digital 2 y también a GND con una resistencia

## 💻 Código Arduino

```cpp
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(2)) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100); 
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(12, LOW);
  }
}
