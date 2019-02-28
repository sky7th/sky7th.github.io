---
layout: post
title:  "TypeScript"
subtitle:   "lllll"
categories: dev
tags: typescript
---

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


#### 재설정

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

    