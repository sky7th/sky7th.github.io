---
layout: post
title:  "[TypeScript] 세팅"
subtitle:   "lllll"
categories: dev
tags: typescript
---

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

### 재설정

    yarn add tsc-watch --dev  

package.json

    "scripts": {
    "start": "tsc-watch --onSuccess \" node dist/index.js\" "
    },

tsconfig.ts

    {
    "compilerOptions": {
        "module": "commonjs",
        "target": "ES2015",
        "sourceMap": true,
        "outDir": "dist"
    },
    "include": ["src/**/*"],
    "exclude": ["node_modules"]
    }

