## make 編譯檔案命令
代碼中看到的部分[tag:Dependency]

```make
resule: main.exe
    ./main.exe
```

舉這個例子來說 [tag:cmd]
tag = main.exe
Dependency = main.o fun.o




### tag
resule 只是一個標籤名稱，可以把它當作是函式名稱的類比意思。

可以在命令列呼叫

```sh
make resule
```

如果make後面沒有帶命令，也就是單存輸入4個字那麼會自動抓最頂部的tag來執行




### Dependency
這裡的內容可以是tag也可以是檔案名稱，如果是tag那麼就會等到這個tag執行完畢在執行，如果是檔案名稱就會順便一起檢查檔案有效性。

有效性的有效指的是這個檔案存在且沒有被更動，那麼就不執行裡面的命令；反之則執行底下令命。



### tag名稱為檔案名稱時
當tag名稱為檔案名稱時這個tag還是有效的，只是她會多檢查檔案，可以這樣想像

```make
main.exe: main.o fun.o

mainTag: main.o fun.o main.exe
```

兩個是同樣的意思，前者在Dependency的部分，可以省略檔案名稱，這樣應該比較好理解。(要補上比較完整也是可以的)

