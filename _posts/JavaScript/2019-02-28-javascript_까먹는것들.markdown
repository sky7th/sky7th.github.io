---
layout: post
title:  "[JavaScript] 까먹는 것들"
subtitle:   "[JavaScript] 까먹는 것들"
categories: dev
tags: javascript
---

#### 날짜  
```js
new Date().getTime() // 날짜
new Date().toLocaleTimeString() // 시간
getSeconds, setSeconds, ......
```
#### 반올림
```js
Math.round(new Date.getTime() / 1000);
```