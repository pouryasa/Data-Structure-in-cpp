# ارایه ها

توی این کد من ساختار داده ارایه را نوشتم.
ارایه معمولا برای داده هایی استفاده میشن که تعداد مشخص دارن و از یک نوع هستن(مثلا عدد).
برای دسترسی به اعضای هر ارایه میتونیم از index ارایه استفاده کنیم که به ترتیب از 0 شروع میشن.
داخل این کد **printArray**برای پیمایش و نشان دادن همه ی اعضا ارایه استفاده میشه که پیچیدگی زمانی n داره.
و**insertarr**برای اضافه کردن عضو جدید استفاده میشه و با O(n) نسبت به ساختار داده های دیگه زمان بیشتری برای اضافه کردن عضو جدید نیاز داریم.
بعدی **delarr** هست که من برای حذف یک عضو و جایگذینی اون با صفر استفاده کردم 
و در اخر جستجوی خطی هست که مرتبه زمانی n داره و در حقیقت همه ی اعضای ارایه را میگرده و اولین عضوی که پیدا کنه را بر میگردونه 
در فایل دیگه جستجوی خطی مینویسم که مرتبه زمانی O(logn) داره و بسیار سریع تر عمل میکنه.

## جستجوی باینری

 این جستجوی باینری یا دودویی ادامه بحث ارایه ها میشه که سریع تر از جستجوی خطی عمل میکنه اما یک مشکلی داره بنظر من.
همون طور که داخل این کد میبینید من یک ارایه با تعداد اعضای رندوم درست کردم و بعدش به مشکلی که جستجوی باینری داره میرسیم؛ توی این جستجو باید همه ی داده ها مرتب باشن که اگر داده های ما نامرتب باشن ممکنه خود این کار به زمان جستجو اضافه کنه.
بعد از مرتب سازی حالا میتونیم جستجو کنیم توی این کار ما اول ارایه را به دو قسمت تقسیم میکنیم و بعد مقایسه میکنیم که عدد ما کوچک تر یا بزرگتر خود عدد مورد نظر ماست؛ و اینکار ادامه میدیم تا عدد مورد نظر پیدا کنیم.


