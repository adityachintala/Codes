// #include <iostream>
// using namespace std;

// class BST
// {
// public:
//     BST()
//     {
//         data = 0;
//         left = right = NULL;
//     }
//     BST(int data) : data(data), left(NULL), right(NULL)
//     {
//     }
//     BST *insert(BST *root, int data)
//     {
//         if (!root)
//         {
//             return new BST(data);
//             ;
//         }
//         else if (data > root->data)
//         {
//             root->right = insert(root->right, data);
//         }
//         else
//         {
//             root->left = insert(root->left, data);
//         }
//         return root;
//     }

//     void Inorder(BST *root)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         Inorder(root->left);
//         cout << root->data << " ";
//         Inorder(root->right);
//     }

//     void secondLargest(BST *root, int &c){
//         if (root == NULL || c >= 2)
//             return;
//         secondLargest(root->right, c);
//         c++;
//         if (c == 2){
//             cout << "second maximum element is:"
//                  << root->data << endl;
//             return;
//         }
//         secondLargest(root->left, c);
//     }

//     void secondSmallest(BST *root, int &c){
//         if (root == NULL || c >= 2)
//             return;
//         secondSmallest(root->left, c);
//         c++;
//         if (c == 2){
//             cout << "second minimum element is:"
//                  << root->data << endl;
//             return;
//         }
//         secondSmallest(root->right, c);
//     }

// private:
//     int data;
//     BST *left;
//     BST *right;
// };

// int main()
// {
//     BST b, *root = NULL;
//     root = b.insert(root, 50);
//     b.insert(root, 30);
//     b.insert(root, 20);
//     b.insert(root, 40);
//     b.insert(root, 70);
//     b.insert(root, 60);
//     b.insert(root, 80);

//     b.Inorder(root);
//     int c = 0;
//     b.secondLargest(root, c);
//     c = 0;
//     b.secondSmallest(root, c);
// }

/* WAP to create Binary Search tree for given numbers, 
   find the second maximum, second minimum element in that tree,
   Print the elements in Post order Traversal
*/
   
#include<iostream>
using namespace std;

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1);

	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


int main()
{
    int n;
    cout << "Enter Number of elements : ";
    cin >> n;
	int arr[n];
	cout << "Input :";
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	quickSort(arr, 0, n-1);
	printf("Sorted array: ");
	int i;
	for (i=0; i < size; i++)
	    cout << arr[i] << " ";
	printf("\n");
	return 0;
}
