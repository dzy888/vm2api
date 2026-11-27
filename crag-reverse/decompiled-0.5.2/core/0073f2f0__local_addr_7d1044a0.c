// 0073f2f0 local_addr

/* <std[6c98fd8553dbae28]::net::tcp::TcpListener>::local_addr
   <std[6c98fd8553dbae28]::net::udp::UdpSocket>::local_addr
   <std[6c98fd8553dbae28]::net::tcp::TcpStream>::local_addr */

undefined8 __rustcall
<std[6c98fd8553dbae28]::net::tcp::TcpListener>::local_addr(undefined8 param_1,undefined4 *param_2)

{
  <std[6c98fd8553dbae28]::sys::net::connection::socket::TcpStream>::socket_addr(param_1,*param_2);
  return param_1;
}


