= 意外と知らない記号

=== そっくりな記号

泉「ここからは、キーボードの使い方について見ていこう。2人とも、普段使ってるのはスマートフォン？」

颯「うん！学校では時々授業で使ってるし、ローマ字の打ち方とかも習ったんだけど……さっきみたいに、ダブルクォーテーションとか、記号を打つ機会ってほとんどなかったかも……」

泉「そうだよね。SNSを利用したりするだけだと、なかなか記号を打つことはないから、知らないのが普通。ところが、初学者向けの本を見てみても、流石に記号の打ち方から解説している本はほとんどない。Webサイトなら文字をコピーすれば済むけど、本じゃそうもいかないよね。例えば、さっきりあむさんがつまづいてた文字(@<code>{"})も、『ダブルクォーテーション』っていう名称を知っていれば調べられるけど、知らなければ『プログラミング ちょんちょん 記号 打ち方』みたいに検索するしかない@<fn>{search_chonchon}@<fn>{search_chatgpt}。それに、さっきみたいに紛らわしい記号と間違えることもあるから、最低限の知識はあったほうがいいよね」

//footnote[search_chonchon][ちなみに、筆者がこのワードで検索したところ普通にヒットしました。意外となんとかなるもんですね。]
//footnote[search_chatgpt][2025年現在であれば、ChatGPT等の生成AIサービスを利用して、より具体的に質問することで回答を得られるかもしれません。]

りあむ「なるほど」

泉「例えば、クォーテーション1つとっても、シングルクォーテーション『@<code>{'}』、ダブルクォーテーション『@<code>{"}』、シングルクォーテーションを2つ並べたもの『@<code>{''}』、クォーテーションに似てるけど別記号のプライム『@<code>{`}』@<fn>{prime}、プライムを2つ並べたダブルプライム『@<code>{``}』みたいにそっくりなものがいっぱいあるね」

//footnote[prime][この記号はダッシュとも呼ばれますが、ダッシュは『–』または『—』という記号の名称としても用いられます(前者をenダッシュ、後者をemダッシュといいます)。さらに、ダッシュとよく似た記号でハイフン『-』、マイナス『－』、長音符『ー』もありますが、これらは全て別物です。紛らわしすぎる……。]

りあむ「全部同じじゃないですか！？」

泉「ちがうよ。もっとよく見て！……と言いたいところだけど、似てるのは事実。他にも似ている記号はいくつかあるから、ここでまとめて紹介するね」

=== クォーテーション

泉「まず、クォーテーションについて。Pythonではシングルクォーテーションとダブルクォーテーションをどちらも使うことがあって、その使い道も全く一緒。単語や文章のような文字の並びをプログラミングの分野では@<kw>{文字列, string}っていうんだけど、Pythonではシングル、ダブルを問わずクォーテーションで囲んだものが文字列になるんだ@<fn>{other_language_quote}」

//footnote[other_language_quote][文字列を表す際に使用できる文字は、言語によって実に様々です。前述したJavaではダブルクォーテーションしか使用できませんし、逆にJavaScriptではプライムを使うこともできます。また、シングルとダブルのどちらを使用するかで挙動が異なる言語もあります(Ruby, PHP, Perlなど)。]

りあむ「さっきHello, world!って文章を表示するとき@<code>{"Hello, world!"}って書いてたけど、あれが文字列なのね@<fn>{string_color}」

//footnote[string_color][Colabでは文字列を自動で認識して、文字列に該当する部分を紫色で表示するようになっています。◯章のりあむのように文字を間違えていると色が変わらないため、これが一つの目安になります。]

泉「そう。そして、どっちのクォーテーションでもいいってことは、@<code>{"Hello, world!"}でも@<code>{'Hello, world!'}でも全く同じように動作するっていうことだね」

颯「じゃあ『はーはダブルクォーテーションの見た目のほうが好きだからこっちを使う』、みたいなのもありってこと！？」

泉「ありだよ。ただし、両方を混在させるのはあまりよくないかな。シングルを使うと決めたならシングルで、ダブルを使うと決めたならダブルで統一すべきだね。今後、私が文字列について触れるときはダブルで統一するから、もしシングルを使いたい場合は適宜読み替えてね」

//quote{
【補足】「泉は"こんにちは"と挨拶した」という文章を文字列にすることを考えてみましょう。「@<code>{"泉は"こんにちは"と挨拶した"}」とすればうまく動くでしょうか？答えはNOです。なぜなら、@<b>{クォーテーションで囲んだ部分が文字列になる}ということを考えると、「泉は」と「と挨拶した」の2つが文字列と認識され、その間の「こんにちは」は文字列の一部ではなくなってしまうからです。このように、文字列中にクォーテーションを含ませたい場合、もう一つのクォーテーションで文字列を表すことでこの問題を回避できます。つまり、文字列中にダブルクォーテーションを含ませたいなら、文字列を表すのにシングルクォーテーションを用い、「@<code>{'泉は"こんにちは"と挨拶した'}」とすればよいのです(もちろんシングルとダブルを入れ替えても正しく動作します)。このように、両者を混在させるケースもまれにあるので、知っておくとよいかもしれません。
//}

=== 括弧

泉「続いて紹介するのは括弧。半角記号として使えるのは丸括弧『@<code>{()}』、角括弧『@<code>{[]}』、波括弧『@<code>{{\}}』の3種類。丸括弧は日常生活でもよく出てくるけど、角括弧と波括弧はあんまり使う機会がないかもね」

颯「よく見れば違う記号だけど、打つときには間違えないようにしなきゃ！」

泉「Pythonでは3種類ともよく使われている記号だから注意が必要だね。丸括弧はShiftキーを押しながら8や9を押せば入力できるよ。同様に、角括弧はEnterキーの左側にある『@<code>{[}』や『@<code>{]}』を、波括弧はShiftキーを押しながらそれらを押せば入力できるよ」

颯「あれっ、もしかしてキーの下側に書いてある字がShiftキーを押さずに入力できる字で、上側に書いてある字がShiftキーを押しながら入力する字になってる！？@<fn>{key_letter}全然今まで気にしたことなかったかも！」

//footnote[key_letter][キーボードの種類によっては印字されていなかったり、配置が異なる場合があります。]

泉「その通り。それを知っておけば、入力したい字をキーボードから探して打つことができるね」

=== パイプ

泉「あとはパイプ『@<code>{|}』もかなり分かりづらい記号かな。日常生活でまず使わない文字だし、何より数字の1(いち)やアルファベットのI(アイ)、l(エル)にそっくりなのもつらいところ……。ただ、少なくともPythonではほとんど使う機会がない@<fn>{pipe}から、こういう記号があるんだって頭の片隅に置いてくれればそれで十分」

//footnote[pipe][Pythonで@<code>{|}が登場するのはビット演算(0と1で行う演算)のときのみです。(以下補足) @<code>{a|b}は@<code>{a}または@<code>{b}の少なくとも一つが@<code>{1}であれば@<code>{1}となる演算を表します。すなわち、@<code>{0|0}は@<code>{0}となり、@<code>{0|1}, @<code>{1|0}, @<code>{1|1}はいずれも@<code>{1}となります。]

りあむ「これ、さっきのクォーテーション以上にたち悪い気がするな。知らなかったら詰む自信あるぞ……」

