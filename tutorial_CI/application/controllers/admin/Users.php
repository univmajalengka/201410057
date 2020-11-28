<?php 

	defined('BASEPATH') OR exit('No direct script access allowed');

	class Users extends CI_Controller
	{
		
		public function __construct()
		{
			parent::__construct();
			$this->load->model("product_model");
        	$this->load->library('form_validation');
        	$this->load->model("user_model");
        	if($this->user_model->isNotLogin()) redirect(site_url('admin/login'));
		}
		public function index(){
			$data["users"] = $this->user_model->getAll();
			$this->load->view("admin/user/list", $data);
		}
	}
 ?>