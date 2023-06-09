**[yes 명령어 구현]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/6177a1e3-9daa-4790-8384-7aec09f4cf2c)

![image](https://github.com/qortpdms2/SysP/assets/128915671/51b6ec90-f582-4920-b28d-58add741cb27)

1. yes [string]을 입력하면 해당 string이 ctrlc^c를 입력할 때까지 무한 출력한다.
2. yes만 입력하면 y만 무한 출력된다.


**[rev 명령어 구현]**1점

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

**[pwd 명령어 구현]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/11c4742b-5a74-4d31-b8c3-a9d36be02b82)
1. pwd는  현재 작업 디렉토리의 경로를 출력하는 명령어이다.

<코드설명>
path는 현재 작업 디렉토리 경로를 저장하는 문자열 배열이다.
getcwd() 시스템 호출 함수를 통해 현재 작업 디렉토리 경로를 path 배열에 저장한다. 

**[clear 명령어 구현]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/2f0c43dc-3e4e-450c-ab4f-658451e8c77c)
1. clear 명령어는 터미널 환경을 지우고 처음으로 돌아가는 명령어이다.

<코드설명>
system 함수는 인자로 전달된 명령어를 실행하는 역할을 함.

**[echo 명령어 구현]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/38612c87-3be3-46f1-abfe-17afe24fcc67)
1. echo 명령어는 주어진 인자를 터미널에 출력하는 명령어이다.

<코드설명>
argv[0]은 명령어 이름이기에 argv[1]부터 출력한다.

**[date 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/109ec2ad-dd93-4b48-9f4f-16f352ae95b5)
1. date 명령어는 현재 날짜와 명령어를 출력하는 명령어이다.

<코드설명>
<time.h> 헤더 파일을 사용해야 한다.
time_t 타입의 currentTime에 현재 시간을 저장하고, struct tm 타입의 localTime에 시간 정보 저장, 시간 정보를 문자열로 저장하기 위해 timeString을 선언한다.

currentTime에 time함수를 호출하여 현재 시간을 저장.
localTime에는 현재 시간을 지역 시간 정보로 변환하여 저장.
strftime함수를 호출하여 문자열로 변환하여 timeString에 저장하여 출력하면 끝.

**[cat 명령어]**7점

![image](https://github.com/qortpdms2/SysP/assets/128915671/954ae75b-16d9-4306-a472-b3d7ef0c44f3)
1. cat 명령어는 파일의 내용을 터미널에 출력하는 명령어
2. (-n, -b, -E, -T, -s, -v) 6가지 옵션 
<코드설명>
명령어 및 파일이름도 입력 받아야 하므로 argc는 2개 이상이어야 해서 조건문을 걸었음.

파일을 읽기모드로 열어 file 변수에 저장하는데, 파일이 안 열리는 경우 오류 메시지를 보낸다.

파일에서 문자를 읽어오고 putchar()로 문자를 파일의 끝까지 출력한다.

[코드 설명]

**[basename 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/f27ee17a-be2a-4bcf-a609-232daea4f893)
1. 파일 경로에서 파일 이름만 추출하는 명령어

<코드 설명>
basename함수는 파일 경로 argv[1]를 인자로 받아서 파일 이름을 추출하여 반환하는 함수이다.
strrchr함수로 파일경로에서 마지막 /의 위치를 찾아 lastSlash에 저장하는데, 만약 lastSlash가 nulll인 경우엔 파일 이름이 전체 경로이므로 파일 경로를 그대로 반환하고, 그렇지 않은 경우 / 다음 문자열을 strdup()로 복제하여 반환한다.



**[false 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/d34839e1-ed1d-4f6c-b915-ce0ad6f0746a)
1. 항상 실패하는 명령어

<코드 설명>
단순하게 1을 반환하는 프로그램을 작성함.

**[true 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/ae32cf16-2f9d-4bee-b2f5-420c83c283e9)
1. 항상 성공하는 명령어

<코드 설명>
단순하게 0을 반환하게 작성하면 됨.

**[head 명령어]**4점

![image](https://github.com/qortpdms2/SysP/assets/128915671/24a70abb-c230-4a4d-bb2d-10855a10168c)
1. 파일의 처음 일부를 터미널에 출력하는 명령어
2. (-n, -c, -q) 3가지 옵션
<코드 설명>
head()는 파일과 출력할 line의 개수를 인자로 전달한다.
lineCount는 numLines까지 증가하는 변수이고, buffer 변수는 출력할 한 행의 문자열을 담는 배열이다.buffer을 출력한다.

[기능 설명 넣어야함]

**[env 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/510230f8-6eea-4876-94c4-75d9dad59078)

![image](https://github.com/qortpdms2/SysP/assets/128915671/10a3b25d-9946-4c70-a039-dd74e64a83c6)
1. env 명령어는 시스템 환경 변수를 터미널에 출력하는 명령어

<코드 설명>
environ은 stdlib.h에 정의된 전역 변수이고, 시스템 환경 변수에 대한 포인터 배열을 가리킴. extern으로 외부에서 선언된 전역 변수임을 가리킨다. 그래서 stdlib.h 또한 include 한다.

env는 environ이 값을 가리키는 포인터 변수이고, env로 환경 변수에 대한 포인터 배열을 순회함.

env 포인터가 null이 아닐 때까지 반복하고 환경 변수 값을 출력한다.
다음 환경 변수로 이동하기 위해 env 포인터를 증가시킨다.

**[mv 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/7c437573-a65e-4e4e-b252-b3e049847d9d)
1. 디랙토리의 이름을 변경하거나 이동하는 기능을 제공하는 명령어

<코드설명>
rename()는 첫 번째 인수는 이동할 파일의 이름을 받고, 두 번째 인수는 이동 대상 파일의 이름을 받는다

**[whoami 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/4286d730-463e-4976-a614-63fd71dadd6d)
1. 현재 실행 중인 사용자의 이름을 출력하는 명령어

<코드설명>
uid에는 getuid() 함수로 현재 실행 중인 프로세스의 사용자 ID를 가져온다. uid의 타입은 uid_t 타입으로 <sys/types.h>에 있습니다.

pw은 getpwuid() 함수로 사용자 ID에 해당하는 사용자 정보를 얻어옴. 반환 값은 pw 포인터 에 저장함.
pw 구조체의 pw_name을 출력한다.

**[rm 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/322f013b-f2a3-4b67-94f3-69efb42a2e2d)
1. 파일을 삭제하는 명령어

<코드 설명>
인자로 받은 파일을 remove()함수로 삭제한다.

**[hostname 명령어]**1점

![image](https://github.com/qortpdms2/SysP/assets/128915671/4dc96c34-a749-4375-ae5d-598883e5f67c)

1. 현재 시스템의 호스트 이름을  출력하는 명령어

<코드설명>
unistd.h에 들어있는 gethostname()으로 현재 호스트 네임을 쉽게 출력할 수 있다.


**[nl 명령어]**5점

![image](https://github.com/qortpdms2/SysP/assets/128915671/48124718-82b1-4e5e-813a-0bea710df5bf)

1. 텍스트 파일의 내용에 줄 번호를 추가하여 출력하는 명령어
2. w,s,v,i 옵션 4개 구현


![image](https://github.com/qortpdms2/SysP/assets/128915671/d466f94d-53b5-4b9c-ad52-dc27696d21ac)

코드 설명 넣어야 힘 ---

