# 📚 Library Management System

Hệ thống quản lý thư viện được xây dựng bằng ngôn ngữ **C**, cho phép thêm/xóa/sửa sách, quản lý người dùng, và thực hiện mượn - trả sách. Dự án giúp người học hiểu cách tổ chức chương trình theo module và sử dụng struct trong C.

---

## 🎯 Mục tiêu dự án
- Rèn luyện kỹ năng lập trình C theo hướng tách file `.c` / `.h`.
- Minh họa cách quản lý dữ liệu bằng `struct` và mảng.
- Mô phỏng quy trình cơ bản của hệ thống quản lý thư viện thực tế.

---
main.c → Menu chính, gọi các chức năng
books.c/.h → Quản lý sách (thêm, sửa, xóa, tìm, hiển thị)
users.c/.h → Quản lý người dùng
loans.c/.h → Xử lý việc mượn và trả sách
app.exe → File chạy (có thể cho vào .gitignore)
- - - 
## 🖥 Giao diện minh họa (Console)

| Menu | Chức năng |
|------|----------|
| 1 | Thêm sách mới vào hệ thống |
| 2 | Sửa thông tin sách |
| 3 | Xóa sách (nếu không có ai mượn) |
| 4 | Thêm người dùng |
| 5 | Mượn sách |
| 6 | Trả sách |
| 7 | Tìm sách theo tên |
| 8 | Tìm sách theo tác giả |
| 9 | Hiển thị tất cả sách |
| 10 | Hiển thị tất cả người dùng |
| 0 | Thoát |

ví dụ: 
Chon: 1
Nhap ID sach: 101
Nhap ten sach: LapTrinhC
Nhap ten tac gia: NguyenVanA
✅ Them sach thanh cong!


Chon: 4
Nhap ID nguoi dung: 1
Nhap ten nguoi dung: Minh
✅ Them nguoi dung thanh cong!


Chon: 5
ID nguoi dung: 1
ID sach: 101
✅ Muon sach thanh cong!



Chon: 9

--- Danh sach sach ---
ID: 101 | LapTrinhC - NguyenVanA | Dang muon


Chon: 6
ID nguoi dung: 1
ID sach: 101
✅ Tra sach thanh cong!


