---
layout: post
title:  "[JavaScript] 정리"
subtitle:   "[JavaScript] 정리"
categories: dev
tags: javascript
---

## var, const, let 차이

### var

> 함수 범위 scope, 변경 가능

### const

> {} 범위 scope, 변경 불가

### let

> {} 범위 scope, 변경 가능

var 보단 const, let 로 좀 더 명확한 코드를 만들기를 권장


### map

```js
customers.map(c => {
  return (
    <Customer
      key={c.id}  // map 함수는 key 값을 가져야 함 !
      name={c.name}
      age={c.age}
    />
  )
})
```
