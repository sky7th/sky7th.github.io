---
layout: post
title:  "[C++] static_cast, 업 캐스팅, 다운 캐스팅"
subtitle:   "ㅠㅡㅜ"
categories: tip
tags: c++
---

### static_cast 의 장점 (C 스타일 캐스팅과 비교)

1. 컴파일러의 오류 체크  
   
   * 기계어로 번역 전, 컴파일러는 캐스트 상황 안전 확인
   * c 언어의 경우 컴파일 단에서 캐스팅 신경 안 씀
 
2. 직관적 확인 -> 4가지 형태  
   * static_cast
   * dynamic_cast
   * const_cast
   * reinterpret_cast
3. 엄격함  
   * 포인터 형 변환 X

<br>

업 캐스팅, 다운 캐스팅
-----

> is a 관계 성립 시 캐스팅 허용 (묵시적, 정적)  
> 상속 관계 성립 시 캐스팅 허용 (정적) 
> ```cpp
> Child* chi = new Child;
> Parent* par;
> par = chi;
> ```  
>자식이 부모의 얼굴은 닮을 수 있으나 (업 캐스팅) 
>
> ```cpp
> Parent* par = new Parent;
> Child* chi;
> chi = par;
> ```  
>부모가 자식의 얼굴을 닮는다 ?? (다운 캐스팅)  
>없던 값을 참조 -> 위험
>
<br>
