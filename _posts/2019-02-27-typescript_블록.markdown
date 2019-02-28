---
layout: post
title:  "TypeScript"
subtitle:   "lllll"
categories: dev
tags: typescript
---

## TypeScript 란?
> javascript 의 업그레이드 판  
> javascript 로 컴파일 됨

javascript 는 사용하기 쉽고, 엄격한 규칙도 없고, 원하는 방향으로 수정도 편함

하지만, 큰 프로젝트 진행이나 팀으로 일 할때, 버그를 최소화 하고 싶을 때 위의 장점들은 **단점**이 됨

#### TypeScript 의 장점

- 예측 가능한 언어, 읽기 쉬운 코드

### 왜 TypeScript 일까?

> Typed 언어, 어떤 종류의 변수와 데이터인지 설정해줘야 함

```js
const introduceMyself = (name, age, gender?) => {
    console.log('My name is ${name}, I am ${age}, I am ${gender});
};
introduceMyself(name, age); // gender 에 ? 를 없애면 오류가 생김

export {};  // 이 파일은 모듈임을 알려줌
```

#### name: string, age: number, ...

> 변수 타입을 적어줌

### interface

> 객체 변수(매개 변수) 에 타입을 뭉터기로 정해줌  
> js 로 컴파일 되지 않음

### class

```typescript
class Human {
    public name: string;
    private age: number;
    public gender: string;
    constructor(name: string, age: number, gender: string) {
        this.name = name;
        this.age = age;
        this.gender = gender;
    }
}

const taehwa = new human("TaeHwa", 25, "male"); // 25 에서 오류남
```

### import

    import * as Something from "something-pakage";

### static

> 클래스 안에 static 으로 선언한 함수는 객체 인스턴스를 생성하지 않아도 사용이 가능함

