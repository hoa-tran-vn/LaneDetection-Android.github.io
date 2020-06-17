# LaneDetection-Android.github.io

Bài tập lớn: Xử lý ảnh

Đề tài: nhận diện làn đường sử dụng phương pháp biến đổi Hough và chạy trên thiết bị có hệ điều hành Android

Nhóm 19: 
- Trần Quốc Hòa         1711442
- Phạm Phương Thanh     1713112
- Nguyễn Đức Tuấn       1713790
  
-----------------------------------------------------------------------------------------------------------------------

Chia làm các file chính:
- MainActivity.java: là nơi cấu hình thiết bị, cho phép mở camera, thiết lập các trạng thái cơ bản của camera và ứng dụng Android. Load module openCV (cách import và tạo module sẽ đề cập trong file "setup_guide.txt"). Cắt các frame làm đầu vào của thuật toán nhận diện làn đường.
- OpenCVNativeClass.java: là nơi khai báo hàm xử lý ảnh.
- com_example_opencvprject_OpenCvNativeClass.cpp: là nơi xử lý ảnh.
- com_example_opencvprject_OpenCvNativeClass.h: thư viện dùng để kết nối com_example_opencvprject_OpenCvNativeClass.cpp và các module khác
- Android.mk và Application.mk: vì project sử dụng thư viện OpenCV tĩnh và build trên NDK nên cần 2 file này để khi build project thì com_example_opencvprject_OpenCvNativeClass.cpp build trước, tự động tạo ra thư viện dùng để reference.
- setup_guide.txt: hướng dẫn setup project này trên thiết bị của bạn.
  
-----------------------------------------------------------------------------------------------------------------------

- Sử dụng NDK (Native Deverlopment Kit), là thiết lập công cụ cho phép sử dụng code C/C++ làm việc với android, cung cấp các thư viện nền tảng có thể sử dụng để quản lý các hoạt động và truy cập vào các thành phần thiết bị vật lý. Sử dụng trong các ứng dụng đòi hỏi độ trễ thấp.
- Sử dụng JNI (java Native Interface) (nằm trong NDK) cho phép một chương trình Java chạy trên máy ảo java có thể gọi các hàm/chương trình viết bằng ngôn ngữ native (C/C++/assembly).
- Sử dụng OpenCV để hỗ trợ việc lập trình.
- Các bước xử lý ảnh:
    + Lấy từng frame từ camera làm input.
    + Chuyển về thang xám.
    + Lấy ngưỡng để giữ lại các làn đường.
    + Nhận diện cạnh.
    + Biến đổi Hough.
    + Vẽ các đường.
  
[![Result of project](https://gifs.com/gif/1Wo5NP)](https://www.youtube.com/watch?v=zesafNcvtuY&feature=youtu.be)
