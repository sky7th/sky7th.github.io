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

### 프로젝트 진행  

    yarn init
    yarn global add typescript

#### tsconfig.json 파일 생성

TypeScript 한테 어떻게 JavaScript 로 변환하는지 알려주고 몇몇 옵션을 줌

tsconfig.json 세팅 :

```js
{
    "compilerOptions": {
        "module": "commonjs", // node.js 를 평범하게 사용
        "target": "ES2015" // 어떤 버전의 js으로 컴파일 할지 정함
        "sourceMap": true // sourceMap은 원본소스와 변환된 소스를 맵핑해 주는 방법을 제안한 것
    },
    "include": ["index.ts"],
    "exclude": ["node_modules"]
}
```

    tsc

index.ts -> index.js 과 index.js.map 를 만듬

#### pakage.json 스크립트 추가

```js
"script": {
    "start": "node index.js", // node 폴더에 index.js 파일
    "prestart": "tsc" // yarn start 전에 tsc 먼저 시행
}
```

