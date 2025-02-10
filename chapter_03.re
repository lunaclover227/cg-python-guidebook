= いろいろな値を扱ってみよう

== 四則演算

=== 足し算

泉「さあ、ここからいよいよ本格的にコードを書いていくよ。さっきはお試しでHello, world!っていう文字列を表示してもらったけど、書いたものがそのまま出てくるだけだったよね。次は数の計算をやってみよう！」

颯「おおーっ、一気にプログラミングって感じしてきた！」

泉「@<chap>{chapter_01}で簡単なコードの例として見せた、このコードは覚えてるかな？(@<list>{1_add_1})」

//listnum[1_add_1][@<code>{1 + 1}を計算するコード@<fn>{list_num}]{
1 + 1
//}

//footnote[list_num][初めてこのコードを紹介したときには紛らわしいので省略していたのですが、先頭の「1:」は行番号を表します(つまり1行目という意味です)。以降はこのように、1行のコードであっても行番号を付与します。]

りあむ「あー、そういえば。でも、@<chap>{chapter_02}でもちょろっと出てきてたよね」

泉「これは見た通りのコードだから少しだけ先取りしちゃった。もちろん手元のColabで実行できちゃうから、さっそくセルに入力してみよう。……と言いたいところだけど、@<chap>{chapter_02}からずっと同じノートブックを使ってたから、心機一転新しいノートブックを作成してみよう！@<chap>{chapter_01}でも一度ノートブックは新規作成しているけど、方法は覚えてるかな？左上の『ファイル』から、『ドライブの新しいノートブック』をクリックするんだったね」

颯「泉ちゃん！ノートブックの名前も変えちゃって大丈夫？」

泉「もちろん！今から四則演算(加減乗除)@<fn>{four_arith_01}を順番に見ていくから、そのまま日本語で四則演算という名前にするのがわかりやすいかな@<fn>{four_arith_02}。復習になるけど、拡張子の『.ipynb』は削除しないようにね。もし四則演算という名前をつけたいなら、ノートブック名は『四則演算.ipynb』になるからね(@<img>{name_four_arith})」

//footnote[four_arith_01][足し算、引き算、掛け算、割り算の総称です。]
//footnote[four_arith_02][英語名にするならfour_arithmetic_operationsでしょうか。分かりづらい上に長いのであまりおすすめできないかも……。four_arithのように省略するのも一つの手です。]

//image[name_four_arith][ノートブック名を四則演算.ipynbに変更する]{
//}

泉「ノートブックが作成できたらコードセルを挿入して、@<code>{1 + 1}と入力してみよう。プラスの記号『@<code>{+}』は、Shiftキーを押しながら『れ』って書かれてあるキーを押すと入力できるよ。半角モードにするのを忘れないようにね」

颯「泉ちゃん、質問！『@<code>{+}』の前後にあるスペース、これって必要？@<code>{1 + 1}じゃなくて@<code>{1+1}って詰めて書いてもいいの？」

泉「どっちでも大丈夫だよ。Pythonでは、行頭でない場所に書かれたスペースは基本的に見栄えを整えるためのもので、書いても書かなくても同じように処理されるんだ@<fn>{head_space}@<fn>{space_in_str}。ただし、普通は読みやすさの観点から、こういった足し算のときは前後に1つずつスペースを入れることが推奨されているよ@<fn>{pep8_spece_1}」

//footnote[head_space][Pythonではインデントが意味を持つため、行頭は決まった数だけスペースを書く必要があります(@<chap>{chapter_01}参照)。]
//footnote[space_in_str][ただし、文字列の場合は話が変わってきます。文字列はただの文字なので、スペースは書いた数だけスペースとして扱われます(例えばたびたび登場している"Hello, world!"を表示したいとき、Helloとworldの間に入れたスペースが勝手に無視されると困りますよね)。]
//footnote[pep8_spece_1][後述するPEP 8では、より正確にはこれよりさらに@<del>{やりすぎな}細かい推奨事項が示されていますが、個人的にはスペースは入れておいて損はないだろうという認識です。]

りあむ「じゃあ、普通じゃないぼくはスペースを10個入れる！……とかやっても動いちゃったりする？流石にそんなことないか！」

泉「うん、動くね」

りあむ「やっぱりー！これさ、何個入れても動くんだったら、人によっていくつスペースを入れるかって変わっちゃわない？他の人と一緒にコーディングするとき喧嘩になったりしないの？ぼくだったらする自信ある！」

泉「りあむさん、いい疑問だね。コンピュータがコードを解釈するための厳密なルールである@<kw>{文法}と違って、体裁を整えるために決められたルールのことを@<kw>{コーディング規約}というんだけど、Pythonには@<kw>{PEP 8}@<fn>{pep8_ruby}@<fn>{pep_name}という公式のコーディング規約があるんだ。世界中の多くの人がこのPEP 8にしたがってコーディングしているから、それに合わせて書くのが無難かな@<fn>{pep8_spece_2}」

//footnote[pep8_ruby][ペップエイトなどと読みます。]
//footnote[pep_name][@<kw>{PEP, Python Enhancement Proposal}はPythonへの機能追加や改善といった提案を行う際に用いられる文書です。PEP 8はあくまでそのうちの一つにすぎず、他にも数千ものPEPが公開されています。例えばPEP 20 "The Zen of Python"にはプログラマーが持つべき心構えが記されています(Zenは日本の「禅」の心のことです)。]
//footnote[pep8_spece_2][@<code>{1 + 1}とだけ書く場合、PEP 8で示されているスペースの数は「前後に1つずつ」なので、@<code>{1+1}(スペースなし)や@<code>{1　+　1}(スペース2つ)と書かれたコードを読むとPythonに慣れた人は違和感を覚えます。]

#@# 半角スペースを2つ並べる方法がわからなかったので全角スペースで代用(エスケープではダメだった)

颯「じゃあ、そのPEP 8っていうのもしっかり覚えて、一貫したコードを書かなきゃダメなんだね」

泉「いや、PEP 8では『一貫性にこだわりすぎるのは、狭い心の現れである』とも言ってるんだ。だから無理してPEP 8にしたがう必要はないよ」

りあむ「どっちやねん！！！」

泉「PEP 8で示しているのは、@<ttb>{プロジェクト内で}一貫性を保つことが重要ということ。つまり、@<code>{1 + 1}(スペース1つ)と書いたすぐ下の行で@<code>{2+3}(スペースなし)みたいな書き方をするな、ってことだね。『PEP 8にしたがったせいで逆に読みにくくなった』みたいな正当な理由があれば無視してよいとPEP 8は言ってるんだ。現状PEP 8が有名になりすぎてみんながしたがっているから私も合わせるけど、2人は書き方が一貫していれば好きなように書いて大丈夫だよ」

颯「はーはまだ見栄えとかよくわかんないし、泉ちゃんのを真似しよっかな！」

りあむ「ぼくも、何が読みやすくて何が読みづらいかとかわかんないから2人に合わせよ！これなら『なんだその書き方は』って炎上しなそうだし！」

泉「じゃあ、だいぶ話が脱線しちゃったけど、@<code>{1 + 1}と入力できたら▶を押すかCtrl + Enterで実行してみよう。何が表示されたかな？」

颯「もちろん、2だよねっ！(@<img>{1_add_1})」

//image[1_add_1][@<code>{1 + 1}の実行結果][scale=0.8]{
//}

りあむ「おお……正直これくらいなら暗算できちゃうし、スマホの電卓でもパパッと計算できるけど、こうしてコードを書いてみるとなんか感慨深いな……」

泉「今見てもらった通り、数字と数字の間に『@<code>{+}』を書くと足し算ができるんだ。まあ、そのまんまだよね」

颯「ということは当然、引き算や掛け算、割り算もできるんだよね！」

泉「もちろん。順番に見ていこう！」

=== 引き算

泉「お次は引き算。……と言ってもさっきとやることは一緒だよ。今度はこのコードを入力してみよう(@<list>{5_sub_2})。マイナスの記号『@<code>{-}』は、半角の状態でShiftキーを@<ttb>{押さずに}『ほ』って書かれてあるキーを押すと入力できるよ」

//listnum[5_sub_2][@<code>{5 - 2}を計算するコード]{
5 - 2
//}

りあむ「質問！これはどこに書けばいいの？さっき書いた@<code>{1 + 1}、もう消していい？」

泉「うん。今はまだお試しだから、使わないなと思ったら消しても大丈夫。もちろん新しいセルに入力してもいいし、さっきの@<code>{1 + 1}の続きに書いてもいいよ。ただし、@<chap>{chapter_02}で説明したように、@<code>{print}を使わずに複数行コードを書いた場合、最後の1つしか出力されないからそこは注意してね。@<code>{1 + 1}の前に@<code>{5 - 2}って書くと、@<code>{1 + 1}の答えが出ちゃうよ」

颯「出たっ！5 - 2だから、答えは3！(@<img>{5_sub_2})」

//image[5_sub_2][@<code>{5 - 2}の実行結果][scale=0.8]{
//}

=== 掛け算

泉「ここまでは簡単に予想できたと思うけど、次はちょっと難しいよ。足し算や引き算では数学で馴染み深い『@<code>{+}』や『@<code>{-}』を使ったけど、掛け算ではどの記号を使うでしょう？」

りあむ「えっ、普通に『@<code>{×}』じゃないの？」

泉「そうかな？じゃあ、その記号はキーボードでどうやって入力すればいいと思う？キーの中から探してみよう」

颯「……もしかして、どこにもない？」

泉「そう。『@<code>{×}』はコード中で(原則)使わない全角文字。全角モードで『かける』等入力してから変換すると出てくる記号なの。そこで『@<code>{×}』の代わりにある半角記号を使ってるんだけど、それがShiftキーを押しながら『け』と書かれたキーを同時に押して入力できるアスタリスク『@<code>{*}』なんだ」

りあむ「アスタリスクって、あのみくちゃんと李衣菜ちゃんの！@<fn>{asterisk}」

//footnote[asterisk][前川みくと多田李衣菜のユニット「＊(Asterisk)」のこと。]

泉「アスタリスクはラテン語の『小さな星』に由来する言葉で、星をかたどったような形で書かれる記号なんだ。コンピュータの世界ではしばしば掛け算の記号として用いられていて、身近なものだとExcelで掛け算を計算するときに使うのもアスタリスクだよ」

颯「全然知らなかった……。他の文字で代用するってこともあるんだね」

泉「半角記号には限りがあるからね。このあと見ていく割り算も何となく察しがついてると思うけど、その前に掛け算を試してみよう(@<list>{3_mul_7})」

//listnum[3_mul_7][@<code>{3 * 7}を計算するコード]{
3 * 7
//}

りあむ「まあ、さんしちにじゅういち、だよね(@<img>{3_mul_7})。全然難しくないな！……あれ、これフラグ立っちゃった？」

//image[3_mul_7][@<code>{3 * 7}の実行結果][scale=0.8]{
//}

=== 割り算

泉「足し算、引き算、掛け算と来たら最後はもちろん割り算だよね。割り算の記号『@<code>{÷}』も『@<code>{×}』同様全角文字だから、代わりにスラッシュ『@<code>{/}』で割り算を行うよ。半角の状態で、Shiftキーを@<ttb>{押さずに}『め』を押すと入力できる記号だね」

りあむ「アスタリスクはなんとなく『@<code>{×}』っぽさがあったけど、スラッシュはあんまり『@<code>{÷}』っぽくないな？」

泉「実は、スラッシュの歴史は『@<code>{÷}』よりも長いんだ。例えば、@<code>{10 ÷ 2}という計算を考えてみよう。『@<code>{÷}』の代わりにスラッシュを使うと@<code>{10 / 2}となるね。ここまでは大丈夫？」

颯「うん、文字を置き換えただけだもんね」

泉「ここで、割り算を分数で表すことができることに着目すると、@<code>{10 / 2}は@<m>$\frac{10}{2}$っていう分数とみなすこともできるよね。このような『分子 / 分母』の形をかたどったものが『@<code>{÷}』の起源、と言われているんだ」

りあむ「遠目で見ると『・/・』みたいに見える……ってコト！？」

泉「というか、分数を1/2 (2分の1)や2/3 (3分の2)みたいに表現してるの、普段からよく見かけるんじゃないかな。あれと同じだね」

颯「言われてみればそうかも。2分の1って書くとき、『1/2だっけ？2/1だっけ？』って迷っちゃうこともあったけど、分数ってことを考えたら迷わないね。思わぬ収穫かもっ！」

泉「じゃあ、Pythonでも動きを確かめてみよう。以下のコード(@<list>{10_div_2})をセルに入力して、実行してみるとどうなるかな？」

//listnum[10_div_2][@<code>{10 / 2}を計算するコード]{
10 / 2
//}

りあむ「もちろん答えは5だよね。……なんか、@<code>{5}じゃなくて@<code>{5.0}って出ちゃってるけど(@<list>{10_div_2})。まあ、どっちも一緒っしょ！」

//image[10_div_2][@<code>{10 / 2}の実行結果][scale=0.8]{
//}

泉「残念、Pythonでは@<code>{5}@<ttb>{と}@<code>{5.0}@<ttb>{は別の値}なんだ。このことについては後ほど詳しく話すとして、割り算と小数の関係についてはまだ話しておいたほうがいいことがあるから、今から解説するね」

=== コンピュータにおける小数の扱い

泉「割り算と小数について、まずは、この数式を考えてみよう(@<list>{10_div_4})」

//listnum[10_div_4][@<code>{10 / 4}を計算するコード]{
10 / 4
//}

颯「10割る4だから、えーっと。2.5？……あっ、整数じゃない！(@<img>{10_div_4})」

//image[10_div_4][@<code>{10 / 4}の実行結果][scale=0.8]{
//}

泉「その通り。割り算は他の四則演算と違って、整数どうしでの計算であっても答えが整数になるとは限らないんだ」

りあむ「うーん、言われてみればそうだけど。答えが小数っていうだけで、特に難しいことはないんじゃ？」

泉「じゃあ、この数式(@<list>{10_div_3})だとどうかな？実行する前に一旦、手を止めて、どうなるか考えてみて」

//listnum[10_div_3][@<code>{10 / 3}を計算するコード]{
10 / 3
//}

颯「10割る3……10割る3でしょ……これ、もしかして割り切れない？」

泉「そう。@<code>{10 / 3}は3.333……とどこまでも続く数で、このように同じ数が何度も繰り返される小数を特に循環小数と呼ぶんだ。Colabで実行すると何が表示されたかな？」

りあむ「3.333……5！？なんじゃこりゃ！？ずっと続いてるわけじゃないし、5ってどっから出てきたんだよ！！(@<img>{10_div_3})」

//image[10_div_3][@<code>{10 / 3}の実行結果][scale=0.8]{
//}

泉「さらにもう一つ、3.333……のような循環小数が現れるわけでもないのに、予想に反した結果が得られる有名な例も紹介するね(@<list>{0_1_add_0_2})」

//listnum[0_1_add_0_2][@<code>{0.1 + 0.2}を計算するコード]{
0.1 + 0.2
//}

りあむ「うわキモ！全然0.3じゃないし！！(@<img>{0_1_add_0_2})」

//image[0_1_add_0_2][@<code>{0.1 + 0.2}の実行結果][scale=0.8]{
//}

泉「こんなふうに、小数を扱うときは思わぬ結果になる@<fn>{demimal_fraction}ことがよくあるから、知識として知っておいてね。なぜこうなるのかを話してるとそれだけでこの本が終わっちゃうから、もし興味があったら調べてみてね」

//footnote[demimal_fraction][Pythonをはじめ、多くのプログラミング言語では@<code>{Decimal}という十進数(ざっくりいうと0から9までの十種類の数字で表された、我々が日常生活で扱っている数)を扱うことのできるデータがサポートされています。これを用いるとある程度は上記のような問題を回避することができますが、完璧ではありません(例えば@<code>{Decimal}で@<code>{1 / 3 * 3}を計算しても@<code>{1}には戻りません)。また、分数を表す@<code>{Fraction}というデータを利用する方法もありますが、円周率のように分数で表すことのできない値(無理数)は扱えないので注意が必要です。いずれにせよ、小数を含む計算を行いたいときは、そのときの目的に応じて適切な処理を行う必要があるのです。]

=== 0での割り算(ゼロ除算)

泉「割り算関連でもう一つ、0で割ること(ゼロ除算)についても少しだけ触れておくね。じゃあ、問題。10を0で割るとどうなるでしょう？はい、颯ちゃん」

颯「えぇっ！？0で割るとどうなるんだっけ……確か、0ではないんだよね？」

泉「じゃあ、実際に実行して確かめてみよう(@<list>{10_div_0})」

//listnum[10_div_0][@<code>{10 / 0}を計算するコード]{
10 / 0
//}

颯「うわ、なんか出てきた！なにこれ！？(@<img>{10_div_0})」

//image[10_div_0][@<code>{10 / 0}の実行結果]{
//}

泉「このように、ある数を0で割ると、Pythonは@<code>{ZeroDivisionError}というエラーを送出するんだ。divisionは割り算という意味だから、さしずめ『0での割り算エラー』といったところかな」

りあむ「つまり、0で割っちゃダメですよ、って感じ？」

泉「そうだね。数学的には『割っちゃダメ』というより『考えたところで仕方がない(意味のある結果が導けない)ので一般的には定義されない』といったほうがニュアンスが近いかも。一方、プログラミングの世界では言語によって対応の仕方が違ってて、Pythonではこうしてエラーを出して終わり、としているんだ。言語によってはゼロ除算の結果を無限大に相当する値としたり@<fn>{0_div_inf}、@<kw>{NaN, Not a Number}と呼ばれる『わたし数じゃないですよ』っていうことを示す値とするものもあったりするよ」

//footnote[0_div_inf][@<m>{10÷1=10,\ 10÷0.1=100,\ 10÷0.01=1000, ...}のように、割る数を0に近づければ近づけるほど商が大きくなっていくことから、言語仕様としてゼロ除算の結果を無限大(しばしば@<code>{inf}と表される)とするものです。ちなみにそのような言語では、負の数を0で割った場合、負の無限大(@<code>{-inf})となるのが一般的です。]

りあむ「とにかくおっかないということはわかったかも。0で割らないように気をつけよ……」

泉「ちなみに、プログラミング言語そのものではなく、その言語を用いて開発されたアプリケーション側でゼロ除算の結果をどのように表示しているかは開発者に委ねられているよ。例えば電卓のアプリをPythonで開発したとして、0で割っちゃった人に@<code>{ZeroDivisionError}なんてエラーメッセージをそのまま見せるわけにはいかないしね。もし興味があれば、手持ちのスマートフォンで電卓を起動して、何かしらの値を0で割ってみてね。機種(使用している電卓アプリの種類)によって違う結果になるかもしれないよ」

=== 計算の優先順位

泉「あと、忘れちゃいけないのが計算の優先順位。2人とも足し算と掛け算、どちらが優先されるかはわかるよね？」

颯「もっちろん！さすがのはーでもわかるよ！掛け算だよねっ！」

泉「その通り！四則演算のうち掛け算と割り算が足し算、引き算より優先されるんだったよね。こういった数学の基本的なルールはPythonでも同じになっているんだ。例えば以下のコードを実行すると、掛け算である@<code>{5 * 3}が優先的に計算されるから、答えは@<code>{17}になるよ(@<list>{composed_add_and_mul_01})」

//listnum[composed_add_and_mul_01][@<code>{2 + 5 * 3}を計算するコード@<fn>{composed_pep_8}]{
2 + 5 * 3
//}

//footnote[composed_pep_8][前述したPEP 8では優先順位が最も低い記号の両側にスペースを入れる(この例だと@<code>{+}の前後にのみスペースを入れて@<code>{2 + 5*3}とする)ことが提案されていますが、かえって混乱を生じかねないのでここでは無視します。]

りあむ「逆にこのへんのルールが違ったらややこしいことこの上ないもんな……。ということは、@<code>{()}で囲めば優先度が上がるルールも同じ……？」

泉「いいところに気がついたね。もちろんそのルールもあって、@<code>{(2 + 5) * 3}とすれば@<code>{2 + 5}が優先されて答えは@<code>{21}になるんだ(@<list>{composed_add_and_mul_02})」

//listnum[composed_add_and_mul_02][@<code>{(2 + 5) * 3}を計算するコード]{
(2 + 5) * 3
//}

泉「数学の世界では括弧を重ね書きするとき、@<code>{{\}}や@<code>{[]}を用いることがあるけど、Pythonでは括弧が何重になっても@<code>{()}を用いるから、そこだけは注意だね(@<list>{multiple_parentheses})。まあ、身も蓋もない話をするなら、二重以上の括弧が出てくる式はわかりづらいから極力避けたほうが無難だけど……」

//listnum[multiple_parentheses][括弧はいくつ重ねても@<code>{()}を用いる]{
(4 + ((2 + 5) * 3)) / 2
//}

=== 演算と演算子

泉「ここまで2人に四則演算の方法を見てもらったけど、最後に重要な用語について解説しておくね。あるデータに対して何らかの計算を行うことを@<kw>{演算, operation}、また演算に使う記号のことを@<kw>{演算子, operator}というんだ。特に、『@<code>{+}』や『@<code>{-}』のように、四則演算のような数の演算(@<kw>{算術演算, arithmatic operation})に用いる演算子を@<kw>{算術演算子, arithmatic operator}と言ったりもするね」

りあむ「『算術』ってことは数と数の計算みたいな意味なのかな。逆にそれ以外の演算なんてある？全然イメージ湧かないんだけど……」

泉「詳しくはまた後で解説するけど、例えばある数とある数を比べてどちらが大きいかとか、両者の値は等しいか、っていうのを判定する@<kw>{比較演算, comparison operation}も演算の一つだね。『@<code>{1 + 1}は@<code>{2}と等しいか』みたいな数同士を比較するパターンだけじゃなく、『@<code>{夢見りあむ}と@<code>{大石泉}の出身都道府県は等しいか』なんて比較も考えられるよね。これは数とは関係ないでしょ？」

りあむ「確かに、言われてみれば納得かも。ちなみにぼくの出身県は……ってちょいちょいちょい！りあむちゃんはやさしい世界出身だぞ！！比較はできない！以上！！」

== 変数

泉「前の節で、2人にはいくつか計算をしてもらったね。ただ、これまでは表示された計算結果を眺めていただけで、これだと電卓を叩いているのと一緒だよね。今度は、一度計算した結果を繰り返し利用する方法を学んでみよう。どうすればいいと思う？」

颯「計算結果を取っておきたいんだよね。うーん、あんまりイメージ湧かないかも……」

泉「じゃあ、最初にやった計算、@<code>{1 + 1}と@<code>{5 - 2}の計算結果をそれぞれ再利用することを考えてみよう。何度も使いたいんだから、もちろんその過程で2つの値を区別できなくちゃだめだよね。どうすれば区別できるようになるかな？」

颯「区別するためには……何か名前をつけてあげるとか？」

泉「大正解！再利用したい値に何かしらの名前をつけてあげることで、以降その名前を使って繰り返し利用できるようになるんだ。このように、値に名前をつけたものを@<kw>{変数, variable}といい、変数に名前をつけることを@<kw>{代入, assignment}というんだ。変数への値の代入は@<list>{define_assignment}のように行うんだけど、この一文を@<kw>{代入文, assignment statement}というよ」

//list[define_assignment][変数への値の代入(代入文)]{
    変数の名前 = 値
//}

泉「ここで、『@<code>{=}』は@<kw>{代入演算子, assignment operator}と呼ばれる演算子の一種で、Shiftキーと一緒に『ほ』と書かれたキーを押すと入力できるよ。怒涛のワードラッシュだけど、頑張ってついてきてね。試しに、@<code>{1 + 1}に@<code>{a}、@<code>{5 - 2}に@<code>{b}という名前をつけてみよう(@<list>{assignment_sample})」

//listnum[assignment_sample][代入の例@<fn>{1_assign_a}]{
a = 1 + 1
b = 5 - 2
//}

//footnote[1_assign_a][例えば、@<code>{a = 1 + 1}は『@<code>{a}イコール@<code>{1 + 1}』、『@<code>{a}に@<code>{1 + 1}を代入する』などと読みます。]

泉「この2行をセルに入力して実行してみると、どうなるかな？」

りあむ「ん？何も出ないけどこれであってる？(@<img>{assignment_sample})」

//image[assignment_sample][代入しただけでは何も表示されない][scale=0.8]{
//}

泉「あってるよ。このように変数への代入を行っただけだと、セルの下には何も表示されないんだ。じゃあ今度は、実際に変数の中を覗いてみて@<fn>{variable_contents}、変数に正しく値が代入されたか確かめてみよう。まずはさっきと@<ttb>{同じセルに続ける形で}@<code>{print(a)}と入力して、セルを実行してみてもらえるかな？(@<list>{reference_sample_1})」

//footnote[variable_contents][詳しくはこのあと説明しますが、『変数の中』という表現は厳密にはやや正確性に欠けます。ただ、ほとんどのケースにおいてこのような解釈で問題ありません。]

//listnum[reference_sample_1][代入した値を呼び出す]{
a = 1 + 1
b = 5 - 2
print(a)
//}

颯「@<code>{2}って出てきた！(@<img>{reference_sample_1})さっき@<code>{a}に代入した@<code>{1 + 1}の計算結果が表示されてるってことだよね！」

//image[reference_sample_1][@<code>{a}に代入された値が表示された][scale=0.8]{
//}

泉「その通り。今回は@<code>{a}を表示していることがわかりやすいように@<code>{print}関数を用いたけど、セルの最後の行に書くなら@<code>{a}とだけ書いても表示されるね」

泉「じゃあ今度は、@<ttb>{別のセルを用意して}、そこに@<code>{print(b)}と書いて実行してみよう(@<list>{reference_sample_2})」

//listnum[reference_sample_2][代入した値を呼び出す]{
print(b)
//}

りあむ「一度代入したら別のセルでも呼び出せるのか！(@<img>{reference_sample_2})便利だな！」

//image[reference_sample_2][@<code>{b}に代入された値が表示された][scale=0.8]{
//}

泉「実は、ここからは変数にアクセスできて、ここからはアクセスできない、っていうルールがあるんだけど、それはまた後で説明するね。このように、変数の名前(変数名)を用いて、間接的にデータにアクセスすることを@<kw>{参照, reference}というんだ。変数、代入、参照と、どれも頻出の重要ワードだからよく覚えておいてね」

=== 変数名

泉「続いての話題は変数へつける名前について。さっきまで、変数に@<code>{a}や@<code>{b}といった短い名前をつけていたけど、こういった名前の変数はむしろ推奨されないことのほうが多いんだ」

颯「えっ、そうなの！？どうして？」

泉「それはずばり、@<ttb>{その変数が何を表しているのかわかりづらい}から。例えば、私の名前と年齢を変数に代入することを考えてみよう。@<list>{name_and_age_1}と@<list>{name_and_age_2}、どっちのほうがわかりやすいかな？」

//listnum[name_and_age_1][名前と年齢を変数に代入する例(その1)]{
a = "大石泉"
b = 15
//}

//listnum[name_and_age_2][名前と年齢を変数に代入する例(その2)]{
name = "大石泉"
age = 15
//}

りあむ「まあ、@<code>{name}(名前)と@<code>{age}(年齢)って書かれてある@<list>{name_and_age_2}のほうが圧倒的にわかりやすいな！それはそう！」

泉「でしょ？@<list>{name_and_age_1}はここだけ見てもわかりづらいけど、@<ttb>{他の場所で改めて変数を参照するときに何を指していたのかわからなくなる}ことのほうが大きな問題かな。@<code>{"大石泉"}はまだ見れば名前だってわかるけど、数字の@<code>{15}なんていくらでも解釈のしようがあるし、他の数と混ざったらわけがわからなくなっちゃうよね？」

颯「確かに！言われてみれば納得かもっ！」

泉「中にはごく短い名前でも問題ないようなシチュエーションもあるけど、基本的には長くてもわかりやすい名前が推奨されるかな。ただ、今回は解説の都合上、@<chap>{chapter_03}ではとりわけ意味を持たない値については簡潔な名前で表すことにするね」

颯「はーい！」

泉「あっ、そうだ。名前をつけるときのルールについても触れておかなきゃ。押さえてほしいのは以下3点！」

 * 名前に使えるのは半角英数字と@<code>{_}(アンダースコア)@<fn>{included_unicode}
 * 名前を数字から始めることはできない
 * 予約語(後述)は使用できない

//footnote[included_unicode][実は一部の全角文字も使えるので、@<code>{りあむの年齢 = 19}のようなコードもありなのですが、Python内部の扱いが非常にややこしい他(Unicode正規化(NFKC)という処理が行われます)、漢字への変換の手間などもあり推奨されません。日本語名をつけたい気持ちもわかりますが、そのうち英語でないとかえって違和感を覚えるようになるはずです。]

泉「注目してほしいのは、半角記号の中で唯一使えるのがアンダースコアってところ。これ、どこかで一度説明したんだけど、覚えてる？」

颯「うん！ノートブックに名前をつけるとき、だよね！」

泉「大正解！『名前を区切るときは半角スペースじゃなくアンダースコアかハイフンを』っていう話だったね。このうち、Pythonではハイフンもダメで、使えるのはアンダースコアだけ。@<code>{idol_name}のように、複数の単語を組み合わせたいときはアンダースコアで区切るように@<fn>{head_under_score}」

//footnote[head_under_score][アンダースコアには、ここでは紹介していない重要な用法もありますが、ここでは区切り文字として使うことを覚えていただければ問題ありません。]

りあむ「逆に、それ以外の半角英数字なら全部使えるんだ！」

泉「といっても、アルファベットのうち基本的に使われるのは小文字だけ。つまり、@<code>{idol_name}はよくても、@<code>{Idol_Name}みたいなのは普通Pythonでは見かけないかな。PEP 8が示しているルールの一つだよ」

りあむ「出た！またお前か～～～！！！」

泉「あくまで推奨しているだけで、こう書かなきゃダメってわけでもないんだけどね。とはいえ、@<ttb>{単語をアンダースコアで区切って、すべて小文字で書く}名前のつけ方は@<kw>{スネークケース, snake_case}という名前がついているくらいメジャーな記法だから、PEP 8独自の考え方というわけではないかな」

泉「そして、最後の@<kw>{予約語}というのは既にPythonによって役割が与えられていて、変数名として使えない名前のことだよ。@<table>{reserved_word_list}に示した35種類の名前は使えないから注意してね」

//table[reserved_word_list][予約語の一覧]{
False	None	True	and	as	assert	async
await	break	class	continue	def	del	elif
else	except	finally	for	from	global	if
import	in	is	lambda	nonlocal	not	or
pass	raise	return	try	while	with	yield
//}

颯「予約語って結構たくさんあるんだね。これ、覚えられるかな……」

泉「この表を覚える必要はないから安心して。よく見ると@<code>{nonlocal}や@<code>{yield}のように、大半がまず自分でつけようと思わない名前でしょ？それにColabでは、予約語を青や紫といった特殊な色で表示するようになっているから、すぐに区別できるようになっているんだ。そして、たとえ間違えて予約語で名前をつけてしまっても、エラーになるから大丈夫だよ(@<img>{syntax_error_for})」

//image[syntax_error_for][予約語である@<code>{for}を変数名としたときのエラー]{
//}

りあむ「大丈夫っていうのかなこれ……いかついメッセージ出ちゃってますけど……」

泉「これまでも何度かエラーメッセージを見てきたけど、英語だから難しそうに見えるだけ。むしろ、教えてくれるだけ親切なんだよ。本当に怖いのは、エラーもなくPythonを壊してしまうこと。まずは以下のコードをセルに入力してみよう(@<list>{assignment_print_1})」

//listnum[assignment_print_1][@<code>{print}に@<code>{"夢見りあむ"}を代入する]{
print = "夢見りあむ"
print("Hello, world!")
//}

りあむ「えーっとなになに？@<code>{print}という名前の変数に@<code>{"夢見りあむ"}を代入して……あー、なんか嫌な予感するぞ」

泉「じゃあ、実行してみよう。何が出てきたかな？」

りあむ「うん、知ってた！なんじゃこりゃ！！(@<img>{assignment_print_1})」

//image[assignment_print_1][@<code>{print}関数が機能しなくなった]{
//}

泉「@<code>{TypeError: 'str' object is not callable}、今の2人にわかるように訳すと『タイプエラー: 文字列は関数のように呼べません』といったところだね。何が起こったかというと、もともと『文字を表示する』という機能を持っていた@<code>{print}関数に文字列の@<code>{"夢見りあむ"}を代入したことで、@<code>{print}がただの文字列になってしまったんだ。この時点で@<code>{print}は関数としての役割を失ってしまい、このようなエラーが表示されてしまったというわけだね」

颯「もちろんこれってよくないことだよね！？戻さなきゃ！」

泉「じゃあ、1行目の代入文だけ消してもう一度セルを実行してみよう(@<list>{assignment_print_2})」

//listnum[assignment_print_2][代入文を消してprint("Hello, world!")だけにする]{
print("Hello, world!")
//}

颯「あれ！？代入文は消したのに元に戻らない！(@<img>{assignment_print_2})」

//image[assignment_print_2][@<code>{print}関数は変わらず機能しないまま]{
//}

泉「そう。一度上書きしてしまった変数は、ただ代入文を消しただけでは戻らないんだ。これは、@<img>{reference_sample_2}でも見たように、セルを一度実行したからといって、変数に紐づけられた値が消えるわけではないから。これが対話モードのいいところでもあり、同時に難しいところでもある、というわけだね」

りあむ「え、じゃあもう@<code>{print}関数は使えなくなっちゃったの！？りあむちゃん先生の次回作にご期待ください！！」

泉「大丈夫。ここからでも入れる保険はあるよ。まず一つ考えられる手は、Colabの90分ルールを逆手に取って、ランタイムの切断を待つこと。とはいえ、流石に90分待つのは大変だから、ここではもう一つの方法、@<kw>{del文}について解説するね。といっても使い方はシンプルで、@<code>{del}に続いてスペース、そしてその後ろに削除したい変数名を書くだけ@<fn>{actual_del}。こうすることで、変数に紐づけられた値は解除されるんだ(@<list>{del_statement})」

//list[del_statement][変数の削除]{
    del 変数名
//}

//footnote[actual_del][厳密には削除とは異なる操作が行われているのですが、後ほど解説します。イメージとしては削除で問題ありません。]

泉「ここでは@<code>{print}に紐づけられた@<code>{"夢見りあむ"}を削除したいから、@<code>{del print}と書かれたセルを実行すれば、再び@<code>{print}関数を実行できるようになるよ(@<list>{del_print})」

//listnum[del_print][@<code>{print}に紐づけられた@<code>{"夢見りあむ"}を削除する]{
del print
//}

颯「直った！よかった～！一時はどうなることかと思ったよ！」

泉「あとは画面上の『ランタイム』から『セッションを再起動する』をクリックする方法もあるけど、どちらで対応するかはお好みで。ただ、セッションを再起動すると他の変数も全部消えちゃうからそこは注意だね」

颯「ねえ、もともとある名前を上書きしないように対策する方法ってあるの？予約語じゃなければ普通に代入できちゃうの、怖くない？」

泉「もちろん！……と言いたいところだけど、実はColabでは対策らしい対策は取れないんだ。エディタによっては変数と関数の文字色が違うことから区別できたりもするんだけど、Colabの場合その方法では見分けられないんだ。まだ説明してないけど、@<code>{print}のように何かしらの機能を持つ関数はたくさんあるんだけど、それらと名前が被らないように気をつけるしかないかな」

りあむ「それ、だいぶハードモードでは！？」

泉「こればかりはしょうがない。ただ、特に(うっかり)被りやすい名前はある程度決まっているから、今後そういったキーワードが出てきたときには紹介するね。名前のつけ方にはある程度こうすべきっていうルールみたいなものがあって、慣れてくるとそのうち@<code>{print}のような名前をつけたくなるようなことはなくなるはず！」

=== 【発展】変数のイメージ

//warning{
【注意】この項では@<ttb>{特に発展的な内容}を扱います。この後につながる重要な話なので、できれば知っておいていただきたい内容ですが、難しい場合は一旦読み飛ばしていただいて構いません。
//}

泉「今紹介した変数を初学者に初めて説明するとき、変数はしばしば箱に例えられるんだ。今回の例だと、『@<code>{a}という箱に@<code>{1 + 1}を、@<code>{b}という箱に@<code>{5 - 2}を入れた』、みたいにね」

颯「なるほど。入れ物の中にしまう感じなんだ！わかりやすくてイメージしやすいかもっ！」

泉「この例でもとっかかりとして悪くはないんだけど、私たちが学習しているPythonだと必ずしも正しい表現とは言えないんだ。ここで、Pythonの公式ドキュメント@<fn>{official_document}の一節に書かれたある文章を紹介するね@<fn>{docs_faq}」

//footnote[official_document][公式が出している文書のことです。本書をはじめとした、非公式の解説書などが二次情報だとすると、公式ドキュメントは一次情報そのものです。その多くが言語の仕様を列挙したもので、さながら辞書のような体裁で記述されています。初学者におすすめできるようなものではありませんが、より正確な情報を知りたい場合には一度アクセスしてみてもよいでしょう。なお、世の中の公式ドキュメントの多くは英語で書かれていますが、幸いPythonは日本語で読むことも可能です(ただし翻訳が追いついていないページも多々あります)。]

//footnote[docs_faq][Python Software Foundation. “プログラミング FAQ”. Python 3.13.1 ドキュメント. 2025-01. @<href>{https://docs.python.org/ja/3.13/faq/programming.html}, (2025-01-24閲覧)]

//quote{
    ”変数とは、単にオブジェクトを参照するための名前に過ぎません。”
//}

泉「@<kw>{オブジェクト, object}っていうのはPythonで操作するデータやプログラムの総称で、これまで出てきた@<code>{print}関数、@<code>{"Hello, world!"}という文字列、@<code>{1}や@<code>{0.2}のような数もみんなオブジェクトの一種だよ」

りあむ「もしかして、結構色んなものがその『オブジェクト』ってやつだったりする感じ？」

泉「結構どころか、逆にオブジェクトでないものを見つけるのが難しいくらいにはね。オブジェクトでないものとしては、例えば演算子がそう。他にもいくつかそうじゃないものはあるけど、大半のものはオブジェクトと思ってもらって大丈夫だよ。――――さて、改めて引用した文を見ると、『変数はオブジェクトを参照するための名前』とあるね。ここからわかることは、@<ttb>{変数の本質は名前にある}、ということなんだ」

りあむ「えっと……つまり、どゆこと？」

泉「じゃあ、次のプログラムを考えてみよう(@<list>{copy_integer})。まだ実行はしなくて大丈夫だよ」

//listnum[copy_integer][@<code>{x}に@<code>{1000}を、@<code>{y}に@<code>{x}を代入する]{
x = 1000
y = x
//}

泉「このとき、@<code>{x}と@<code>{y}はそれぞれいくつになるでしょう？」

颯「@<code>{x}は@<code>{1000}で、@<code>{y}に@<code>{x}を代入してるんだから、@<code>{y}も@<code>{1000}だよね」

泉「正解！では、このコード(@<list>{check_id_x_and_y})をセルにまとめて入力して、実行してみよう(@<img>{variable_01})」

//listnum[check_id_x_and_y][@<code>{x}と@<code>{y}の値と@<code>{id}を表示するコード]{
x = 1000
y = x
print(x)
print(y)
print(id(x))
print(id(y))
//}

//image[variable_01][@<code>{x}と@<code>{y}の値と@<code>{id}を表示した結果の例@<fn>{id_is_different}]{
//}

//footnote[id_is_different][後述しますが、@<code>{id(x)}や@<code>{id(y)}は必ずしもこの値になるとは限りません。ここでは、両者が同じ値である(3行目と4行目に表示された値が同じ)ことを確認してください。]

颯「@<code>{1000}と@<code>{138111118437264}って数字が2つずつ出てきたけど……なにこれ？そもそも、@<code>{id}って何？」

泉「さっき説明したオブジェクトはみんなそれぞれ@<kw>{識別値, identity}といって、オブジェクトを識別するための値を持っているんだ。@<code>{id}を使うと、オブジェクトが持っている識別値を確認することができるんだよ。いま、@<code>{id(x)}で@<code>{x}のidを、@<code>{id(y)}で@<code>{y}のidをそれぞれ確認したんだけど、注目すべきポイントは@<ttb>{xとyのidが同じ}ということ。つまり、本質的に@<code>{x}と@<code>{y}は同じオブジェクトを指している、ということなんだ」

颯「でも、@<code>{y = x}って書いたんだから、@<code>{x}と@<code>{y}は同じっていうのは当たり前じゃないの？」

泉「@<code>{=}(イコール)っていう記号を使ってるから紛らわしいけど、@<code>{=}はあくまで代入を表す演算子に過ぎなくて、数学で言うところの『等しい』という意味ではないことがポイントだね。Pythonにおける代入は、あくまで@<ttb>{オブジェクトを参照するための名前をつけているだけ}。@<code>{y = x}は『@<code>{y}に@<code>{x}を代入する』と読んだりもするけど、その実態は『@<code>{x}(が指しているオブジェクト)に@<code>{y}という名前をつけている』、ということなんだ@<fn>{x_assign_y}。その結果として、@<code>{x}と@<code>{y}が指している値がどっちも@<code>{1000}になっている、というわけだね」

//footnote[x_assign_y][方向が逆なのが大変ややこしいですね。イメージとしては@<code>{y} ← @<code>{x}で問題ないですが、実際の動きとしては@<code>{y} → @<code>{x}のほうが近いです。]

颯「うーん、まだよくわかんないかも……」

泉「図を見てもらったほうがわかりやすいかな。@<code>{x = 1000}と@<code>{y = x}という操作を続けて行ったとき、『@<code>{1000}を@<code>{x}でも@<code>{y}でも参照できる』、すなわち@<ttb>{1つのオブジェクトに2つの名前がついている}ような状態になっているんだ。要するに、オブジェクトはコピーされていない、っていうことだね」

颯「なるほど、だからどっちも同じidだったんだね！ここで箱に値を入れるイメージで考えちゃうと、箱が2つできちゃうからおかしなことになっちゃうんだ！」

泉「その通り！このイメージをわかりやすく説明するために、Pythonでは変数を箱ではなく@<ttb>{名札}にたとえている人もいるね。もちろんこれはあくまでたとえであって、イメージを掴むためのものであることは忘れないでね」

りあむ「あのー、お話しているところ大変恐縮なんだけど、ぼくの画面だと@<code>{x}と@<code>{y}のidが@<code>{137495146193488}になっちゃってる。颯ちゃんのは@<code>{138111118437264}だったよね。これ、なんで違うの？」

泉「いい質問だね。@<code>{id}で表示されている値の正体は@<kw>{アドレス, address}@<fn>{address}なんだ。コンピュータにはデータを一時的に保存しておく主記憶装置(メモリ)という領域があるんだけど、そのメモリ上の位置を示す値をアドレスと呼ぶんだ」

//footnote[address][@<kw>{番地}ともいいます。こちらのほうがしっくりくるかもしれませんね。]

りあむ「メモリって、スマホを買うときに『メモリ: 4GB』なんて書かれてるあれのことか！主記憶装置っていうと途端にいかつく聞こえちゃうな……」

颯「アドレスっていう言葉の意味はなんとなくわかったんだけど、idが人によって違うのとどう関係あるの？」

泉「オブジェクトを作成したとき、その値はメモリ上の空きがある場所に書き込まれるんだけど、空いてる場所がいつも同じとは限らないんだ。だから、人によってidが違うのはもちろん、同じ環境であっても実行したタイミングによってもidが変わることがあるんだ@<fn>{beforehand_cache}。Colabのセッションが一度切れた後、もう一度@<list>{check_id_x_and_y}を実行するとおそらく結果は変わるから、セッションが切れた後に試してみてね」

//footnote[beforehand_cache][ちなみに、@<code>{-5}から@<code>{256}までの整数に限っては事前にメモリ上に用意されており、初めて参照されたときにそのオブジェクトが用いられる特別な仕様となっているようです。試しに複数の端末や別日にまたがって@<code>{1}のidを調べたところ、何度試しても結果は@<code>{10750856}から変化しませんでした。今回、解説に@<code>{1000}というやや大きな値を用いたのはこのためです。]

颯「すごく難しい話だったけど、最初に泉ちゃんが変数の説明をしてくれたとき、『名前をつける』って表現にこだわってたのはそういうことだったんだね」
