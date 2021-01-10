# multiWindowShare
openframeworksで複数ウィンドウを出力し、ウィンドウ間で変数を共有します。<br>
openframeworksのexample/windowing/multiWindowExampleの複数のウィンドウ出力では、<br>
GuiAppの変数にofAppからアクセスすることはできますが、逆はできません。<br>
本プログラムでは、新しいクラスStateを作り、そこに共有したい変数を書くことで、両者からアクセスすることが可能です。<br>
<br>
詳しくは、以下のforumを参考にしました。<br>
https://forum.openframeworks.cc/t/shared-objects-between-windows/31874<br>
<br>
結果動画<br>
https://youtu.be/BgKRdR64ZSk
