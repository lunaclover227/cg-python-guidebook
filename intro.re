= はじめに

この度は「大石泉と学ぶPythonプログラミング」をお手に取っていただきありがとうございます。本書は、プログラミングが大好きなアイドルの女の子・大石泉と、同じ事務所のアイドルである久川颯、夢見りあむの3人と一緒に@<ruby>{Python, パイソン}というプログラミング言語を学んでいく本となっています。詳しくは本編でお話しますが、プログラミングの世界には様々な種類の「言語」があり、Pythonはその中でも特に有名かつ(私個人としては)非常に初学者向けの言語であると思っています。プログラミングが初めての方も、一度挫折してしまった方も、本書を通して少しでもプログラミングを楽しんでいただければ幸いです。

本書では、@<ruby>{Google Colaboratory, グーグルコラボラトリー}、通称@<ruby>{Colab, コラボ}を用いて学習を進めていきます(@<img>{sample_01})。Colabはインターネットの環境とGoogleアカウントさえあれば利用可能なサービスで、煩わしい準備なしにプログラミングを始めることができます。Colabでは、セルと呼ばれる単位でコード(プログラムとして書かれた文字のこと)を書くことができ、入力したコードを実行する→結果を確かめる、というサイクルを簡単に回すことができます。もし間違えても、その場で修正して何度でも実行し直せたり、セルというごく小さな単位でコードを書くので、ミスに気付きやすく間違えた箇所を探しやすいといったメリットもあります。

//image[sample_01][Colabを用いたプログラミングの流れ]{
//}

また、本書は3人のアイドルが会話する形式で進行していきます。@<del>{あくまでデレマスの同人誌なので当たり前といえば当たり前なのですが、}小説を読み進める感覚で学習していただければと思います。途中、下記のようにコードがたびたび登場するので、お手持ちのPCでColabにアクセスし、コードを写して実行していただくのが基本の流れになります。理解がより深まるので、実際に手元で動かしていただくことを強く推奨しますが、PCをお持ちでない方や、外出先で実行できない方でも最後まで読み進めることができるような構成となっております。

//listnum[ohishi_izumi_suki][Pythonのコードのサンプル]{
# 「大石泉すき」と表示するプログラム
print("大石泉すき")
//}

それでは、アイドルたちと楽しくプログラミングについて学んでいきましょう！

//blankline

 * 本書を読み進めるにあたり、PCの利用を推奨します。スマートフォンおよびタブレットでの動作は保証いたしかねます。また、本書の内容を実践するには、インターネットに接続できる環境が必要です。
 * 本書の内容はWindows 11にて動作確認をしております。macOSをお使いの場合、本書内に記載のある「Ctrlキー」は適宜「Commandキー」に読み替えてください。
 * 本書の情報は2025年2月現在のものです。特に本書ではGoogle社のサービスを利用することから、今後画面レイアウト等に大きな変更が生じる場合があります。あらかじめご了承ください。
 * 本書では英語の一部に振り仮名(ルビ)を振っておりますが、読みはあくまで一例となります。
 * 誤字脱字や記述内容の誤りがございましたら、巻末に記載しております連絡先までご連絡ください。また、質問につきましても、本書の範囲を大きく逸脱しないものであれば回答させていただきます。
 * ご意見・ご感想も随時お待ちしております。今後の活動の上での大きな糧になります。
