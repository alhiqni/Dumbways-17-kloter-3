let nama,jumlah,potongan, total,harga,satuan;
function hitungBarang (nama, jumlah) {
	if (nama == "A" || nama == 'a'){
		satuan = 4550;
		potongan = 231;
		if( jumlah < 13){
			harga = satuan*jumlah;
			potongan = 0;
			total = harga - potongan;
		} else {
			harga = satuan*jumlah;
			potongan *= jumlah;
			total = harga - potongan;
		}
	} else if (nama == "B" || nama == 'b'){
		satuan = 5330;
		potongan = 0.23;
		if( jumlah < 7){
			harga = satuan*jumlah;
			potongan = 0;
			total = harga - potongan;
		} else {
			harga = satuan*jumlah;
			potongan *= harga;
			total = harga - potongan;
		}
	}

	else if (nama == "C" || nama == 'c'){
		satuan = 8653;
		harga = satuan*jumlah;
		potongan= 'tidak ada'
		total = harga;
	}else {
		console.log('Nama barang yang anda masukan salah\nMasukan nama barang (A, B, C)')
	}

		console.log(`Harga satuan: ${satuan}\nJumlah barang: ${jumlah} \nPotongan: ${potongan}\nTotal: ${total} `);
}