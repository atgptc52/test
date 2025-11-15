# 9×9 乘法表程式

這個專案提供一個使用 C 語言撰寫的 9×9 乘法表程式 `nine_nine_table.c`。

## 建置與執行
1. 編譯程式：
   ```bash
   gcc -Wall -Wextra -Werror nine_nine_table.c -o nine_nine_table
   ```
2. 執行程式：
   ```bash
   ./nine_nine_table
   ```

## 如何上傳程式碼到 GitHub
1. 在專案資料夾初始化 Git（若尚未初始化）：
   ```bash
   git init
   ```
2. 新增遠端儲存庫（以 GitHub 為例）：
   ```bash
   git remote add origin https://github.com/<你的帳號>/<儲存庫名稱>.git
   ```
3. 將檔案加入版本控制並提交：
   ```bash
   git add README.md nine_nine_table.c
   git commit -m "Add 9x9 multiplication table program"
   ```
4. 推送到遠端儲存庫：
   ```bash
   git push -u origin main
   ```

若遠端的預設分支名稱不是 `main`，請依照你的儲存庫設定調整推送指令。
