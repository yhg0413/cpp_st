

# 개발환경 설정 및 디질털아날로그출력



개발환경설정은 강의교재를 볼것

vs코드에서 실행할경우



만들어진 arduino.json 에서 "sketch": 의값을 실행할 파일 경로로 입력해줘야함



pinMode(핀번호, INPUT or OUTPUT)

digitalWrite(핀번호, 1 or 0) : 디지털 입출력 (5v)





라이브러리로 옮기는법



내문서 arduino -> 라이브러리 디렉토리->임의의 폴더(여기에 넣으면 <>로 사용가능)

아두이노의 서드파티 라이브러리가 추가되는곳(인터넷에서 라이브러리 다운받아도 저곳에 추가됌)



시리얼포트에 데이터 읽을때

Serial.available() -> 데이터 수신이 있는지 확인하는 코드 있으면 true

Serial.read() -> 문자하나만 읽음



시리얼포트에 문자 보낼때

명령창 -> send text to Serial -> 보낼 문자



시간 측정 함수

- millis()
  - 현재 시간을 ms로 리턴
  - unsinged long 타입으로 리턴
  - unsinged 양수만 있는 정수로 만ㄷ므

UTC 1970.1.1 0:0:0 에서 시간이 얼마나 지났는가를 나옴 pc는 그럼

아두이노는 저런 내부장치가없음

아두이노에서 말하는 현재시간은 아두이노가 전기를 인가받고부터의 시간

리셋된 시점에서의 부터의 시간이 얼마나 흘렀는가를 리턴함



명령창 -> arduino Library Manager -> simple timer

다운



digitalRead(핀번호) // 지정한 핀 번호의 상태를 불러온다





#### LED 밝기 조절(아날로그 출력)

- 아날로그 출력방식

  - 디지털 출력을 초절해서 동일한 효과를 구현

  - PWM(Pulse Width Modulation) : 펄스 폭 변조

    - 디지털 값 - > 아날로그 값 : 아날로 그 출력

      ![image-20200911151616269](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200911151616269.png)

    - 아날로그 값의 비율 만큼 HIGH의 폭을 가변

    - PWM 주파수 : 500Hz

- 듀티비 , 듀티사이클(Duty rate, Duty cycle)
  - 500Hz -> 2ms 초마다 바뀜
  - anlogWrite() 0 ~ 255, 값 출력
    - analogwrite(255) : 항상 켜짐, 100%
    - analogWrite(127); 50%

- analogWrite()
  - 아날로그 출력 핀의 전압을 설정하는 함수
  - 전압을 0V에서 5V 사이에 원하는 값으로 설정
  - 틸트(~) 표시가 있는 핀을 사용 (6개)
    -  ~3, ~5, ~6, ~9, ~10, ~11
  - analogWrite(핀 번호, 전압)
    - 매개 변수
      - 핀 번호 : 전압을 설정하고자 하는 핀 번호.
      - 전압 : 0~255. 0V는 0, 5는 255 입력
    - 반환값 없음



LCD

![image-20200911170937309](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200911170937309.png)

![image-20200911171641089](C:\Users\mmm62\AppData\Roaming\Typora\typora-user-images\image-20200911171641089.png)

강의교재 확인



LCD -> lcd_ex04 공부할거 많음

dtostrf 이거 중요 실수를 문자열로 바꿔주는 아두이노코드
sprintf 문자열데이터를 char 문자열에 넣을때 사용함


- 피에조 부터
  Active BUzzer // 가지고 있는 부품중 스티커 붙어있는 Buzzer
    회로 내장형
    전원만 인가되면 단일음

  Passive Buzzer // 스티커 없는 부터
    회로 내장하지 않음
    필요한 음역대의 주파(펄스)를 출력
    PWM 이용

  피에조 부터
    - 주파수
      HIGH/LOW 신호의 비율
      신호음의 음 또는 음 높이 결정
      Hz 단위
  -제어 함수
  


  - 풀업 방식 스위치 on off 상태
    풀업 저항
      - 전압 소스와 회로 내에 있는 입력 디폴트 HIGh
      - 버튼/스위치는 입력 핀과 접지(GND) 사이에 배치 - 스위치를 누르면 LOW