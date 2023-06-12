
# Pointer

## Pointer and Array

### 

`p = &array[0];` 和 `p=array;` 是一樣的

如下code所示，`p[1]`和`*(p+1)`也是等價的

```
int array[3] = {1, 2, 3};
int *p;

p = array;

printf("%d \n", p[1]);
printf("%d \n", *(p+1));
```


### Function parameter
定義function中的parameter，char str[20]和char* str是同一個意思。
都是把str第一個element的pointer傳進function裡。

```
void Func(char str[20]){

  printf("%c",str[0]);
  ...
}
```
上下兩個定義是等效的
```
void Func(char* str){
  printf("%c",str[0]);
  ...
}
```



# Reference 
[C言語プログラミング入門](https://densan-labs.net/tech/clang/)
