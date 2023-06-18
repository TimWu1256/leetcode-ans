$folder_path = "D:\myCode\VScodeProjects\Tim\LeetCode\leetcode-ans\test"
$ext_list = ".c", ".cpp"
$pattern = "^\d+\.[a-z]+(-[a-z]+)*\.[a-z]+$"

# 迴圈處理檔案
foreach ($ext in $ext_list) {
    $files = Get-ChildItem -Path "$folder_path\*$ext" -File
    foreach ($file in $files) {
        $filename = $file.Name

        if ($filename -notmatch $pattern) {
            # 移除第一個空格並替換空格為連字符
            $new_filename = $filename -replace '^(.*?)\s', '$1' -replace ' ', '-'

            # 轉換大寫為小寫
            $new_filename = $new_filename.ToLower()

            Write-Host "Renaming file: `"$($file.Name)`" to `"$new_filename`""

            # 執行檔案重命名
            Rename-Item -Path $file.FullName -NewName $new_filename
        }
    }
}

Write-Host "Renaming Process is completed."
