# my_atcoder_probles

## こちらは atcoder_problems で解いた問題を後で見返すためのリポジトリです。

## 実行手順 go

1. atcoder-cli を使って挑戦するコンテスト問題を追加する

```
acc new abc[contest number]
```

https://github.com/Tatamo/atcoder-cli

1. cd abc[コンテスト番号]/[問題番号]
2. go run main.go

## 実行方法 c++

入力値を代入するためのテキストファイルを用意する

```
.
├── in.txt
├── main.cpp
├── out
└── result.txt
```

```
g++ main.cpp -o main
```

```
cat in.txt | ./main > result.txt
```
