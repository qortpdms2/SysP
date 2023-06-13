![image](https://github.com/qortpdms2/SysP/assets/128915671/6177a1e3-9daa-4790-8384-7aec09f4cf2c)
[yes 명령어 구현]
1. yes [string]을 입력하면 해당 string이 ctrlc^c를 입력할 때까지 무한 출력한다.
2. yes만 입력하면 y만 무한 출력된다.


[rev 명령어 구현]
![image](https://github.com/qortpdms2/SysP/assets/128915671/9f356752-5c69-4583-8189-1b732bb1b297)
1. rev [filename]을 하면 파일의 라인에 있는 문자열을 역순으로 출력한다.

<코드 설명>
먼저 입력받은 인자 개수 argc가 2보다 작으면 명령어만 입력된 것으로 사용자에게
파일을 입력하라고 한다. 

파일이 입력됐다면 
file이라는 변수에 해당 파일을 읽는 모드로 넣는다.
만약 파일이 없으면 파일 여는 걸 실패했다고 알려줌

명령어와 파일이 잘 들어왔으면 reversLine에 file을 담아서 호출
해당 파일을 연다. fgets는 파일을 문자열 단위로 읽게 해주는 함수이다. 
해당 파일을 다 읽을 동안 reversString 함수를 또 호출을 함. 이름 그대로 문자열을 역순으로 출력해주는 함수이다. 

