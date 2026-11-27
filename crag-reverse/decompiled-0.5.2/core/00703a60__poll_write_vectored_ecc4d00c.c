// 00703a60 poll_write_vectored

/* <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream as
   tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>::poll_write_vectored */

void __rustcall
<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream_as_tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>
::poll_write_vectored(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = param_1;
  local_10 = param_3;
  local_8 = param_4;
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::poll_io::
  <usize,<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>>::poll_write_vectored::_closure_0_>
            (param_1,param_2,1,&local_18);
  return;
}


