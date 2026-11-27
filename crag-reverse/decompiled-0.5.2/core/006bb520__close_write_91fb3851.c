// 006bb520 close_write

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::close_write */

void __rustcall <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::close_write(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (((3 < lVar1 + 0x7ffffffffffffffeU || lVar1 + 0x7ffffffffffffffeU == 1) &&
      (-0x7fffffffffffffff < lVar1)) && (lVar1 != -1)) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100) + 0x38;
      lVar3 = 1 - *(longlong *)(param_1 + 0x108);
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (**(code **)(*(longlong *)(lVar2 + -0x38) + 0x20))();
        }
        lVar2 = lVar2 + 0x20;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0x8000000000000005;
  *(undefined1 *)(param_1 + 0x187) = 2;
  return;
}


