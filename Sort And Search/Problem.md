# Sort and Search

## 1. Các số khác nhau trong mảng

```
Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt.

Input
Dòng đầu tiên là N Dòng thứ 2 là các phần tử trong mảng a1, a2, ... aN

Constraints
1≤n≤2.10^5; 1≤ai≤10^9

Output Format
In ra số lượng phần tử riêng biệt trong mảng.
```

## 2. Sắp xếp theo trị tuyệt đối

```
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự giá trị tuyệt đối tăng dần. Nếu có 2 số có cùng giá trị tuyệt đối thì số nào xuất hiện trước sẽ được in ra trước

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format
In ra các phần tử trong mảng sau khi sắp xếp theo thứ tự tăng dần
```

## 3. Sắp xếp theo tổng các chữ số

```
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số tăng dần, nếu 2 số có cùng tổng chữ số, thì số nào nhỏ hơn sẽ được in trước.

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^5; 0<=A[i]<=10^9

Output Format
In ra các phần tử trong mảng sau khi sắp xếp
``` 

## 4. Khoảng cách nhỏ nhất

```
Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^6; 0<=A[i]<=10^9

Output Format
In ra độ lệch nhỏ nhất của 2 phần tử trong mảng
```

## 5. Số xuất hiện nhiều nhất trong mảng

```
Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format
In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.
```

## 6. Selection Sort

```
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^3; 0<=A[i]<=10^9

Output Format
In ra các bước của thuật toán sắp xếp chọn
```

## 7. Insertsion Sort

```
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chèn

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^3; 0<=A[i]<=10^9

Output Format
In ra các bước của thuật toán sắp xếp chèn
```

## 8. Bubble Sort

```
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp nổi bọt

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^3; 0<=A[i]<=10^9

Output Format
In ra các bước của thuật toán sắp xếp nổi bọt
```

## 9. Binary search

```
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?
Cách 1 : Sắp xếp mảng tăng dần rồi dùng binary_search để tìm kiếm nhanh
Cách 2 : Đưa các phần tử trong mảng vào set để tìm kiếm nhanh
Mỗi truy vấn chỉ mất O(logN)

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

Constraints
1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

Output Format
Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

```

## 10. Binary Search biến đổi

```
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

Input Format
Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints
1<=N<=10^6; 0<=A[i],X<=10^6;

Output Format
In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.
```