// 007103d0 new

/* <mio[4b4dae02747c797f]::waker::Waker>::new */

uint * __rustcall <mio[4b4dae02747c797f]::waker::Waker>::new(uint *param_1)

{
  int local_18;
  uint local_14;
  undefined8 local_10;
  
  <mio[4b4dae02747c797f]::sys::unix::waker::Waker>::new(&local_18);
  if (local_18 != 1) {
    param_1[1] = local_14;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_10;
  }
  *param_1 = (uint)(local_18 == 1);
  return param_1;
}


