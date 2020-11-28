<?php 
	
	/**
	 * 
	 */
	class User_model extends CI_Model
	{
		
		private $_table = "user";

		public function doLogin()
		{
			$post = $this->input->post();

			//cari user berdasar email/username
			$this->db->where('email',$post["email"])->or_where('username',$post["email"]);
			$user = $this->db->get($this->_table)->row();

			//jika user terdaftar
			if ($user) {
				//periksa password
				$isPasswordTrue = password_verify($post["password"], $user->password);
				//periksa role
				$isAdmin = $user->role == "admin";

				//jika password benar dan admin
				if ($isPasswordTrue && $isAdmin) {
					$this->session->set_userdata(['user_logged' => $user]);
					$this->_updateLastLogin($user->id_user);
					$this->_isActive($user->id_user);
					return true;
				}
			}
			//login gagal
			return false;
		}

		public function isNotLogin()
		{
			return $this->session->userdata('user_logged') === null;

		}
		private function _updateLastLogin($id_user)
		{
			$sql = "UPDATE {$this->_table} SET last_login=now() WHERE id_user={$id_user}";
			$this->db->query($sql);
		}
		public function _isActive($id_user)
		{
			$sql = "UPDATE {$this->_table} SET is_active='1' WHERE id_user={$id_user}";
			$this->db->query($sql);
		}
		public function _isNonActive($id_user)
		{
			$sql = "UPDATE {$this->_table} SET is_active='0' WHERE id_user={$id_user}";
			$this->db->query($sql);
		}
		public function getAll()
		{
			return $this->db->get($this->_table)->result();
		}
	}

 ?>