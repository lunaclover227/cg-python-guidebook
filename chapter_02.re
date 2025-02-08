= プログラミングの準備をしよう

== 意外と知らない記号の世界

=== そっくりな記号

泉「ここからは、キーボードの使い方について見ていこう。2人とも、普段使ってるのはスマートフォン？」

颯「うん！キーボードも学校では時々パソコンの授業で使ってるし、ローマ字の打ち方とかも習ったんだけど……さっきみたいに、ダブルクォーテーションとか、記号を打つ機会ってほとんどなかったかも……」

泉「そうだよね。SNSを利用したりするだけだと、なかなか記号を打つことはないから、知らないのが普通。ところが、初学者向けの本を見てみても、流石に記号の打ち方から解説している本はほとんどない。Webサイトなら文字をコピーすれば済むけど、本じゃそうもいかないよね。例えば、さっきりあむさんがつまづいてた文字(@<code>{"})も、『ダブルクォーテーション』っていう名称を知っていれば調べられるけど、知らなければ『プログラミング ちょんちょん 記号 打ち方』みたいに検索するしかない@<fn>{search_chonchon}@<fn>{search_chatgpt}。それに、さっきみたいに紛らわしい記号と間違えることもあるから、最低限の知識はあったほうがいいよね」

//footnote[search_chonchon][ちなみに、筆者がこのワードで検索したところ普通にヒットしました。意外となんとかなるもんですね。]
//footnote[search_chatgpt][2025年現在であれば、ChatGPT等の生成AIサービスを利用して、より具体的に質問することで回答を得られるかもしれません。]

りあむ「そもそも文字についてあんまり詳しくないっていうのは盲点だったかも。クォーテーション、あんま馴染みないな」

泉「例えば、クォーテーション1つとっても、シングルクォーテーション『@<code>{'}』、ダブルクォーテーション『@<code>{"}』、シングルクォーテーションを2つ並べたもの『@<code>{''}』、クォーテーションに似てるけど別記号のプライム『@<code>{`}』@<fn>{prime}、プライムを2つ並べたダブルプライム『@<code>{``}』みたいにそっくりなものがいっぱいあるね」

//footnote[prime][この記号はダッシュとも呼ばれますが、ダッシュは『–』または『—』という記号の名称としても用いられます(前者をenダッシュ、後者をemダッシュといいます)。さらに、ダッシュとよく似た記号でハイフン『-』、マイナス『－』、長音符『ー』もありますが、これらは全て別物です。紛らわしすぎる……。なお、コーディングの際は半角で入力できるハイフン『-』しか使わないのでご安心ください。]

りあむ「全部同じじゃないですか！？」

泉「ちがうよ。もっとよく見て！……と言いたいところだけど、似てるのは事実。他にも似ている記号はいくつかあるから、ここでまとめて紹介するね」

=== クォーテーション

泉「まず、クォーテーションについて。Pythonではシングルクォーテーションとダブルクォーテーションをどちらも使うことがあって、その使い道も全く一緒。単語や文章のような文字の並びをプログラミングの分野では@<kw>{文字列, string}っていうんだけど、Pythonではシングル、ダブルを問わずクォーテーションで囲んだものが文字列になるんだ@<fn>{other_language_quote}(@<img>{string})」

//footnote[other_language_quote][文字列を表す際に使用できる文字は、言語によって実に様々です。前述したJavaではダブルクォーテーションしか使用できませんし、逆にJavaScriptではプライムを使うこともできます。また、シングルとダブルのどちらを使用するかで挙動が異なる言語もあります(Ruby, PHP, Perlなど)。]

//image[string][文字列は「ただの文字」であることがポイント@<fn>{full_width_char}]{
//}

//footnote[full_width_char][@<hd>{chapter_01|first_colab}項で「原則全角文字は使わない」という話がありましたが、数少ない例外の一つが文字列です。文字列はただの文字なので、半角か全角かを問いません。"Hello, world!"と表示する代わりに全角文字である日本語の文字を用いて「こんにちは、世界！」と表示することができない、なんておかしな話ですもんね。]

りあむ「さっきHello, world!って文章を表示するときに@<code>{"Hello, world!"}って書いてたけど、あれが文字列なのね@<fn>{string_color}」

//footnote[string_color][Colabでは文字列を自動で認識して、文字列に該当する部分を紅色で表示するようになっています。@<hd>{chapter_01|first_colab}項のりあむのように文字を間違えていると色が変わらないため、これが一つの目安になります。]

泉「そう。そして、どっちのクォーテーションでもいいってことは、@<code>{'Hello, world!'}でも@<code>{"Hello, world!"}でも全く同じように動作するっていうことだね」

颯「じゃあ『はーはダブルクォーテーションの見た目のほうが好きだからこっちを使う』、みたいなのもありってこと！？」

泉「ありだよ。ただし、両方を混在させるのはあまりよくないかな。シングルを使うと決めたならシングルで、ダブルを使うと決めたならダブルで統一すべきだね。今後、私が文字列について触れるときはダブルで統一するから、もしシングルを使いたい場合は適宜読み替えてね」

//tip{
【補足】「泉は"こんにちは"と挨拶した」という文章を文字列にすることを考えてみましょう。「@<code>{"泉は"こんにちは"と挨拶した"}」とすればうまく動くでしょうか？答えはNOです。なぜなら、@<b>{クォーテーションで囲んだ部分が文字列になる}ということを考えると、「泉は」と「と挨拶した」の2つが文字列と認識され、その間の「こんにちは」は文字列の一部ではなくなってしまうからです。このように、文字列中にクォーテーションを含ませたい場合、もう一つのクォーテーションで文字列を表すことでこの問題を回避できます。つまり、文字列中にダブルクォーテーションを含ませたいなら、文字列を表すのにシングルクォーテーションを用い、「@<code>{'泉は"こんにちは"と挨拶した'}」とすればよいのです(もちろんシングルとダブルを入れ替えても正しく動作します)。このように、両者を混在させるケースもまれにあるので、知っておくとよいかもしれません。
//}

=== 括弧

泉「続いて紹介するのは括弧。半角記号として使えるのは丸括弧『@<code>{()}』、角括弧『@<code>{[]}』、波括弧『@<code>{{\}}』の3種類。丸括弧は日常生活でもよく出てくるけど、角括弧と波括弧はあんまり使う機会がないかもね」

颯「よく見れば違う記号だけど、打つときには間違えないようにしなきゃ！」

泉「Pythonでは3種類ともよく使われている記号だから注意が必要だね。丸括弧は@<hd>{chapter_01|first_colab}項でも説明したように、Shiftキーを押しながら『ゆ』や『よ』を押せば入力できるよ。同様に、角括弧はEnterキーの左側にある『@<code>{[}』や『@<code>{]}』を、波括弧はShiftキーを押しながら『@<code>{[}』や『@<code>{]}』を押せば入力できるよ」

颯「あれっ、もしかしてキーの左下に書いてある字がShiftキーを押さずに入力できる字で、左上に書いてある字がShiftキーを押しながら入力する字になってる！？@<fn>{key_letter}(@<img>{printed_key})全然今まで気にしたことなかったかも！」

//footnote[key_letter][キーボードの種類によっては印字されていなかったり、配置が異なる場合があります。]

//image[printed_key][キーに印字された字から入力文字を確認できる]{
//}

泉「その通り。それを知っておけば、入力したい字をキーボードから探して打つことができるね」

=== パイプ

泉「あとはパイプ『@<code>{|}』もかなり分かりづらい記号かな。日常生活でまず使わない文字だし、何より数字の1(いち)やアルファベットのI(アイ)、l(エル)にそっくりなのもつらいところ……。ただ、少なくともPythonではほとんど使う機会がない@<fn>{pipe}から、こういう記号があるんだって頭の片隅に置いてくれればそれで十分かな」

//footnote[pipe][Pythonで@<code>{|}が登場するのはビット演算(0と1で行う演算)のときのみです。(以下補足) @<code>{a|b}は@<code>{a}または@<code>{b}の少なくとも一つが@<code>{1}であれば@<code>{1}となる演算を表します。すなわち、@<code>{0|0}は@<code>{0}となり、@<code>{0|1}, @<code>{1|0}, @<code>{1|1}はいずれも@<code>{1}となります。]

りあむ「これ、さっきのクォーテーション以上にたち悪い気がするな。知らなかったら詰む自信あるぞ……」

=== 【発展】バックスラッシュ

泉「ここまでで文字の入力方法や見た目が紛らわしい文字について解説してきたけど、最後に紹介するのはバックスラッシュ『@<code>{\\}』！この文字は他の記号とはまた違ったある大きな問題を抱えているんだ」

颯「左右が逆になってる字は見たことある気がするかも！それと似てるってこと？」

泉「左右反転した文字はスラッシュ『@<code>{/}』だね。確かにその文字と似てるから間違えないようにっていうのも大事なんだけど、今回はYEN SIGN(円記号)問題という問題について話をするよ」

りあむ「YENってお金の円のこと？」

泉「そう。バックスラッシュは『ろ』と書かれたキーを半角モードで打つことで入力できる字……と言いたいところなんだけど、実は『￥』と書かれたキーからも入力できるし、場合によっては『ろ』のキーからも『￥』のキーからもできないこともある。実は、バックスラッシュは打つときの環境によって『@<code>{¥}』の形になることがあるんだ」

りあむ「ん？？？『@<code>{\\}』と『@<code>{¥}』って似ても似つかなくない？そんなことある？」

泉「これには@<kw>{文字コード}が深く関わっているんだ。文字コードはコンピュータ上で文字を表現するための規則のことで、すべての文字には文字コードにしたがった固有の識別番号が割り当てられているんだ。例えば『あ』という字は、@<ruby>{Unicode, ユニコード}と呼ばれる文字コードでは0x3042という番号が@<fn>{unicode}、@<ruby>{Shift-JIS, シフトジス}と呼ばれる文字コードでは0x8240という番号が割り当てられているの@<fn>{mojibake}」

りあむ「あー、なんか読めた気がする。さては、同じ番号に『@<code>{\\}』と『@<code>{¥}』を割り当てちゃったんだな？」

//footnote[unicode][しばしばU+3042とも表記されます。]
//footnote[mojibake][このように文字コードは1種類ではなく、例えばUnicodeでは「あ」を指す0x3042という番号はShift-JISでは「縺」という文字に割り当てられています。この違いによって「夢見りあむ」という文字が「螟｢隕九ｊ縺ゅ?」のように化けてしまう現象が俗にいう@<kw>{文字化け}です。「縺」は文字化け代表格の文字ですが、化ける前の「あ」が日本語の文章に頻繁に登場することが原因というわけです。]

泉「その通り！YEN SIGN問題は、もともと@<ruby>{ASCII, アスキー}という文字コードで『@<code>{\\}』に割り当てられていた0x5Cという番号を、Shift-JISで『@<code>{¥}』に割り当てたことから始まった問題なんだ。円記号は日本でこそ使われるけど、欧米では使われない文字でしょ？Shift-JISは日本語のための文字コードとして制定されたもので、このとき既にアメリカで制定されていたASCIIの『@<code>{\\}』を『@<code>{¥}』に置き換えちゃったんだ」

りあむ「なんでそんなことしちゃったんだよう！こんなに違う文字を当てちゃって！」

泉「もともと0x5Cは各国で自由に文字を割り当てていいっていうルールになってたから、それはしょうがない。YEN SIGN問題の真の問題点は、0x5Cに記号としての役割を与えてしまったことなんだ。Pythonにおいても『@<code>{\\}』は@<kw>{エスケープ文字}といって意味を持つ文字で、今回は紹介しないけど今後打つときは要注意だね」

颯「ここまでの話をまとめると、『@<code>{\\}』と『@<code>{¥}』は見た目が違うだけで同じ文字を表していて、どっちになるかは環境による、ってことでいいのかな？」

泉「そうだね。今後、どこかのサイトや本を見ながらプログラミングの勉強をするとき、『@<code>{\\}』または『@<code>{¥}』という字が書かれていたら、キーボードの『ろ』か『￥』と書かれているキーのどちらかを押せば大丈夫だよ。環境によって『@<code>{\\}』と『@<code>{¥}』のどちらが入力されるかわからないけど、見た目がどちらであっても同じ字だから安心してね」

== Colabの基本的な使い方

=== 90分ルールと12時間ルール

泉「文字の入力方法を覚えたところで、次に@<chap>{chapter_01}で触ったColabについて、利用方法を学んでいこう。2人にはさっきの画面を出してもらっていいかな？」

颯「あれ、なんか出てきちゃった！(@<img>{runtime_disconnected})」

//image[runtime_disconnected][ランタイムの切断@<fn>{runtime}]{
//}

//footnote[runtime][ランタイムとはPythonプログラムを実行するための環境を指します。]

泉「そうだった。操作の説明に入る前に、時間に関するColabのルールを2つ紹介するね。まず、Colabの操作をやめてからしばらくするとセッション@<fn>{session}が切れちゃうんだけど、そこから90分が経過するとそれまで実行していた結果がすべてリセットされちゃうの。このルールは俗に@<kw>{90分ルール}と呼ばれているんだ」

//footnote[session][通信の開始から終了までのことです。『セッションが切れる』とは、通信が切断され、それまで互いに繋がっていた状態から解放されることを指します。]

りあむ「『通信が切断されました。タイトル画面に戻ります』@<fn>{dereste_session}みたいなやつ？なんか見覚えあるぞ、それ」

//footnote[dereste_session][かつてデレステで3時間以上放置すると出ていたメッセージです。ルームで試行錯誤しながらルームアイテムを設置した後、ページを切り替えたタイミングで切断されるとそれまでの変更内容が全部リセットされて悲惨でした。]

泉「そんなところだね。例えば@<chap>{chapter_03}では、値を保持して繰り返し利用する方法を学ぶけど、90分経過でそういったものがリセットされちゃうんだね」

颯「えっ、それまずくない？90分以上休憩できないってこと？」

泉「消えるのはあくまで一時的なデータだけで、自身でセルに入力したコードまでは消えないから大丈夫。例えば1 + 1を計算して結果を保持するセルを用意したとして、そのセルを実行した結果の『2』という数字は90分後に一旦消えちゃうけど、もう一度セルを実行し直せばいいだけだからね」

颯「安心した～！思ったより厳しいかもって思っちゃった！」

泉「もう一つ、ノートブックを起動してから12時間が経過すると強制的に初期化される@<kw>{12時間ルール}というものもあるけど、これもセルを実行し直せばいいだけだから大きな問題ではないかな。有料版のColabを利用するとこの時間を延長できるんだけど、12時間以上時間がかかるような高度な計算を行うような人でなければ問題にはならないと思う。どちらのルールで切れちゃったときも、『再接続』をクリックするだけで大丈夫だよ」

=== ノートブック名の変更

りあむ「泉ちゃん。ぼくの画面、『Colabへようこそ』の画面に戻っちゃったんだけど、どうすればいいの？」

泉「ああ、一度ノートブックの外へ出ちゃったんだね。まずは左上の『ファイル』から『ノートブックを開く』をクリックしてみて(@<img>{colab_open_notebook_01})。前回特に何もしてないなら、Untitled0.ipynbっていう文字をクリックすればこの前のノートブックが開けるよ(@<img>{colab_open_notebook_02})。それが前回作ったノートブックの名前だね」

//image[colab_open_notebook_01][ノートブックを開く画面へ遷移する]{
//}

//image[colab_open_notebook_02][「ノートブックを開く」画面]{
//}

りあむ「いや、名前わかりづら！何この名前！？」

泉「Untitled(無題の)0、ってことだね。最初のノートブックだから0ってついてるけど、名前をつけないまま複数ノートブックを作成すると1, 2, …とどんどん数字が増えていくんだ。その後ろの.ipynbは@<kw>{拡張子}といってファイルの種類を表す文字列の一種で、Colabのノートブックであるということを示しているの@<fn>{filename_extension}。ノートブックそのものの名前ではないから注意が必要だね」

//footnote[filename_extension][Windowsではデフォルトで非表示になっていますが、一部の例外を除きどのようなファイルにも拡張子はついています。データ圧縮に用いられるzip, Adobe社の開発したpdf, 音声ファイルの一種であるmp3, 主に写真で利用されるjpg(またはjpeg)などが有名でしょうか。]

颯「じゃあ、Untitled0、って部分の名前だけを変えればいいのかな？」

泉「そうだね。名前は自由だけど、わかりやすい名前がいいかな。じゃあ、Hello, worldにならってhello_colabなんて名前はどうかな？(@<img>{colab_change_name})文字を区切るときはスペースじゃなくてアンダースコア@<fn>{under_score}『_』かハイフン『-』を使うのが一般的だから、ついでに覚えちゃおう。アンダースコアはShiftキーを押しながら『ろ』と書かれたキーを、ハイフンはShiftキーを押さずに『ほ』と書かれたキーを押すと入力できるよ」

//footnote[under_score][しばしばアンダーバーとも呼ばれます。]

//image[colab_change_name][ノートブック名をhello_colab.ipynbに変更する]{
//}

泉「あっ、自由とは言ったけど、半角記号はあんまり使わないほうが無難かな。これはColabに限らず、普段から名前をつけるときに意識しておいたほうがいいことだね(@<img>{ng_name})。例えば『.』は名前と拡張子の区切りとして使う文字だから、『izumi.test.ipynb』なんて名前をつけちゃったら紛らわしいでしょ？他にも半角記号は、前述したように何かしらの意味を持っていることがあるから、もし使うときはよく調べてからのほうがいいかな」

//image[ng_name][Windowsのエクスプローラーでは使用できない文字を教えてくれる]{
//}

//tip{
【補足】名前をつけるとき、文字を区切るのにスペースを用いない理由はなんでしょうか？それは、文字列を表すダブルクォーテーション「@<code>{"}」のように、スペースにも「区切りを示す」という大事な役割が与えられているからです。例えば、コマンドプロンプトというWindowsの操作を文字だけで行うツールでファイル名を変更したいとき、ren(またはrename)と入力した後に続けて元のファイル名、新しいファイル名を@<b>{スペースで区切って}入力します。「@<code>{ren 元のファイル名 新しいファイル名}」といった具合です。具体的に、izumi.txtというファイル名をhayate.txtに変更するならこんな感じです。

//cmd{
ren izumi.txt hayate.txt
//}

では、名前をhayate.txtではなくriamu sugoi.txt(riamuとsugoi.txtの間にスペース)に変更したいときはどうすればよいでしょうか？

//cmd{
ren izumi.txt riamu sugoi.txt
//}

コマンドは「@<code>{ren 元のファイル名 新しいファイル名}」でしたね？ファイル名がスペースで区切られていたせいで、最後のsugoi.txtが余ってしまいました。これではダメですね。このように、スペースで命令の区切りを表していたところに、スペースで区切れているものを混ぜると色々と面倒なことになるのです。ところがWindowsでは、あろうことかファイルに@<b>{スペースが入った名前をつけられる仕様にしてしまったので}、スペースがよろしくないということは一般にほとんど浸透していません。ただ、仮にスペースが使えないとなると「じゃあ何で区切ればいいんだ」となるのは必至で、IT(情報技術)に明るくない多くの人が混乱してしまいかねないのでやむを得ない仕様だったのでしょう……。
//}

=== 出力の消去とセルの削除

泉「続いてはセルについて。まずは出力の消去を試してみよう。2人とも、前回のHello, world!って表示するセルはまだ残ってるかな？一度実行してもらってもいい？」

颯「うん！Hello, world!って表示されたよ！」

泉「じゃあ、そのセルを右クリックして、続けて『出力の消去』をクリックしてみて！『出力の消去』は右クリックじゃないから注意してね」

颯「Hello, world!が消えちゃった！出力の消去ってそういうことか！」

泉「このように、『出力の消去』を選択するとセルを実行して表示された結果(出力)だけを消すことができるんだ。といってもあんまり使うことはないけどね。次に、セルそのものを消す方法についてだけど、これはセルを右クリックした後『セルの削除』をクリックするだけ。簡単でしょ？」

りあむ「まあ、書いてあるまんまだよね。さすがのぼくでも余裕だな」

泉「セルの削除はそこそこ使う頻度が高いから、右クリックからできるってことはよく覚えておいてね。セルを削除して一旦まっさらな状態になったと思うんだけど、このまま次の話に進めるね」

=== コードセルとテキストセル

泉「2人は初めてセルの話をしたとき、コードセルとテキストセルの2種類があるって説明したの、覚えてる？」

颯「うん、覚えてるよ！最初に挿入したのはコードセル、だったよねっ！」

泉「バッチリだね。コードセルは、その名の通りコードを記述するためのセル。テキストセルは……そう、テキスト(文字)を記述するためのセル。コードセルはHello, world!で一度試したから、今度はテキストセルを試してみよう！画面左上にある、『+ テキスト』をクリックしてみて。そうすると、テキストセルが挿入されるよ(@<img>{colab_insert_textcell})」

//image[colab_insert_textcell][テキストセルを挿入する]{
//}

颯「わっ！コードセルと全然見た目が違う！セルの上に色々出てるね！」

泉「それは文字を装飾するためのボタンだよ。まずは何かしらテキストセルに入力して、その後装飾してみよう。試しに私は『はじめてのColab 以下にHello, world!と表示するコードを記述する。』と書いてみたよ(@<img>{colab_write_textcell})。注目すべきは画面の右半分で、ここには打ち込んだ文字がどのように表示されるか表示されるんだ。プレビューってやつだね」

//image[colab_write_textcell][テキストセルの文字がプレビュー欄に表示される]{
//}

りあむ「プレビューって言っても、左に打ち込んだものが右にそのまま出てるだけだよね？」

泉「そう。今はまだ何も装飾してないからね。じゃあ今度は、文字の一部をマウスでドラッグして、上の『B』って書かれているボタンをクリックしてみよう(@<img>{colab_to_bold})」

//image[colab_to_bold][ドラッグした文字が太字になる]{
//}

りあむ「プレビューのほうだと字が太くなったけど、左の入力欄は……なにこれ？ドラッグしてた文字がアスタリスクで挟まれちゃったぞ？」

泉「Colabでは、文字をアスタリスク2つ(@<code>{**})で囲むことで太字にすることができるんだ。これは@<kw>{Markdown, マークダウン}という言語で太字にするための記法で、ColabのテキストセルではMarkdownの記法にしたがって文字を装飾することになっているんだよ。今クリックしたもらった『B』のボタンは『ドラッグしている文字を@<code>{**}で囲む』機能で@<fn>{bold}、裏を返すと@<b>{『B』のボタンを押す代わりに自分で}@<code>{**}@<b>{を入力して文字を囲むことでも太字にできる}、というわけだね」

//footnote[bold][ちなみにBはbold(太字)の頭文字です。]

りあむ「つまり、上のボタンはショートカット的なやつ？Markdownの記法を覚えていればわざわざ使わなくても大丈夫ってことであってる？」

泉「そうだね。どっちを使うかはお好みって感じかな。装飾に使うのはおなじみ半角記号で、日本語入力と相性がいまひとつだから、いちいち全角と半角を切り替えるのが煩わしければボタンのほうが楽かも。その代わりボタンで装飾するためには文字をドラッグする必要があるから、本当に一長一短だね」

颯「はーは一旦ボタンでいいかな。Markdownっていうの、まだよくわかんないし！」

泉「Markdownは慣れるとすごく便利な記法なんだけど、こればかり説明してるとPythonから脱線しすぎちゃうから今回はここまで。この他にも色々な装飾ができるから、興味があったら調べてみてね。太字にできたら、次に画面左上の『+ コード』からコードセルを挿入してみよう(@<img>{colab_finish_textcell})」

//image[colab_finish_textcell][編集していたテキストセルの内容が確定する]{
//}

颯「あっ！テキストセルの見た目が変わった！」

泉「このように、一旦別のセルに移動すると、先ほどまでプレビュー欄に表示されていた見た目そのままの文字が表示されるんだ。もう一度編集したい場合は、テキストセルを右クリックして『編集』をクリックしてね。今回は特に編集し直したりはせず、コードセルに一度消してもらった@<code>{print("Hello, world!")}をもう一度打ち込んでもらえるかな？(@<img>{colab_text_and_codecell})」

//image[colab_text_and_codecell][テキストセルでコードセルの説明ができる]{
//}

りあむ「ははーん？やっとわかったわ！テキストセル、コードセルで何をやるかをメモるのに使うんだな！？」

泉「ざっくり言ってしまうとそうだね。しかも、今回は説明しなかったけど、テキストセルには画像や数式、箇条書きなども挿入できたりするんだ。機能豊富だから、コードセルの説明にもってこい、ってことだね」

=== セルのもう一つの挿入方法

泉「ここまで2人には左上の『+ コード』や『+ テキスト』からセルを挿入してもらったけど、実はもう一つ挿入する方法があるんだ。いま、画面上にテキストセルとコードセルが一つずつ表示されてると思うんだけど、セルとセルの間にマウスカーソルを移動してみて(@<img>{colab_insert_cell_another_method})」

//image[colab_insert_cell_another_method][任意の場所にセルを挿入できる]{
//}

颯「なるほど！ここからでもセルを挿入できるんだね！」

泉「そして、この方法だと好きな場所にセルを挿入できるんだ。『+ コード』や『+ テキスト』からだと一番下にしかセルが追加できないんだね。これまで教えた方法で、2人は好きなだけコードセルやテキストセルを並べたり削除したりできるようになったね。これがColabの基本的な使い方だよ」

颯「最初は難しいかもって思ってたけど、意外と簡単だったかも！」

泉「でしょ？そしてもう一つ、面白い話をしておこうかな。2人はColabに初めてアクセスしたとき、最初に出てきた『Colabへようこそ』って画面、覚えてるかな？(@<img>{welcome_colab})実はあの画面も全部コードセルとテキストセルを組み合わせて作られてるんだ。コードセルは普通に実行できちゃうし、セルを右クリックをすることで編集や削除もできちゃうんだよ」

//image[welcome_colab][Colabのチュートリアル画面(再掲)]{
//}

りあむ「げぇーっ！とんでもない伏線回収きたこれ！！初めて出会った敵がラスボスだったみたいな気分！」

泉「今回説明してない機能もふんだんに盛り込まれているから、これをそっくりそのまま真似するのは大変だけど、Colabではこんなこともできるんだっていう参考にはなるかな。もしじっくり観察してみたかったら、左上の『ファイル』から『ノートブックを開く』を選択して、『Colabolatoryへようこそ』をクリックすることで移動できるよ。元のノートブックに戻るときも同じ手順でね」

颯「ところでさ、セルをたくさん並べられることはわかったんだけど、順番って後から並び替えられたりするのかな？」

泉「もちろん。セルにマウスカーソルを合わせて、↑もしくは↓と書かれたアイコンをクリックするだけだよ(@<img>{colab_move_cell})」

//image[colab_move_cell][セルを移動する]{
//}

颯「できた！簡単だねっ！」

泉「ここまで色々な操作をしてきて、どれもマウスカーソルを合わせると『コードセルを追加』や『セルを上に移動』のようにヒントが出てきたことに気付いたかな？他にも説明してない機能はたくさんあるけど、ぜひ自分で触りながら確かめてほしいな」

=== 値の表示とprint関数

泉「ここまで来たら、Colabのチュートリアルもいよいよ大詰め。今度は値の表示方法について見ていこう。これまでHello, world!って文章を表示するために、文字列の@<code>{"Hello, world!"}を@<code>{print()}という文字で囲んでもらってたでしょ？今度は、新しいコードセルを挿入して、@<code>{"Hello, world!"}とだけ書いて実行してみてもらえるかな(@<img>{colab_double_hello_01})」

//image[colab_double_hello_01][@<code>{"Hello, world!"}とだけ書かれたコードセルを追加]{
//}

颯「えーっと……実行ってどうやるんだっけ？」

泉「そういえばセルの実行、最初のHello, world!以来だったね。セルの左側にある▶をクリックするか、実行したいセルをクリックして選択した状態で、Ctrlキーを押しながらEnterキーを押せば実行できるよ。せっかくだから、@<code>{print()}があるセルとないセル、両方実行してみよう！」

颯「できたっ！どっちでもHello, world!って表示されてる！……けど、ちょっと違う？(@<img>{colab_double_hello_02})」

//image[colab_double_hello_02][下のHello, world!はシングルクォーテーションで囲まれている]{
//}

りあむ「下のやつ、ダブル……じゃなくて、シングルクォーテーションで囲まれてるのか。久々のご対面？」

泉「その通り。下に表示された@<code>{'Hello, world!'}は文字列のHello, world!だね」

りあむ「あー、そういえばシングルクォーテーションで囲んでも、ダブルクォーテーションで囲んでも文字列になるんだったっけ？じゃあ見た目が違うだけで、今ここに出てるHello, world!は全部同じってこと？」

泉「そうだね。下に表示されてるクォーテーション付きの文字列は厳密には@<kw>{公式な文字列}と呼ばれているものなんだけど、今は覚えなくてもいいかな。ただの文字列を@<code>{print()}で囲んだときと囲まなかったときの出力は同じものと考えて大丈夫だよ@<fn>{official_string}」

//footnote[official_string][実は、すべての値(正確にはオブジェクトといいます)は、@<code>{str()}で囲むことで(通常の)文字列に変換でき、同様に@<code>{repr()}というもので囲むことで公式な文字列に変換できます。両者の違いは一言で言ってしまうと人間向けであるかどうかです(@<code>{str()}のほうが人間向け)。セルに@<code>{print()}を使わずオブジェクトをベタ書きしたときに出力されるものは公式な文字列と決まっており、@<img>{colab_double_hello_02}のような結果が得られます。]

颯「これってさ、余計な記号(クォーテーション)はついちゃってるけど、直接文字列を書くだけで出力できちゃうなら、わざわざ@<code>{print()}で囲まなくてもいいんじゃないかなーって思っちゃう。というか、@<code>{print}って結局何？」

泉「これまで2人に入力してもらった@<code>{print}は、@<kw>{関数, function}と呼ばれるものの一種で、正確には@<code>{print}関数というんだ。後ほど詳しく説明するけど、関数を簡潔に表すなら『@<b>{便利な機能をまとめたもの}』@<fn>{function_zakkuri}。@<code>{print}関数は@<code>{()}の中に書かれた値を表示する機能を持つ関数なんだ」

//footnote[function_zakkuri][あまりにざっくりしすぎているので詳しい人から怒られが発生するかもしれませんが、とりあえずはこの認識で大丈夫です。]

りあむ「まあ、想像通りって感じ？一番最初のほうにもそんな話したもんな。けど、それだけだとまだ@<code>{print}関数を使うメリットは見えてこないぞ？？？」

泉「それじゃあ、今度は日本語で『りあむちゃんはかわいい』って表示する処理を追加してみようか。上のセルでは@<code>{print}関数を使って、下のセルでは文字列をベタ書きで。できたら実行してみよう(@<img>{colab_riamu_kawaii})」

りあむ「おうおうおう！？急にどうしたの泉ちゃん！褒めたって何にも出やしないぞ！……まあ、とりあえず入力してみるか。えーっとなになに？……Hello, world!, どこいっちゃったの？」

//image[colab_riamu_kawaii][下のセルを実行してもHello, world!と表示されない]{
//}

泉「実は、Colabではコードセルに書かれたコードのうち、@<b>{一番最後の行に書かれた値だけが表示される仕様}なんだ。こうやって複数行に渡って何かしらの値を表示したければ、@<code>{print}関数の仕様は必須ということになるね」

颯「これを見たら違いは一目瞭然だね！それに、@<code>{print()}って書かれてたほうが『この中に書かれているものを表示しますよー』って言ってる感じがしてわかりやすいかもっ！」

泉「まさにその通りだね。明示的に値を出力したいなら、@<code>{print}関数を使うのが一番！逆に、『とりあえず1つの値を表示できればそれでいい』ってときには@<code>{print()}と書かないほうが楽だから、そのときの状況に応じて使い分けるのがベストかな。ただし、@<code>{print}関数を使っても表示できないものは、@<code>{print()}を省略しても表示できない@<fn>{unable_to_print}からそこは注意だね」

//footnote[unable_to_print][後ほど詳しく説明しますが、例えば文と呼ばれるものは表示できません。]

=== 対話モードとColab

泉「ここまで長かったけど、最後に一つ、対話モードという用語についても説明しておこうかな。実は、Pythonには@<kw>{対話モード, interactive mode}と@<kw>{スクリプトモード, script mode}という2種類のモードがあるんだ。そして、これまで紹介してきたColabは対話モードでPythonを動かすためのツールなんだよ」

りあむ「すごい。知らない単語と知らない単語だ。言葉の響きからわかりそうでわからん、絶妙なラインを攻められてる気分」


