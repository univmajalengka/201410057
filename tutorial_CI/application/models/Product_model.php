<?php defined('BASEPATH') OR exit('No direct script access allowed');

class Product_model extends CI_Model
{
    private $_table = "produk";

    public $id_produk;
    public $nama;
    public $harga;
    public $image = "default.jpg";
    public $deskripsi;

    public function rules()
    {
        return [
            ['field' => 'nama',
            'label' => 'Nama',
            'rules' => 'required'],

            ['field' => 'harga',
            'label' => 'Harga',
            'rules' => 'numeric'],
            
            ['field' => 'deskripsi',
            'label' => 'Deskripsi',
            'rules' => 'required']
        ];
    }

    public function getAll()
    {
        return $this->db->get($this->_table)->result();
    }
    
    public function getById($id)
    {
        return $this->db->get_where($this->_table, ["id_produk" => $id])->row();
    }

    public function save()
    {
        $post = $this->input->post();
        $this->id_produk = uniqid();
        $this->nama = $post["nama"];
        $this->harga = $post["harga"];
        $this->image = $this->_uploadImage();
        $this->deskripsi = $post["deskripsi"];
        return $this->db->insert($this->_table, $this);
    }

    public function update()
    {
        $post = $this->input->post();
        $this->id_produk = $post["id"];
        $this->nama = $post["nama"];
        $this->harga = $post["harga"];

        if (empty($_FILES["image"]["nama"])) {
                $this->image = $this->_uploadImage();
            }else{
                $this->image = $post["old_image"];
            }
            
        $this->deskripsi = $post["deskripsi"];
        $this->db->update($this->_table, $this, array('id_produk' => $post['id']));
    }

    public function delete($id)
    {
        $this->_deleteImage($id);
        return $this->db->delete($this->_table, array("id_produk" => $id));
    }

    private function _uploadImage()
        {
            $config['upload_path'] = './upload/product/';
            $config['allowed_types'] = 'gif|jpg|png';
            $config['file_name'] = $this->id_produk;
            $config['overwrite'] = true;
            //$config['max_size'] = 1024; // 1MB
            // $config['max_width'] = 1024;
            // $config['max_height'] = 768;

            $this->load->library('upload', $config);

            if ($this->upload->do_upload('image')) {
                return $this->upload->data("file_name");
            }
            print_r($this->upload->display_errors());
            return "default.jpg";
        }
        private function _deleteImage($id)
        {
            $product = $this->getById($id);
            if ($product->image != "default.jpg") {
                $filename = explode(".", $product->image) [0];
                return array_map('unlink', glob(FCPATH."upload/product/$filename.*"));
            }
        }
}
