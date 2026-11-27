// 006b1460 on_error

/* <hyper[c4782d5b5c5e3493]::proto::h1::role::Server as
   hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>::on_error */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::role::Server_as_hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>
::on_error(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  
  if (*(char *)(*param_2 + 0x10) == '\0') {
    bVar1 = *(byte *)(*param_2 + 0x11);
    bVar3 = 5;
    if (3 < bVar1) {
      bVar3 = bVar1 - 4;
    }
    if ((bVar3 < 7 & 0x7bU >> (bVar3 & 0x1f)) != 0) {
      uVar2 = *(undefined2 *)(&DAT_001a69e0 + (ulonglong)bVar3 * 2);
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[4] = 8;
      param_1[7] = 8;
      param_1[8] = 0;
      param_1[9] = 2;
      param_1[10] = 0;
      *(undefined2 *)(param_1 + 0xb) = 0;
      param_1[0xc] = 0;
      *(undefined2 *)(param_1 + 0xd) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0x6a) = 2;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


