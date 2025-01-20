= ようこそ、プログラミングの世界へ

== プログラミングって何？

泉「さて、それじゃあ始めようか。プログラミングのレッスン」

颯「よろしくお願いしまーす！はーにこんなお仕事が来ると思ってなかったけど、やるからには全力で挑戦しないとねっ。ただ、プログラミング？っていうの、すごい人がパソコンの前でぶわーって文字を打ち込んでるイメージしかなくて、ちょっと不安かも……」

りあむ「真っ暗な部屋でキーボードをダダダーって打ち込んでるやつね、わかるわかる」

泉「大丈夫だよ。」

颯「実は、プログラミングっていうもの自体あんまりよくわかってないんだよね……。プログラム？とは何が違うの？」

泉「@<kw>{プログラミング, programming}は、コンピュータに対する命令である@<kw>{プログラム, program}を作成することを指す言葉だよ。プログラムが作るもので、プログラミングが作る行為・行動のこと。つまり、これから颯ちゃんとりあむさんと一緒に学んでいくのは、プログラムを作成するための方法、ということになるね」

りあむ「もしかして、@<kw>{プログラマー, programmer}はプログラムを作成する人、つまりプログラミングをする人ってこと？」

泉「大正解！Youtubeで活動している人をYoutuber、っていうのと同じだね」

颯「単語の意味がわかるだけでも、だいぶイメージが掴みやすくなったかもっ！それで、プログラムっていうのは具体的にどういうものなの？」

泉「プログラムはコンピュータへの命令や処理を順序立てて書いたものだよ。もちろんルールにしたがって正確に書く必要はあるけど、誤解を恐れず言うならただの文字(テキスト)だね。例えばこんなものも、今回学ぶPythonで動作する立派なプログラムだよ」

//list[1+1][Pythonで動作するプログラムの例]{
    1 + 1
//}

颯「え、これもプログラムなの！？なんか意外！」

泉「だから、プログラムはパソコンでメモ帳を開いて、ささっと作ることもできるんだよ。こう聞くと少しハードルも下がったかな？ちなみに、プログラムとして書かれた文字のことを@<kw>{ソースコード, source code}、あるいは単に@<kw>{コード, code}というから、それも覚えておいてね」

りあむ「ソースって、調味料のことじゃなくて、出典とか情報源みたいな意味だよね？@<fn>{sauce}よくネットで『ソースは？』って聞かれちゃったりするやつ@<fn>{source}。りあむちゃんもレスバ@<fn>{responce_battle}で何度言われたことか……」

//footnote[sauce][調味料のソースは英語でsauceと書きます。]
//footnote[source][「その情報はどこが出典？」という意味。根拠や情報源が乏しい情報に対してよく見られる返答。]
//footnote[responce_battle][レスポンスバトル、またレスバトルの略。ネット上で繰り広げられる口喧嘩のこと。]

泉「そうだね。ここでは源(みなもと)っていう解釈だと自然かな？私たちはソースコードを書いて、それをプログラムとしてコンピュータに命令して、実行してもらう。この一連の作業をプログラミングということをよく覚えておいてね」

== プログラミング言語

泉「さて、次はプログラムの種類について見ていこう。一言でプログラムと言っても、日本語や英語みたいに様々な種類のもの(言語)が存在するんだ。これらを総称して@<kw>{プログラミング言語, programming language}というよ」

りあむ「今回勉強するのはPythonっていう言語なんだっけ？どんな言語なの？」

泉「@<kw>{Python}は1991年に開発された言語で、2025年2月現在、世界で最も利用されている言語の一つだよ。数値計算や画像処理、今流行りの人工知能(AI)を用いたプログラミングのほか、私たちに身近なものだとYoutubeやInstagram、Spotifyなどの開発にも利用されてたりするんだ」

颯「えーすごいすごい！Python、そんなところでも使われてたんだ！もしかして、今回そこまで学べたりしちゃうやつ！？」

泉「あはは、流石にちょっと難しいかな……。とはいえ、Pythonで色んなことができちゃうのは確かだから、今回の勉強で興味が湧いたら調べてみてね」

りあむ「ところでさ、世の中にはPython以外にも色んな言語があるんだよね？なんで今回Pythonをやるの？」

泉「いくつか理由があるから、順を追って説明するね@<fn>{only_python}。まずは何と言ってもPythonではコードをシンプルかつ簡単に書けること。例えば以下にC言語@<fn>{c_lang}、Java@<fn>{java}という言語とPythonの3言語でそれぞれ"Hello, world!"という文字を出力するコードを示してみたんだけど、比べてみてどう？」

//footnote[only_python][本当は筆者が唯一筆を取れるレベルで知っている言語だからです(ゴリゴリのメタ発言)。]
//footnote[c_lang][1972年に開発されたプログラミング言語で、登場から半世紀以上経った2025年現在も世界中で広く利用されています。現在主流の言語と比べると仕様がやや難解で、扱うのが少々難しい言語ですが、利用されている分野の広さなどから現在でも多くの人々に学習されています。]
//footnote[java][1996年に開発されたプログラミング言語で、C言語やPython同様非常にメジャーな言語の一つです。名前がよく似たJavaScriptという言語も存在しますが、こちらはJavaと全くの別物で、しばしば『インドとインドネシアくらい違う』『メロンとメロンパンくらい違う』などと形容されます。]

//listnum[c_hello][C言語で書かれた"Hello, world!"を表示するプログラム]{
#include<stdio.h>
int main(void){
    print("Hello, world!");
    return 0;
}
//}

//listnum[java_hello][Javaで書かれた"Hello, world!"を表示するプログラム]{
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, world!");
    }
}
//}

//listnum[python_hello][Pythonで書かれた"Hello, world!"を表示するプログラム]{
print("Hello, world!")
//}

颯「他2つと比べると、Pythonはすごくシンプルかも！」

泉「もう一つ、同じ整数を2回かけた数@<fn>{square_number}を1から9までまとめて1つのデータに入れるコードも比べてみよう@<fn>{data_for_array}。もちろん意味は理解できなくて大丈夫だから、今は文字の多さだけで比較してみて」

//footnote[square_number][このような数を平方数といいます。]
//footnote[data_for_array][C言語とJavaでは配列、Pythonではリストと呼ばれるデータを利用しています。Pythonのリストについては◯章で解説します。]

//listnum[c_sum][C言語で書かれた平方数を列挙するプログラム]{
#include<stdio.h>
int main(void){
    int square_numbers[9];
    for(int i=1; i<=9; i++){
        square_numbers[i - 1] = i*i;
    }
    return 0;
}
//}

//listnum[java_sum][Javaで書かれた平方数を列挙するプログラム]{
public class SquareNumber {
    public static void main(String[] args) {
        int[] square_numbers = new int[9];
        for(int i=1; i<=9; i++) {
            square_numbers[i - 1] = i*i;
        }
    }
}
//}

//listnum[python_sum][Pythonで書かれた平方数を列挙するプログラム]{
square_numbers = [i*i for i in range(1, 10)]
//}

颯「え、Pythonだとこれもこんなに短く書けちゃうの！？これならはーでもできちゃうかもっ！」

りあむ「ちょいちょいちょい、確かにシンプルなのはわかったんだけどさ、これってどんなコードでもそうなの？特に2つ目の例とか、こう……作為的？というか。わざと短くなる例を選んだんじゃないのって思っちゃうかも……」

泉「りあむさんは鋭いね。1つ目の例は後で紹介する有名なプログラムだけど、2つ目の例についてはわざとPythonだと極端に短く書ける例@<fn>{list_comprehensions}を挙げているから、シンプルなのは当たり前。ただ、それでもPythonでは全体的にコードを簡潔に書ける傾向にあるのは確かで、文法も簡単だから私は初心者向けかなって思う」

//footnote[list_comprehensions][ここではリスト内包表記という記法を利用しています(これも◯章で解説します)。リスト内包表記を用いず、C言語やJavaのようにfor文と呼ばれる文を用いて書くこともでき、その場合はもう少しだけコードが長くなります。]

泉「今回は比較対象としてC言語とJavaを選んだけど、もちろんPythonのようにコードが短く書ける言語は他にもあるよ。今回はわざとコード量の多い言語を選んだわけじゃなく、Pythonと同じくかなりメジャーな言語から抜粋してるからそこは安心してね@<fn>{tiobe_index}」

//footnote[tiobe_index][オランダのTIOBE Software社が毎月発表している、プログラミング言語の人気度を示す指標であるTIOBE Indexでは、それぞれPythonが1位、Javaが3位、C言語が4位に位置づけています(2025年1月現在)。なお、人気度の計算には主にGoogleなどの検索エンジンにおける検索結果が用いられています。]

りあむ「なるほど」

泉「あと意外と見落としがちだけど、コードが短く書けるとプログラミングに慣れてきたあとも恩恵があるんだよね。さっと書けるから楽だし、簡単に目を通せるからね」

泉「続いて2つ目の理由は、@<kw>{インデント, indentation}が意味を持つこと。インデントは日本語で字下げともいうんだけど、どういうものかは図を見てもらったほうが早いと思う」

泉「このように、行の先頭(行頭)に空白を設けて他の行より後ろから書き始めることをインデントと言うんだ」

颯「インデントっていう言葉は初めて聞いたけど、色んなところで見かける書き方かも！でも、『インデントが意味を持つ』ってどういうこと？」

泉「例えば、さっき紹介したC言語やJavaはインデントにとりわけ意味はなくて、行頭に空白を入れても入れなくても見た目が変わるだけで動作に変わりはないの。それに対してPythonは処理の区切りやまとまりをインデントで表現する言語で、言い方を変えると『インデントを理解しないとコードが書けない』言語であるとも言えるんだよ」

※プログラミング言語が持つこのような規則を@<kw>{オフサイドルール, off-side rule}といいます。

颯「え？それってなんだか難しそうじゃない？インデントを使うも使わないも自由なほうが楽な気もしちゃうなー」

泉「ところがそういうわけにもいかないんだ。さっき見てもらったコード、覚えてる？」

りあむ「あっ、よく見たらC言語でもJavaでもインデントが使われてるじゃん！」

泉「気付いた？実はPythonに限らず、どの言語でもコードをより読みやすくするためにインデントはごく当たり前に利用されているんだ。Pythonでは」

泉「3つ目の理由は、とにかく有名であること！利用者が多い分、疑問点が」

泉「ただし、情報が多い分、」

泉「さて、ここまでPythonが初心者向けである理由をいくつか見てきたけど、もちろん初心者には向かない点もあるから、それも併せて紹介するね。1つ目は、コードがシンプルであること」

りあむ「あれ？さっきそれ利点として聞かなかったっけ？」

泉「コードがシンプルなのは、初心者にとって簡単である一方、」

泉「一つ覚えていてほしいのは、どの言語にもいいところ、悪いところがあるということ。ある言語では簡単にできる処理が他の言語ではすごく難しいっていう状況は往々にあるし、簡単にできたかと思えば処理にやたら時間がかかったりすることだってある。この言語さえマスターすれば十分、この言語さえあれば他に何もいらない、なんてことはもちろんない。今回は学びやすさの観点からPythonを選んだけど、他にも世の中にはたくさんの素敵な言語があるから、興味を持ったらぜひ学習してほしいかなって思う」

== プログラミングのはじめかた

=== 最大の壁、環境構築

泉「今回はGoogle社が提供しているGoogle Colaboratoryを利用して学習を進めていくよ。Google ColaboratoryはJupyter NotebookというWebアプリケーションをクラウド上で利用できるようにした……」

颯「うわ、英語ばっかで急にわけわかんなくなっちゃった！泉ちゃん、もう少しゆっくり！」

泉「ごめんごめん、順を追って説明するね。まず、◯章でプログラムの正体はただの文字だっていう話をしたと思うんだけど、別途これを実行するための環境(開発を行う作業場)を準備しなくちゃならないんだ。大前提としてPythonそのものを用意するのはもちろん、コードを書くためのテキストエディタ@<fn>{editor}やIDE@<fn>{IDE}といったツールを揃えたり、場合によっては仮想環境と呼ばれる環境を別途用意したりと、準備しなくちゃならないことはたくさんあるの。こういった準備のことを環境構築といって、私たちがプログラミングをする上で最初にして最大の難関って言う人もいるくらいだね」

//footnote[editor][文字(テキスト)を編集するためのソフトウェアです。Windowsであれば「メモ帳」が特に有名かと思います。]
//footnote[IDE][Integrated Development Environmentの略で、日本語では@<kw>{統合開発環境}といいます。ソフトウェア開発に必要なツールが一式揃った環境のことを指します。]

りあむ「プログラミングを学ぶ前から色々なことを知ってないといけないのか……ぼくたち初心者にはハードルが高いかも……」

泉「純粋なプログラミングとは必要な知識が異なるし、ゆくゆくは知っておきたいことではあるんだけどね。『まずはお試しで遊んでみたい！』っていうモチベーションの人にとっては高いハードルだし、特に独学で始めた人が先に進めなくなって挫折しちゃう原因の一つなんだ。学校やプログラミングスクールのようなサポートが手厚い環境であれば、プログラミングの準備が整うまで手伝ってもらうこともできるんだけど、なかなか難しいよね……」

泉「そこで登場するのが@<kw>{Jupyter Notebook}というアプリケーション。これはEdgeやGoogle ChromeのようなWebブラウザで扱うことができて、直感的にプログラミングを行うことができるんだ@<fn>{jupyter_support_lang}。」

//footnote[jupyter_support_lang][かつてはIPython Notebookという名前で、文字通りPythonのための環境でしたが、現在では様々な言語が利用可能です。]

りあむ「Webブラウザって普段からググったり@<fn>{google}するときに使うやつだよね？そのJupyter Notebookっていうのを使えば、さっき言ってた環境構築っていうのをしなくてもプログラミングできちゃうって感じ？」

//footnote[google][インターネット検索サイトのGoogleで検索すること。この本の読者ならだいたい知ってそうですね。]

泉「残念ながらJupyter Notebookを利用する場合であっても環境構築は必要なんだ。というのも、Jupyter NotebookはWebブラウザで動作こそすれど、結局自分のPCにインストールしないと利用できないものだから。裏を返せばインターネットに接続していなくても使えちゃう、ってことでもあるんだけどね……」

りあむ「あ！りあむちゃんわかっちゃったぞ！ここで最初に話してたGoogleほにゃららっていうのが出てくるんだな！？」

泉「その通り！Googleが提供する@<kw>{Google Colaboratory}、通称@<kw>{Colab}はJupyter Notebookをベースに開発されたサービスで、Googleのアカウントさえ持っていれば利用可能なんだ。インストールも不要で、Webブラウザからアクセスするだけでいいから、初心者にはもってこいだね」

颯「やっとはーでもできる希望が見えてきたっ！」

泉「じゃあ、ここに」

//listnum[python_first_hello][Hello, world!と表示するプログラム]{
print("Hello, world!")
//}

颯「ハロー・ワールドってさっきも見たかも！こんにちは、世界、って意味？」

泉「そんなところかな。Hello, world!は半世紀ほども前から広く知られている一文で、多くの入門書でまず最初に『この文章を出力(表示)すること』がプログラムの例として挙げられているんだ」

りあむ「じゃあ、@<code>{print}っていうのでHello, world!って文字を出力してるってこと？」

泉「その通り！詳しくは後々順を追って説明するから、まずはキーボードで入力してみよう。できたかな？」

颯「あれ？泉ちゃん、『@<code>{"}』ってどうやって打つの？」

泉「Shiftキーを押しながら2を押してみて@<fn>{double_quote}。この記号はダブルクォーテーションっていって、英語圏では台詞などを表す際に用いられるよ@<fn>{quotation_mark}」

//footnote[double_quote][本書ではJIS配列と呼ばれる配列(配置)を採用した、日本で最も一般的なキーボードを対象としています(あえてそのようなキーボードを購入していない限り、皆さんが使用しているキーボードはJIS配列なのでご安心ください)。もしUS配列などの異なるキーボードをお持ちの方は各自で検索ください。]
//footnote[quotation_mark][日本語におけるカギ括弧のようなものです。このような記号を引用符といいます。]

颯「できた！泉ちゃん、ありがとう！」

泉「りあむさんも入力できた？入力が終わったら、」

颯「出た！Hello, world!って表示されてる！」

泉「おめでとう、それが記念すべき颯ちゃんの最初のプログラムだね。ようこそ、プログラミングの世界へ！」

りあむ「まって。なんかぼくのは全然違う感じなんだけど。これ絶対あってないよね？ね？？？」

泉「あ、りあむさん。それ全角文字になっちゃってる。多くのプログラミング言語では、原則全角文字は使わないんだ。後で例外も出てくるけど、基本的には半角モードに切り替えて入力するようにしてね。これでどうかな？」

りあむ「が～～～！！！またなんか出てきた！今度はなんなんだよう！」

泉「うーん、今度はちゃんと打ててるように見えたんだけど……あっ、これもしかして『@<code>{'}』(シングルクォーテーション)を2個並べた？全角でも半角でも、Shiftキーと2を同時押し、は変わらないよ。正しく入力できたら、Hello, world!って文字の色が変わるはず」

りあむ「できた！！！……できたんだけど、これ、もしかして前途多難ってやつ！？なんか思ったより難しくない！？ぴえん！」

泉「私もこれまでに何度かプログラミングを教えたことがあるんだけど、文字を打つのって意外と難しいんだよね……というわけで、次のレッスンは『キーボードの使い方』！一見遠回りかもだけど、正しく文字を入力できないとプログラミングは始まらない。この機会に、まとめて勉強しちゃおう！@<fn>{keyboard}」

//footnote[keyboard][普段からPCをお使いで、既にキーボードでの文字入力に慣れている方は◯章(P△)へお進みください。]

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

