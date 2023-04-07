//cài đặt tìm kiếm nhị phân, link tham khảo: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-nhi-phan-binary-search

int BinarySearch(int a[],int n,int x)
{
	int left, right, mid; left=0; right=n-1;
	do{
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]<x){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}while(left<=right);
	return -1;
}
