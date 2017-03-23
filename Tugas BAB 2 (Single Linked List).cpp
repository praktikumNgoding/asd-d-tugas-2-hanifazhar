#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class linkedList{
	public:
	Node *Head;
	Node *Tail;
	
	void inisialFirst(int a){
		cout<<"Inisialisasi awal :"<<endl;
		Node *baru = new Node();
		Head = baru;
		Tail = baru;
		baru->data=a;
		baru->next=NULL;
	}
	void awal(int a){
		cout<<"Insert data baru di awal :"<<endl;
		Node *baru = new Node();
		baru->data=a;
		baru->next=Head;
		Head=baru;
	}
	void akhir(int a){
		cout<<"Insert data baru di akhir :"<<endl;
		Node *baru = new Node();
		Node *ganti = new Node();
		ganti=Tail;
		baru->data=a;
		ganti->next=baru;
		baru->next=NULL;
		Tail=baru;
	}
	void setelahTertentu(int a,int b){
		cout<<"Insert data baru setelah node tertentu :"<<endl;
		Node *baru = new Node();
		Node *after = new Node();
		after=Head;
		baru->data=a;
		while(after->data!=b){
			after=after->next;
		}
		baru->next=after->next;
		after->next=baru;
	}
	void sebelumTertentu(int a,int b){
		cout<<"Insert data baru sebelum node tertentu :"<<endl;
		Node *baru = new Node();
		Node *before = new Node();
		Node *prevbefore = new Node();
		before=Head;
		baru->data=a;
		while(before->data!=b){
			prevbefore=before;
			before=before->next;
		}
		prevbefore->next=baru;
		baru->next=before;
	}
	void hapusAwal(){
		cout<<"Delete data baru di awal :"<<endl;
		Node *hapus = new Node();
		hapus = Head;
		Head = Head->next;
		delete hapus;
		}
	void hapusAkhir(){
		cout<<"Delete data baru di akhir :"<<endl;
		Node *hapus = new Node();
		Node *cari = new Node();
		hapus=Head;
		while(hapus!=Tail){
			cari=hapus;
			hapus=hapus->next;
		}
		cari->next=NULL;
		cari=Tail;
		delete hapus;
	}	
	void hapusTertentu(int a){
		cout<<"Delete data baru setelah node tertentu :"<<endl;
		Node *hapus = new Node();
		Node *cari = new Node();
		hapus = Head;
		while(hapus->data!=a){
			cari=hapus;
			hapus=hapus->next;
		}
		cari->next=hapus->next;
		delete hapus;
	}
	void hasil(){
		Node *baru = new Node();
		baru=Head;
		while(baru!=NULL){
			cout<<baru->data<<" -> ";
			baru=baru->next;
		}
		if(baru==NULL){
			cout<<"NULL";
		}
		cout<<endl<<endl;
	}
};

int main(){
	linkedList list;
	list.inisialFirst(25);
	list.hasil();
	list.awal(10);
	list.hasil();
	list.akhir(60);
	list.hasil();
	list.setelahTertentu(50,10);
	list.hasil();
	list.sebelumTertentu(30,60);
	list.hasil();
	list.hapusAwal();
	list.hasil();
	list.hapusAkhir();
	list.hasil();
	list.hapusTertentu(25);
	list.hasil();
	system("Pause");
	return 0;
}
