## 리눅스 커널 소스

## 환경설정(Configure)

환경설정은 커널이 빌드되는 대상 아키텍쳐의 프로세서, 파워, 버스, 파일형식, 네트워크, 디바이스 드라이브, 보안기능, 라이브러리 등의 각종 환경을 설정하는 것이다. 이 작업의 결과물은 .config 파일로 생성되는데 이 파일은 커널 소스 경로의 가장 상위에 저장된다. 처음에 커널 소스를 압축해제 했을 때는 이 파일이 없기 때문에 환경설정을 통하여 생성해 주어야 한다. 

### 환경설정 방법

- make config -- 명령 프롬프트 대화형
- make defconfig -- 기본 정보로 환경설정
- make menuconfig -- 텍스트 메뉴형
- 리눅스 배포판에 있는 환경설정 파일을 활용하는 방법
- gconfig --GTK 기반의 그래픽 화면에서 환경설정
- xconfig -- QT 기반의 그래픽 화면에서 환경설정
- 
- 