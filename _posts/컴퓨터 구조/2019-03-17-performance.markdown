---
layout: post
title:  "[컴퓨터 구조] Performance"
subtitle:   "[컴퓨터 구조] Performance"
categories: study
tags: ca
---

### 컴퓨터 구조 분야의 8가지 아이디어  
1. 무어의 법칙 : 2~3년 사이에 칩에 집적되는 소자의 수가 2배가 된다는 법칙  
2. 설계의 추상화  
3. 자주 생기는 일을 빠르게 처리  
4. 병렬성을 통한 성능 개선  
5. 파이프 라이닝을 통한 개선
6. 예측을 통한 개선
7. 메모리 계층 구조 : 계층에 따라 달라지는 메모리 양 배분 (레지스터, 캐시, 메인)
8. 여유분을 통한 신용도 개선 : 특정 소자의 에러 발생 시 여유분으로 대체  


### Memory Wall  
-  프로세서 개발에 비해 상대적으로 느린 메모리 개발 속도에 의해 처리에 병목현상이 발생하여 생기는 문제

### 성능  
- Respond Time : 작업의 종료까지 걸리는 시간  
* Throughput : 단위 시간당 처리하는 작업의 개수 (사실상 고려하기 힘듬)

### 성능과 실행 시간  
* 성능 = 1 / 실행시간  
- 성능x / 성능y = 실행시간y / 실행시간x 

### 시간 개념  
- Wall-clock time = Response time = Elasped time : 전체 작업 시간 (디스크 접근, 메모리 접근, 입출력 활동 등 전부 포함)  
+ CPU execution time = CPU time : 작업을 위해 CPU가 사용하는 시간 (IO와 다른 프로그램들은 고려하지 않음, CPU 성능을 결정)  
- CPU Time = 해당 응용 프로그램 cpu time + 시스템 cpu time  

### 성능의 정의  
- 시스템 성능 : 전체 작업 시간에 근거
+ CPU 성능 : CPU Time에 근거 (이를 중점적으로 봄)  
- clock cycle time(CCT) : 클락 1회가 걸리는 시간  
+ clock rate : 1초에 진행된 클락의 횟수 (3GHz)  (이 둘은 역수 관계)  
- CPU Time = CPU clock cycle 수 * CCT = CPU clock cycle 수 / clock rate  

### Instruction Performance  
- IC (Instruction Count for program) : 해당 프로그램의 명령문 숫자  
+ CPI (Average Cycles Per Instruction) : 명령문 당 평균 clock cycle 수
Clock cycle 수 = IC * CPI  

#### CPU TIME = IC * CPI / clock rate

### 성능에 영향을 미치는 요소들  
1. 알고리즘 (IC, possibly CPI)
2. 프로그래밍 언어 (IC, CPI)
3. 컴파일러 (IC, CPI)
4. Instruction Architecture (IC, CPI, CCT)

