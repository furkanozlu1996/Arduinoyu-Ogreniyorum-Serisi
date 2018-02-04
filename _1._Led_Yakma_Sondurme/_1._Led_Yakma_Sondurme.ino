#define Led 3               // 3. iğneye "Led" ismini atadık (Yazılımın bundan sonraki kısımlarında kafamızın karışmaması için "Led" yazacağız)

void setup()
{
  pinMode(OUTPUT, 3);       // 3. iğne çıkış olarak ayarlandı
}

void loop()
{
  digitalWrite(3, HIGH);    // 3. iğneye bağladığımız ledimiz açık konumuna aldık
  delay(100);               // 100ms değerinde gecikme verdik
  digitalWrite(3, LOW);     // 3. iğneye bağladığımız ledimiz kapalı konumuna aldık
  delay(100);               // 100ms değerinde gecikme verdik
}
