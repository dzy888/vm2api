// 006bb4c0 close_read

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::close_read */

void __rustcall <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::close_read(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x90) == 1) || ((int)*(longlong *)(param_1 + 0x90) == 2)) &&
      (*(uint *)(param_1 + 0x98) < 2)) && (*(longlong *)(param_1 + 200) != 0)) {
    (*(code *)PTR_drop_007994e8)();
  }
  *(undefined8 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0x187) = 2;
  return;
}


