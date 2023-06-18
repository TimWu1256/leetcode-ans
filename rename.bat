@echo off
setlocal enabledelayedexpansion

rem 設定要處理的檔案路徑
set "folder_path=D:\myCode\VScodeProjects\Tim\LeetCode\leetcode-ans\test"

rem 迴圈處理檔案
for %%F in ("%folder_path%\*.cpp") do (
    set "filename=%%~nF"
    set "extension=%%~xF"

    rem 移除數字後的空格
    set "filename=!filename:~0,3!!filename:~4!"

    rem 替換空格為連字符
    set "new_filename=!filename: =-!"

    rem 轉換大寫為小寫
    set "new_filename=!new_filename:A=a!"
    set "new_filename=!new_filename:B=b!"
    set "new_filename=!new_filename:C=c!"
    set "new_filename=!new_filename:D=d!"
    set "new_filename=!new_filename:E=e!"
    set "new_filename=!new_filename:F=f!"
    set "new_filename=!new_filename:G=g!"
    set "new_filename=!new_filename:H=h!"
    set "new_filename=!new_filename:I=i!"
    set "new_filename=!new_filename:J=j!"
    set "new_filename=!new_filename:K=k!"
    set "new_filename=!new_filename:L=l!"
    set "new_filename=!new_filename:M=m!"
    set "new_filename=!new_filename:N=n!"
    set "new_filename=!new_filename:O=o!"
    set "new_filename=!new_filename:P=p!"
    set "new_filename=!new_filename:Q=q!"
    set "new_filename=!new_filename:R=r!"
    set "new_filename=!new_filename:S=s!"
    set "new_filename=!new_filename:T=t!"
    set "new_filename=!new_filename:U=u!"
    set "new_filename=!new_filename:V=v!"
    set "new_filename=!new_filename:W=w!"
    set "new_filename=!new_filename:X=x!"
    set "new_filename=!new_filename:Y=y!"
    set "new_filename=!new_filename:Z=z!"

    rem 組合新的檔名
    set "new_filename=!new_filename!!extension!"

    echo Renaming file: %%F to !new_filename!

    rem 執行檔案重命名
    ren "%%F" "!new_filename!"
)

echo All files renamed successfully!
