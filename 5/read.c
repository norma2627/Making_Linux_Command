#include<unistd.h>  // APIを使用するためにヘッダファイルをインクルードする

ssize_t read(int fd, void *buf, size_t bufsize);

/* memo

sys/types.hで定義されているデータ型
    ssize_t: 戻り値の型(符号付き整数型)
    size_t: 引数の型(符号なし整数型)

独自の型を定義する理由:
    OSや使用しているマシン(CPU)、カーネルのバージョンなどの違いに関係なくソースコードを使用するため。


read()
    ファイルディスクプリタfd番のストリームからバイト列を読み込むシステムコール
    最大bufsizeバイト読み、bufに格納する
    bufのサイズをそのままbufsizeに指定するのが一般的
    読み込みが問題なく完了したと時は、読み込んだバイト数を返す
    ファイル終端に達した時は0を、エラーが起きた時は-1を返す
    read()ではbufsizeバイトより少ないバイト数しか読まないケースも頻繁に発生する→必ず戻り値をチェックする

C言語の文字列(charの配列)
    任意のバイト列が格納できる
    人間が読める文字列を格納する場合は、'\0'で終端するのが慣習
    
*/